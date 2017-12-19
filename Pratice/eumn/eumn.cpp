//


int main() 
{
	enum spectum{red, orange,yellow ,green, blue,violet, indigo,ultraviolet};
	spectum band;
	band = red;
	//band = 200;  invalid
	//band = spectum{ 3 }; 实际证明  int 不能声明为band
	enum  bits
	{
		one = 1, two = 2,three=3,four =4 ,eight =8
	};
}