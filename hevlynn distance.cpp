#include<iostream>
#include<math.h>
double a,b,c,d,e,f,g,x,y;
int main(int argc,char** argv){
	std::cout<<"entrez l'abscisse et l'ordonne du premier point A"<<std::endl;
	std::cin>>a>>b;
	std::cout<<"entrez l'abscisse et l'ordonne du deuxieme point B"<<std::endl;
	std::cin>>x>>y;
	std::cout<<"entrez l'abscisse et l'ordonne du troisieme point C"<<std::endl;
	std::cin>>c>>d;
	e=sqrt(pow(a-x,2)+pow(b-y,2));
	f=sqrt(pow(a-c,2)+pow(b-d,2));
	g=sqrt(pow(x-c,2)+pow(y-d,2));
	std::cout<<"la longueur AB est "<<e<<std::endl;
		std::cout<<"la longueur AC est "<<f<<std::endl;
			std::cout<<"la longueur BC est "<<g<<std::endl;
	return 0;
	
	
}