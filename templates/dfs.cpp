void dfs(/*参数*/){//不一定是void
    if(/*边界条件*/){
        return ;
    }
    for(;;){//枚举当前状态能扩展出的下一个状态
        //标记当前状态，记录一些东西
        dfs();
        //回溯，取消标记
    }
}