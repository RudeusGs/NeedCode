public class TaskManager {
    private Dictionary<int, (int userId, int priority)> taskMap;
    private PriorityQueue<(int priority, int taskId, int userId), (int, int)> pq;
    public TaskManager(IList<IList<int>> tasks) {
        taskMap = new Dictionary<int, (int, int)>();
        pq = new PriorityQueue<(int, int, int), (int, int)>();
        foreach(var t in tasks){
            int userId = t[0], taskId = t[1], priority = t[2];
            taskMap[taskId] = (userId, priority);
            pq.Enqueue((priority, taskId, userId), (-priority, -taskId));
        }
    }
    public void Add(int userId, int taskId, int priority) {
        taskMap[taskId] = (userId, priority);
        pq.Enqueue((priority, taskId, userId), (-priority, -taskId));
    }
    public void Edit(int taskId, int newPriority) {
        if(!taskMap.ContainsKey(taskId)) return;
        var(userId, _) = taskMap[taskId];
        taskMap[taskId] = (userId, newPriority);
        pq.Enqueue((newPriority, taskId, userId), (-newPriority, -taskId));
    }
    public void Rmv(int taskId) {
        if(taskMap.ContainsKey(taskId)){
            taskMap.Remove(taskId);
        }
    }
    public int ExecTop() {
        while(pq.Count > 0){
            var(priority, taskId, userId) = pq.Dequeue();
            if(taskMap.ContainsKey(taskId)){
                var(curUser, curPriority) = taskMap[taskId];
                if(curPriority == priority && curUser == userId){
                    taskMap.Remove(taskId);
                    return userId;
                }
            }
        }
        return -1;
}
}
