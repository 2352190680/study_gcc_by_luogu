//古籍翻译
#include <bits/stdc++.h>
using namespace std;
char s[100005];
int jisuan10(int l, int r) {
    int n = 0;
    for(int i=l; i<r; i++)
        n = n * 8 + s[i] - '0';
    return n;
}
void dabao(int len) {
    int left= max(0, len - 4);  //四个一组，8^4=16^3;4->3个数
    int n = jisuan10(left, len);
    if(left) {
        dabao(left);//嵌套，跟外星密码类似很妙
        printf("%03x", n);
    } else {
        printf("%x", n);
    }
}
int main() {
    cin >> s;
    dabao(strlen(s));

    return 0;
}
/*
%d 十进制有符号整数
%u 十进制无符号整数
%f 浮点数
%s 字符串
%c 单个字符
%p 指针的值
%e 指数形式的浮点数
%x, %X 无符号以十六进制表示的整数
%0 无符号以八进制表示的整数
%g 自动选择合适的表示法 */