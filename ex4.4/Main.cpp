#include <iostream>
#include <stack>

/*Let S be an empty stack
for i ← 0 to n − 1 do
if X[i] is an opening grouping symbol then
S.push(X[i])
else if X[i] is a closing grouping symbol then
if S.empty() then
return false { nothing to match with }
if S.top() does not match the type of X[i] then
return false { wrong type }
S.pop()
if S.empty() then
return true { every symbol matched }
else
return false { some symbols were never matched }
*/

bool choose(char x[], int n){

	std::stack<char>s;
	
	for (int i = 0; i < n; ++i){
		if (x[i] == '[' || x[i] == '(' || x[i] == '<' || x[i] == '{'){ s.push(x[i]); }

		else if (x[i] == ']' || x[i] == ')' || x[i] == '>' || x[i] == '}'){
			if (s.empty()){ return false; }
			if (x[i] == '}'){ if (s.top() != '{'){ return false; } }
			if (x[i] == ']'){ if (s.top() != '['){ return false; } }
			if (x[i] == ')'){ if (s.top() != '('){ return false; } }
			if (x[i] == '>'){ if (s.top() != '<'){ return false; } }
			s.pop();
		}
	}
	if (s.empty()){ return true; }
	else
		return false;
}


int main(){

	char test[8] = { '(', ')', '[', ']', '{', '}' };

	std::cout << choose(test, 6) << std::endl;

	std::cin.get();
	std::cin.get();

	return 0;
}



// switch case to use '[' ']' 

/*

int matchParens::type(char c) const{

int r;
switch(c) {
	case '{': case '}': r = 0; break;
	case '[': case ']': r = 1; break;
	case '(': case ')': r = 2; break;
	default:            r = -1; break;
	}
	return r;
}


*/