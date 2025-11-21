#include<iostream>
using namespace std;

int edx, esi, eax, ecx;
int func4(int edi) {
	eax = edx;
	eax-=esi;
	ecx = eax; 
	ecx >>= 0x1f;
	eax +=ecx;
	eax >>= 1;
	ecx = esi + eax;
	if (ecx <= edi){
		eax = 0; 
		if (ecx >= edi);
		else{
			esi = ecx + 1;
			eax = 2 * func4(edi) + 1; 
		}
	}
	else{
		edx = ecx - 1;
		eax = func4(edi);
		eax += eax;
	}
	return eax;
}

int main() {
	int edi;
	for (edi = 1; edi <= 14; edi++){
		edx = 14;
		esi = 0;
		cout << "终止条件:" << edi << " 函数返回值:" << func4(edi) << endl;
	}
		
	return 0;
}

