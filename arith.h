//功能：最大值、最小值、整数除法的商、整数除法的余数、不大于x/y的最大整数、不小于x/y的最小整数
//优点：对除法和模运算提供了良定义的结果，即总是向数轴的左侧舍入，而标准库中这些操作是未定义的。
extern int Arith_max(int x, int y);
extern int Arith_min(int x, int y);
extern int Arith_div(int x, int y);
extern int Arith_mod(int x, int y);
extern int Arith_ceiling(int x, int y);
extern int Arith_floor(int x, int y);