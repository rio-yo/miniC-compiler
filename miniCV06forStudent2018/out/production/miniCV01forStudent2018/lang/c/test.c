// 変数宣言の意味解析テスト

int a, *b, c[10], *d[10];
const int e=10;

// (1) 二重宣言
//int *a;
//int e[3];
//
//// (2) 未宣言変数の使用
//z = 0;
//a = z+2;
//
//// (3) 宣言と使い方の不一致
//*a=0;
//a=*c;
//b=a[4];
//c=c;	// 配列をごっそりコピーするの？
//
//// (4) 許されない演算
//a=b*2;
//a=c*2;
//
//// (5) 定数に代入（2018/11/5）
e=3;
