// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

#ifndef PCH_H
#define PCH_H

// TODO: 添加要在此处预编译的标头

#endif //PCH_H
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#define N 4
// Huffman树：三叉静态链表结构
struct CharWeight
{
	char c;
	float weight;
};

struct HuffmanCode
{
	char c;
	int code[N - 1]; // code[start]...code[N-1]
	int start;   // 0...N-1
};

struct HuffmanNode
{
	char c;	float weight;
	// 三叉链表结构
	int lch, rch;   	int parent;
};
class Huffman
{
	// 静态链表结构
	HuffmanNode Tree[2 * N - 1];
	// 编码结构
	HuffmanCode HC[N];
public:
	void OutputCode(char c);
	void GetCode();
	Huffman(CharWeight cws[]);
	virtual ~Huffman();
	int FindiMin(int n);

};