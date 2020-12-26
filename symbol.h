#define MAX_ID 1024

typedef struct TAG_SYMBOL_ENTRY
{
	string name;//变量名
	int token;//词法单元
	int type;//变量类型
} symbol_entry;

class symbol_table
{
private:
	symbol_entry table[MAX_ID];
	int size;
public:
	int lookup(string name);//寻找标识符，返回序号
	int insert(string name, int token);//插入标识符
	int gettoken(string name);//返回标识符token
	string &getname(int pos);//通过序号返回标识符名字
	int set_type(int pos, int type);//设置标识符类型
	int get_type(int pos);//获取标识符类型
};