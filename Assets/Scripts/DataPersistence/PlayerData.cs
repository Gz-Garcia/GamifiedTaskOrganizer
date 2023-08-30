using System;

[Serializable]
public class PlayerData {
    public string name;
    public int level;
    public int xp;
    public int gold;
    public int completedTasks;

    public PlayerData(string pname, int plevel, int pxp, int pgold, int pcompletedTasks) {
        name = pname;
        level = plevel;
        xp = pxp;
        gold = pgold;
        completedTasks = pcompletedTasks;
    }
}
