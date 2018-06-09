// [start_cell]:{[finish_cell]=something}

//addition [0]:{[1]=[0]+[1]}
[->+<]>

//subtraction [0]:{[0]=[0]-[1]}
[->-<]

//multiplication [0]:{[3]=[0]*[1]} [2] is void
[->[->+>+<<]>[-<+>]<<]>>>

//division [0]:{[3]=[0]//[1]} [2] is void
+[>[-<->>+<]>>+<[-<+>]<<]>>>-

//power [0]:{[5]=[0]^[1]} [2], [3], [4] are void
[->>>+<<<]>>+<[->[->[->+>+<<]>[-<+>]<<]>>>[-<<<+>>>]<<<<]>

//swap [0]:{[0]=[1]; [1]=[0]} [2] is void
[->>+<<]>[-<+>]>[-<+>]<<

//ifelse [0]:{if([0]){something1}else{something2}} [1] is void
>+<
[something1[-]>-<]
>[something2-]<
