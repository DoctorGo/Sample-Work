#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
/*
Amazing CPU vs CPU Tic Tac Toe
Designed by Elijah Moppins and Bryan Greenwood
Final Project CECS 130
4/21/19


*/
using std::cout;
using std::cin;
using std::string;
using std::srand;
using std::time;
using std::rand;
using namespace std;


class egame{

	public:
	int rt=0;
	int sw;
	int i;
	char board[9]={'0','1','2','3','4','5','6','7','8'};
	char board2[9]={'0','1','2','3','4','5','6','7','8'};
	char board3[9]={'0','1','2','3','4','5','6','7','8'};
	
	char b2[9]={'0','1','2','3','4','5','6','7','8'};
	char b3[9]={'0','1','2','3','4','5','6','7','8'};
	char b4[9]={'0','1','2','3','4','5','6','7','8'};
	
	char b0[9]={'0','1','2','3','4','5','6','7','8'};
	char b01[9]={'0','1','2','3','4','5','6','7','8'};
	char b02[9]={'0','1','2','3','4','5','6','7','8'};
	
	int h=9;
	int h2=9;
	int h3=9;
	void ereset(){
		i=0;
		h=9;
		h2=9;
		h3=9;
		b2[0]='0';
		b2[1]='1';
		b2[2]='2';
		b2[3]='3';
		b2[4]='4';
		b2[5]='5';
		b2[6]='6';
		b2[7]='7';
		b2[8]='8';
		b3[0]='0';
		b3[1]='1';
		b3[2]='2';
		b3[3]='3';
		b3[4]='4';
		b3[5]='5';
		b3[6]='6';
		b3[7]='7';
		b3[8]='8';
		b4[0]='0';
		b4[1]='1';
		b4[2]='2';
		b4[3]='3';
		b4[4]='4';
		b4[5]='5';
		b4[6]='6';
		b4[7]='7';
		b4[8]='8';
		
		b0[0]='0';
		b0[1]='1';
		b0[2]='2';
		b0[3]='3';
		b0[4]='4';
		b0[5]='5';
		b0[6]='6';
		b0[7]='7';
		b0[8]='8';
		b01[0]='0';
		b01[1]='1';
		b01[2]='2';
		b01[3]='3';
		b01[4]='4';
		b01[5]='5';
		b01[6]='6';
		b01[7]='7';
		b01[8]='8';
		b02[0]='0';
		b02[1]='1';
		b02[2]='2';
		b02[3]='3';
		b02[4]='4';
		b02[5]='5';
		b02[6]='6';
		b02[7]='7';
		b02[8]='8';
		
		board[0]='0';
		board[1]='1';
		board[2]='2';
		board[3]='3';
		board[4]='4';
		board[5]='5';
		board[6]='6';
		board[7]='7';
		board[8]='8';
		board2[0]='0';
		board2[1]='1';
		board2[2]='2';
		board2[3]='3';
		board2[4]='4';
		board2[5]='5';
		board2[6]='6';
		board2[7]='7';
		board2[8]='8';
		board3[0]='0';
		board3[1]='1';
		board3[2]='2';
		board3[3]='3';
		board3[4]='4';
		board3[5]='5';
		board3[6]='6';
		board3[7]='7';
		board3[8]='8';
	/*	int p;
		for(p=0;p<=8;p++){
			char p2;
			p2=(char)p;
			board[p]=p2;
		}
		for(p=0;p<=8;p++){
			char p2;
			p2=(char)p;
			board2[p]=p2;
		}
		for(p=0;p<=8;p++){
			char p2;
			p2=(char)p;
			board3[p]=p2;
		}
		for(p=0;p<=8;p++){
			char p2;
			p2=(char)p;
			b2[p]=p2;
		}
		for(p=0;p<=8;p++){
			char p2;
			p2=(char)p;
			b3[p]=p2;
		}
		for(p=0;p<=8;p++){
			char p2;
			p2=(char)p;
			b4[p]=p2;
		}
		for(p=0;p<=8;p++){
			char p2;
			p2=(char)p;
			b0[p]=p2;
		}
		for(p=0;p<=8;p++){
			char p2;
			p2=(char)p;
			b01[p]=p2;
		}
		for(p=0;p<=8;p++){
			char p2;
			p2=(char)p;
			b02[p]=p2;
		}
		*/
	}
	void printb(){
		
		cout << "Board 1" <<endl;
		cout << "\t 0\t|" << "1\t|" << "2" << endl;
		cout << "A\t|" <<b0[0] << "\t" << b0[1] <<  "\t" << b0[2] << endl; 
		cout << "B\t|" <<b0[3] << "\t" << b0[4] <<  "\t" << b0[5] << endl;
		cout << "C\t|" <<b0[6] << "\t" << b0[7] <<  "\t" << b0[8] << endl; 
		
		cout << "Board 2" <<endl;
		cout << "\t 0\t|" << "1\t|" << "2" << endl;
		cout << "A\t|" <<b01[0] << "\t" << b01[1] <<  "\t" << b01[2] << endl; 
		cout << "B\t|" <<b01[3] << "\t" << b01[4] <<  "\t" << b01[5] << endl;
		cout << "C\t|" <<b01[6] << "\t" << b01[7] <<  "\t" << b01[8] << endl;
		cout<<"Board 3"<<endl;
		cout << "\t 0\t|" << "1\t|" << "2" << endl;
		cout << "A\t|" <<b02[0] << "\t" << b02[1] <<  "\t" << b02[2] << endl; 
		cout << "B\t|" <<b02[3] << "\t" << b02[4] <<  "\t" << b02[5] << endl;
		cout << "C\t|" <<b02[6] << "\t" << b02[7] <<  "\t" << b02[8] << endl;
	}
	int e1(void)
	{
		return sw;
	}
	int e2(void)
	{
		return i;
	}
	
	void remove(char x){
		
		if(sw==1){
		
		int i;
 		
 		for(i=0;i<=h;i++){
 			
 			if(board[i]==x){
 				int zo=h-1;
 				int zi;
 					for(zi=i;zi<zo;zi++){
 						board[zi]=board[zi+1];
 						
 						
			 }
 			
		 }
	 }
	 h--;
}
	else if(sw==2){
		int i;
 		
 		for(i=0;i<=h;i++){
 			
 			if(board2[i]==x){
 				int zo=h-1;
 				int zi;
 					for(zi=i;zi<zo;zi++){
 						board2[zi]=board2[zi+1];
 						
 						
			 }
 			
		 }
	 }
	 h2--;
	}
	else if(sw==3){
		int i;
 		
 		for(i=0;i<=h;i++){
 			
 			if(board3[i]==x){
 				int zo=h-1;
 				int zi;
 					for(zi=i;zi<zo;zi++){
 						board3[zi]=board3[zi+1];
 						
 						
			 }
 			
		 }
	 }
	 h3--;
	}
	 
	}
	int checki(char x){
		int i;
 		
 		for(i=0;i<8;i++){
 			if(b2[i]==x){
 				
 				return i;
 			
 						
			}
 			
		 
	 }
}
	int check(char x){
		if(sw==1){
		
		int i;
 		
 		for(i=0;i<=8;i++){
 			if(b2[i]==x){
 				
 				return 1;
 				
 						
			}
 			
		 
	 }
	 return 0;
}
if(sw==2){
	int i;
 		
 		for(i=0;i<=8;i++){
 			if(b3[i]==x){
 				
 				return 1;
 				
 						
			}
 			
		 
	 }
	 return 0;
}
if(sw==3){
	int i;
 		
 		for(i=0;i<=8;i++){
 			if(b4[i]==x){
 				
 				return 1;
 				
 						
			}
 			
		 
	 }
	 return 0;
}
	}
	void change(char pls,char y){
		if(sw==1){
		
		b0[pls]=y;
	}
	if(sw==2){
		b01[pls]=y;
	}
	if(sw==3){
		b02[pls]=y;
	}
	}
	char ra(){
		if(h==0){
			h++;
		}
		time_t t;
   		int z=(rand()% h);
  		srand(rt);
  		return board[z];
	}
	char ra2(){
		if(h2==0){
			h2++;
		}
		time_t t;
   		int z=(rand()% h2);
  		srand(rt);
  		return board2[z];
	}
	char ra3(){
		if(h3==0){
			h3++;
		}
		time_t t;
   		int z=(rand()% h3);
  		srand(rt);
  		return board3[z];
	}
	int r(){
		time_t t;
   		int z9=(rand()% 3+1);
  		srand(rt);
  		return z9;
	}
	/*void cfirst(){
		time_t t;
   		int z=(rand()% 2)+1;
  		srand((unsigned) time(&t));
  		if(z==1){
  			user();
		  }
		else{
			cpu();
		}
	}*/
	/*void user(){
		cout<<"BEFORE YOUR MOVE"<<endl;
		printb();
		int hold=0;
		char a;
		cout << "You are X" << endl;
		while(hold==0){
		cout << "Enter the board that you would like play on" <<endl;
		cin>>sw;
		cout << "Enter the cell that you would like to mark" << endl;
		cin>>a;
		if(check(a)==1){
		
			hold=1;
			
	}
}
	     i=a-48;
		change(i,'X');
		remove(a);
		cout<<"AFTER YOUR MOVE"<<endl;
		printb();
		win();
		cpu();
}*/
	
	void cpu(){
		//cout<<"BEFORE CPU MOVE"<<endl;
		//printb();
		int hold=0;
		char a;
		
		while(hold==0){
		sw=r();
		if(sw == 1)
		{
		a=ra();
		}
		if(sw == 2)
		{
			a=ra2();
		}
		if(sw == 3)
		{
			a=ra3();
		}
		if(check(a)==1){
		
			hold=1;
			
		}
	
	}
	 i=a-48;
		change(i,'X');
		remove(a);
		//cout<<"AFTER CPU MOVE"<<endl;
		//printb();
		/*win();
		user();*/
	}
	
	void win(){
		if(b0[0]==(b0[1])&&b0[0]==(b0[2])){
			if(b0[0]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
			
		}
		if(b0[3]==(b0[4])&&b0[3]==(b0[5])){
			if(b0[3]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			
			exit(1);
		}
		if(b0[6]==(b0[7])&&b0[6]==(b0[8])){
			if(b0[6]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			
			exit(1);
		}
		if(b0[0]==(b0[3])&&b0[0]==(b0[6])){
			if(b0[0]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
		}
		if(b0[1]==(b0[4])&&b0[1]==(b0[7])){
			if(b0[1]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
		}
		if(b0[2]==(b0[5])&&b0[2]==(b0[8])){
			if(b0[2]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
		}
		if(b0[0]==(b0[4])&&b0[0]==(b0[8])){
			if(b0[0]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
		}
		if(b0[6]==(b0[4])&&b0[6]==(b0[2])){
			if(b0[6]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
	}
	//b0oard 2
	if(b01[0]==(b01[1])&&b01[0]==(b01[2])){
			if(b01[0]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
			
		}
		if(b01[3]==(b01[4])&&b01[3]==(b01[5])){
			if(b01[3]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			
			exit(1);
		}
		if(b01[6]==(b01[7])&&b01[6]==(b01[8])){
			if(b01[6]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			
			exit(1);
		}
		if(b01[0]==(b01[3])&&b01[0]==(b01[6])){
			if(b01[0]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
		}
		if(b01[1]==(b01[4])&&b01[1]==(b01[7])){
			if(b01[1]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
		}
		if(b01[2]==(b01[5])&&b01[2]==(b01[8])){
			if(b01[2]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
		}
		if(b01[0]==(b01[4])&&b01[0]==(b01[8])){
			if(b01[0]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
		}
		if(b01[6]==(b01[4])&&b01[6]==(b01[2])){
			if(b01[6]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
	}
//board 3
	if(b02[0]==(b02[1])&&b02[0]==(b02[2])){
			if(b02[0]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
			
		}
		if(b02[3]==(b02[4])&&b02[3]==(b02[5])){
			if(b02[3]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			
			exit(1);
		}
		if(b02[6]==(b02[7])&&b02[6]==(b02[8])){
			if(b02[6]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			
			exit(1);
		}
		if(b02[0]==(b02[3])&&b02[0]==(b02[6])){
			if(b02[0]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
		}
		if(b02[1]==(b02[4])&&b02[1]==(b02[7])){
			if(b02[1]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
		}
		if(b02[2]==(b02[5])&&b02[2]==(b02[8])){
			if(b02[2]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
		}
		if(b02[0]==(b02[4])&&b02[0]==(b02[8])){
			if(b02[0]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
		}
		if(b02[6]==(b02[4])&&b02[6]==(b02[2])){
			if(b02[6]=='O'){
				cout <<"The computer Won"<<endl;
			}
			else{
				cout <<"You WON"<<endl;
			}
			exit(1);
	}
		else{
			cout<< "Next move" <<endl;
		}
	}
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Box 
{
	public:
	int boardnum;
	int boxnum;
	bool filled;
	int column;
	int row;
	string boxoutput;
	int sendboard;
	int sendbox;
	
	Box(int boardnum, int boxnum, int column, int row)
	{
		boardnum = boardnum;
		boxnum = boxnum;
		column = column;
		row = row;
		filled = false;
		boxoutput = "     ";
	}
	~Box(){}
	
	void fill(int, int, int);
	void antifill()
	{
		filled = false;
		boxoutput = "     ";
	}
};

Box box11(1,1,1,1);
Box box12(1,2,1,2);
Box box13(1,3,1,3);
Box box14(1,4,2,1);
Box box15(1,5,2,2);
Box box16(1,6,2,3);
Box box17(1,7,3,1);
Box box18(1,8,3,2);
Box box19(1,9,3,3);
Box box21(2,1,1,1);
Box box22(2,2,1,2);
Box box23(2,3,1,3);
Box box24(2,4,2,1);
Box box25(2,5,2,2);
Box box26(2,6,2,3);
Box box27(2,7,3,1);
Box box28(2,8,3,2);
Box box29(2,9,3,3);
Box box31(3,1,1,1);
Box box32(3,2,1,2);
Box box33(3,3,1,3);
Box box34(3,4,2,1);
Box box35(3,5,2,2);
Box box36(3,6,2,3);
Box box37(3,7,3,1);
Box box38(3,8,3,2);
Box box39(3,9,3,3);

class BGame : public Box
{
	public:
	int turn;
	int user;
	int comp;
	int currentplayer;
	int usercount;
	int compcount;
	
	BGame(int initialplayer) : Box(0,0,0,0)
	{
		user = 1;
		comp = 2;
		turn = 1;
		currentplayer = initialplayer;
	}
	~BGame()
	{
	}
	
	int rb1(void)
	{
		return sendboard;
	}
	int rb2(void)
	{
		return sendbox;
	}
	void printboard(void);
	void computerplay(void);
	void breset(void)
	{
		box11.antifill();
		box12.antifill();
		box13.antifill();
		box14.antifill();
		box15.antifill();
		box16.antifill();
		box17.antifill();
		box18.antifill();
		box19.antifill();
		box21.antifill();
		box22.antifill();
		box23.antifill();
		box24.antifill();
		box25.antifill();
		box26.antifill();
		box27.antifill();
		box28.antifill();
		box29.antifill();
		box31.antifill();
		box32.antifill();
		box33.antifill();
		box34.antifill();
		box35.antifill();
		box36.antifill();
		box37.antifill();
		box38.antifill();
		box39.antifill();
	}
};

class Competition : public BGame, public egame
{
	public:
	char a1[9] = {'0','1','2','3','4','5','6','7','8'};
	char a2[9] = {'0','1','2','3','4','5','6','7','8'};
	char a3[9] = {'0','1','2','3','4','5','6','7','8'};
	int er1;
	int er2;
	int br1;
	int br2;
	int victorycheckv = 0;
	int ewincount = 0;
	int bwincount = 0;
	int etotalwins = 0;
	int btotalwins = 0;
	
	Competition():BGame(0){}
	~Competition(){}
	
	void playgame()
	{
		int x;
		for(x=0;x<10;x++)
		{	
			while(victorycheckv != 1)
			{	
				cpu();
				er1 = e1();
				er2 = e2();
				echangelocal(er1,er2);
				bchangehome(er1,er2);
				victorycheck();
				computerplay();
				br1 = rb1();
				br2 = rb2();
				sw = br1;
				bchangelocal(br1,br2);
				echangehome(br2);
				victorycheck();
			}
			cprintb();
			winnercheck();
			ewincount = 0;
			bwincount = 0;
			victorycheckv=0;
			reset();
			ereset();
			breset();	
		}
		if(btotalwins > etotalwins)
		{
			cout << "Bryan's computer wins the set! Bryan: " << btotalwins << " Elijah: " << etotalwins << endl;
		}
		if(etotalwins > btotalwins)
		{
			cout << "Elijah's computer wins the set! Elijah: " << etotalwins << " Bryan: " << btotalwins << endl;
		}
		if(etotalwins == btotalwins)
		{
			cout << "The set is a tie! Bryan: " << btotalwins << " Elijah: " << etotalwins << endl;
		}
	}
	void reset()
	{
		a1[0]='0';
		a1[1]='1';
		a1[2]='2';
		a1[3]='3';
		a1[4]='4';
		a1[5]='5';
		a1[6]='6';
		a1[7]='7';
		a1[8]='8';
		a2[0]='0';
		a2[1]='1';
		a2[2]='2';
		a2[3]='3';
		a2[4]='4';
		a2[5]='5';
		a2[6]='6';
		a2[7]='7';
		a2[8]='8';
		a3[0]='0';
		a3[1]='1';
		a3[2]='2';
		a3[3]='3';
		a3[4]='4';
		a3[5]='5';
		a3[6]='6';
		a3[7]='7';
		a3[8]='8';
		er1=0;
		er2=0;
		br1=0;
		br2=0;
		rt=rt+rand();
	}
	void cprintb(){
		
		cout << "Board 1" <<endl;
		cout << "\t 0\t|" << "1\t|" << "2" << endl;
		cout << "A\t|" <<a1[0] << "\t" << a1[1] <<  "\t" << a1[2] << endl; 
		cout << "B\t|" <<a1[3] << "\t" << a1[4] <<  "\t" << a1[5] << endl;
		cout << "C\t|" <<a1[6] << "\t" << a1[7] <<  "\t" << a1[8] << endl; 
		
		cout << "Board 2" <<endl;
		cout << "\t 0\t|" << "1\t|" << "2" << endl;
		cout << "A\t|" <<a2[0] << "\t" << a2[1] <<  "\t" << a2[2] << endl; 
		cout << "B\t|" <<a2[3] << "\t" << a2[4] <<  "\t" << a2[5] << endl;
		cout << "C\t|" <<a2[6] << "\t" << a2[7] <<  "\t" << a2[8] << endl;
		cout<<"Board 3"<<endl;
		cout << "\t 0\t|" << "1\t|" << "2" << endl;
		cout << "A\t|" <<a3[0] << "\t" << a3[1] <<  "\t" << a3[2] << endl; 
		cout << "B\t|" <<a3[3] << "\t" << a3[4] <<  "\t" << a3[5] << endl;
		cout << "C\t|" <<a3[6] << "\t" << a3[7] <<  "\t" << a3[8] << endl;
	}
	void echangelocal(int sw, int pls){
		if(sw==1){
			a1[pls]='X';
		}
		if(sw==2){
			a2[pls]='X';
		}
		if(sw==3){
			a3[pls]='X';
		}
	}
	void bchangelocal(int board,int box)
	{
		if(board == 1)
		{
			a1[(box-1)] = 'O';
		}
		else if(board == 2)
		{
			a2[(box-1)] = 'O';
		}
		else if(board == 3)
		{
			a3[(box-1)] = 'O';
		}
		else
		{
			cout << "bchangelocal error";
		}
	}
	void echangehome(int box)
	{
		box = box-1;
		box = (char) box;
		change(box,'O');
		remove(box);
	}
	void bchangehome(int sw, int pls)
	{
		if(sw == 1)
		{
			if(pls == 0)
			{
				box11.fill(comp, user, comp);
			}
			else if(pls == 1)
			{
				box12.fill(comp, user, comp);
			}
			else if(pls == 2)
			{
				box13.fill(comp, user, comp);
			}
			else if(pls == 3)
			{
				box14.fill(comp, user, comp);
			}
			else if(pls == 4)
			{
				box15.fill(comp, user, comp);
			}
			else if(pls == 5)
			{
				box16.fill(comp, user, comp);
			}
			else if (pls == 6)
			{
				box17.fill(comp, user, comp);
			}
			else if(pls == 7)
			{
				box18.fill(comp, user, comp);
			}
			else if(pls == 8)
			{
				box19.fill(comp, user, comp);
			}
		}
		else if(sw == 2)
		{
			if(pls == 0)
			{
				box21.fill(comp, user, comp);
			}
			else if(pls == 1)
			{
				box22.fill(comp, user, comp);
			}
			else if(pls == 2)
			{
				box23.fill(comp, user, comp);
			}
			else if(pls == 3)
			{
				box24.fill(comp, user, comp);
			}
			else if(pls == 4)
			{
				box25.fill(comp, user, comp);
			}
			else if(pls == 5)
			{
				box26.fill(comp, user, comp);
			}
			else if (pls == 6)
			{
				box27.fill(comp, user, comp);
			}
			else if(pls == 7)
			{
				box28.fill(comp, user, comp);
			}
			else if(pls == 8)
			{
				box29.fill(comp, user, comp);
			}
		}
		else if (sw == 3)
		{
			if(pls == 0)
			{
				box31.fill(comp, user, comp);
			}
			else if(pls == 1)
			{
				box32.fill(comp, user, comp);
			}
			else if(pls == 2)
			{
				box33.fill(comp, user, comp);
			}
			else if(pls == 3)
			{
				box34.fill(comp, user, comp);
			}
			else if(pls == 4)
			{
				box35.fill(comp, user, comp);
			}
			else if(pls == 5)
			{
				box36.fill(comp, user, comp);
			}
			else if (pls == 6)
			{
				box37.fill(comp, user, comp);
			}
			else if(pls == 7)
			{
				box38.fill(comp, user, comp);
			}
			else if(pls == 8)
			{
				box39.fill(comp, user, comp);
			}
		}
	}
	void victorycheck(void)
	{
		if(box11.filled == true && box12.filled == true && box13.filled == true && box14.filled == true &&
			box15.filled == true && box16.filled == true && box17.filled == true && box18.filled == true && box19.filled == true &&
			box21.filled == true && box22.filled == true && box23.filled == true && box24.filled == true &&
			box25.filled == true && box26.filled == true && box27.filled == true && box28.filled == true && box29.filled == true &&
			box31.filled == true && box32.filled == true && box33.filled == true && box34.filled == true &&
			box35.filled == true && box36.filled == true && box37.filled == true && box38.filled == true && box39.filled == true)
		{
			victorycheckv = 1;
		}
		else
		{
			victorycheckv = 0;
		}
	}
	void winnercheck(void)
	{
		if(a1[0]==(a1[1])&&a1[0]==(a1[2])){
			if(a1[0]=='O'){
				bwincount++;
			}
			else if(a1[0]=='X'){
				ewincount++;
			}
			
		}
		if(a1[3]==(a1[4])&&a1[3]==(a1[5])){
			if(a1[3]=='O'){
				bwincount++;
			}
			else if(a1[3]=='X'){
				ewincount++;
			}
			
			
		}
		if(a1[6]==(a1[7])&&a1[6]==(a1[8])){
			if(a1[6]=='O'){
				bwincount++;
			}
			else if(a1[6]=='X'){
				ewincount++;
			}
			
			
		}
		if(a1[0]==(a1[3])&&a1[0]==(a1[6])){
			if(a1[0]=='O'){
				bwincount++;
			}
			else if(a1[0]=='X'){
				ewincount++;
			}
			
		}
		if(a1[1]==(a1[4])&&a1[1]==(a1[7])){
			if(a1[1]=='O'){
				bwincount++;
			}
			else if(a1[1]=='X'){
				ewincount++;
			}
			
		}
		if(a1[2]==(a1[5])&&a1[2]==(a1[8])){
			if(a1[2]=='O'){
				bwincount++;
			}
			else if(a1[2]=='X'){
				ewincount++;
			}
			
		}
		if(a1[0]==(a1[4])&&a1[0]==(a1[8])){
			if(a1[0]=='O'){
				bwincount++;
			}
			else if(a1[0]=='X'){
				ewincount++;
			}
			
		}
		if(a1[6]==(a1[4])&&a1[6]==(a1[2])){
			if(a1[6]=='O'){
				bwincount++;
			}
			else if(a1[6]=='X'){
				ewincount++;
			}
			
	}
	//board 2
	if(a2[0]==(a2[1])&&a2[0]==(a2[2])){
			if(a2[0]=='O'){
				bwincount++;
			}
			else if(a2[0]=='X'){
				ewincount++;
			}
			
			
		}
		if(a2[3]==(a2[4])&&a2[3]==(a2[5])){
			if(a2[3]=='O'){
				bwincount++;
			}
			else if(a2[3]=='X'){
				ewincount++;
			}
			
			
		}
		if(a2[6]==(a2[7])&&a2[6]==(a2[8])){
			if(a2[6]=='O'){
				bwincount++;
			}
			else if(a2[6]=='X'){
				ewincount++;
			}
			
			
		}
		if(a2[0]==(a2[3])&&a2[0]==(a2[6])){
			if(a2[0]=='O'){
				bwincount++;
			}
			else if(a2[0]=='X'){
				ewincount++;
			}
			
		}
		if(a2[1]==(a2[4])&&a2[1]==(a2[7])){
			if(a2[1]=='O'){
				bwincount++;
			}
			else if(a2[1]=='X'){
				ewincount++;
			}
			
		}
		if(a2[2]==(a2[5])&&a2[2]==(a2[8])){
			if(a2[2]=='O'){
				bwincount++;
			}
			else if(a2[2]=='X'){
				ewincount++;
			}
			
		}
		if(a2[0]==(a2[4])&&a2[0]==(a2[8])){
			if(a2[0]=='O'){
				bwincount++;
			}
			else if(a2[0]=='X'){
				ewincount++;
			}
			
		}
		if(a2[6]==(a2[4])&&a2[6]==(a2[2])){
			if(a2[6]=='O'){
				bwincount++;
			}
			else if(a2[6]=='X'){
				ewincount++;
			}
			
	}
//board 3
	if(a3[0]==(a3[1])&&a3[0]==(a3[2])){
			if(a3[0]=='O'){
				bwincount++;
			}
			else if(a3[0]=='X'){
				ewincount++;
			}
			
			
		}
		if(a3[3]==(a3[4])&&a3[3]==(a3[5])){
			if(a3[3]=='O'){
				bwincount++;
			}
			else if(a3[3]=='X'){
				ewincount++;
			}
			
			
		}
		if(a3[6]==(a3[7])&&a3[6]==(a3[8])){
			if(a3[6]=='O'){
				bwincount++;
			}
			else if(a3[6]=='X'){
				ewincount++;
			}
			
			
		}
		if(a3[0]==(a3[3])&&a3[0]==(a3[6])){
			if(a3[0]=='O'){
				bwincount++;
			}
			else if(a3[0]=='X'){
				ewincount++;
			}
			
		}
		if(a3[1]==(a3[4])&&a3[1]==(a3[7])){
			if(a3[1]=='O'){
				bwincount++;
			}
			else if(a3[1]=='X'){
				ewincount++;
			}
			
		}
		if(a3[2]==(a3[5])&&a3[2]==(a3[8])){
			if(a3[2]=='O'){
				bwincount++;
			}
			else if(a3[2]=='X'){
				ewincount++;
			}
			
		}
		if(a3[0]==(a3[4])&&a3[0]==(a3[8])){
			if(a3[0]=='O'){
				bwincount++;
			}
			else if(a3[0]=='X'){
				ewincount++;
			}
			
		}
		if(a3[6]==(a3[4])&&a3[6]==(a3[2])){
			if(a3[6]=='O'){
				bwincount++;
			}
			else if(a3[6]=='X'){
				ewincount++;
			}
			
		}
		if(a1[0]==(a2[0])&&a2[0]==(a3[0])){
			if(a1[0]=='O'){
				bwincount++;
			}
			else if(a1[0]=='X'){
				ewincount++;
			}
			
			
		}
		if(a1[1]==(a2[1])&&a2[1]==(a3[1])){
			if(a1[1]=='O'){
				bwincount++;
			}
			else if(a1[1]=='X'){
				ewincount++;
			}
			
			
		}
		if(a1[3]==(a2[3])&&a2[3]==(a3[3])){
			if(a1[3]=='O'){
				bwincount++;
			}
			else if(a1[3]=='X'){
				ewincount++;
			}
			
			
		}
		if(a1[4]==(a2[4])&&a2[4]==(a3[4])){
			if(a1[4]=='O'){
				bwincount++;
			}
			else if(a1[0]=='X'){
				ewincount++;
			}
			
		}
		if(a1[5]==(a2[5])&&a2[5]==(a3[5])){
			if(a1[5]=='O'){
				bwincount++;
			}
			else if(a1[5]=='X'){
				ewincount++;
			}
			
		}
		if(a1[6]==(a2[6])&&a2[6]==(a3[6])){
			if(a1[6]=='O'){
				bwincount++;
			}
			else if(a1[6]=='X'){
				ewincount++;
			}
			
		}
		if(a1[7]==(a2[7])&&a2[7]==(a3[7])){
			if(a1[7]=='O'){
				bwincount++;
			}
			else if(a1[7]=='X'){
				ewincount++;
			}
			
		}
		if(a1[8]==(a2[8])&&a2[8]==(a3[8])){
			if(a1[8]=='O'){
				bwincount++;
			}
			else if(a1[8]=='X'){
				ewincount++;
			}	
		}
		if(bwincount > ewincount)
		{
			cout << "Bryan's computer wins! Bryan: " << bwincount << " Elijah: " << ewincount << endl;
			btotalwins++;
		}
		else if(ewincount > bwincount)
		{
			cout << "Elijah's computer wins! Bryan: " << bwincount << " Elijah: " << ewincount << endl;
			etotalwins++;
		}
		else if(bwincount == ewincount)
		{
			cout << "It's a tie! Bryan: " << bwincount << " Elijah: " << ewincount << endl;
		}
	}
};

int main()
{
	Competition c;
	c.playgame();
}

void BGame::printboard(void)
{
	cout << "\t     |     |     \n";
	cout << "\t" << box11.boxoutput << "|" << box12.boxoutput << "|" << box13.boxoutput << "\n";
	cout << "\t     |     |     \n";
	cout << "\t-----------------\n";
	cout << "\t     |     |     \n";
	cout << "\t" << box14.boxoutput << "|" << box15.boxoutput << "|" << box16.boxoutput << "\n";
	cout << "\t     |     |     \n";
	cout << "\t-----------------\n";
	cout << "\t     |     |     \n";
	cout << "\t" << box17.boxoutput << "|" << box18.boxoutput << "|" << box19.boxoutput << "\n";
	cout << "\t     |     |     \n";
	cout << "\t\t     |     |     \n";
	cout << "\t\t" << box21.boxoutput << "|" << box22.boxoutput << "|" << box23.boxoutput << "\n";
	cout << "\t\t     |     |     \n";
	cout << "\t\t-----------------\n";
	cout << "\t\t     |     |     \n";
	cout << "\t\t" << box24.boxoutput << "|" << box25.boxoutput << "|" << box26.boxoutput << "\n";
	cout << "\t\t     |     |     \n";
	cout << "\t\t-----------------\n";
	cout << "\t\t     |     |     \n";
	cout << "\t\t" << box27.boxoutput << "|" << box28.boxoutput << "|" << box29.boxoutput << "\n";
	cout << "\t\t     |     |     \n";
	cout << "\t\t\t     |     |     \n";
	cout << "\t\t\t" << box31.boxoutput << "|" << box32.boxoutput << "|" << box33.boxoutput << "\n";
	cout << "\t\t\t     |     |     \n";
	cout << "\t\t\t-----------------\n";
	cout << "\t\t\t     |     |     \n";
	cout << "\t\t\t" << box34.boxoutput << "|" << box35.boxoutput << "|" << box36.boxoutput << "\n";
	cout << "\t\t\t     |     |     \n";
	cout << "\t\t\t-----------------\n";
	cout << "\t\t\t     |     |     \n";
	cout << "\t\t\t" << box37.boxoutput << "|" << box38.boxoutput << "|" << box39.boxoutput << "\n";
	cout << "\t\t\t     |     |     \n";
}

void Box::fill(int currentplayer, int user, int comp)
{
	filled = true;
	boxoutput = 'O';
}

void BGame::computerplay(void)
{
	if( (box11.boxoutput == "  O  " && box12.boxoutput == "  O  " && box13.filled == false) ||
		(box11.boxoutput == "  O  " && box13.boxoutput == "  O  " && box12.filled == false) ||
		(box12.boxoutput == "  O  " && box13.boxoutput == "  O  " && box11.filled == false))
	{
		if(box11.filled == false)
		{
			box11.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 1;
		}
		else if(box12.filled == false)
		{
			box12.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 2;
		}
		else if(box13.filled == false)
		{
			box13.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 3;
		}	
		else
		{
			cout << "Comp11-12-13 Error";
		}
	}
	else if((box14.boxoutput == "  O  " && box15.boxoutput == "  O  " && box16.filled == false) ||
			(box14.boxoutput == "  O  " && box16.boxoutput == "  O  " && box15.filled == false) ||
			(box15.boxoutput == "  O  " && box16.boxoutput == "  O  " && box14.filled == false))
	{	
		if(box14.filled == false)
		{
			box14.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 4;
		}
		else if(box15.filled == false)
		{
			box15.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 5;
		}
		else if(box16.filled == false)
		{
			box16.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 6;
		}	
		else
		{
			cout << "Comp14-15-16 Error";
		}
	}
	else if((box17.boxoutput == "  O  " && box18.boxoutput == "  O  " && box19.filled == false) ||
			(box17.boxoutput == "  O  " && box19.boxoutput == "  O  " && box18.filled == false) ||
			(box18.boxoutput == "  O  " && box19.boxoutput == "  O  " && box17.filled == false))
	{
		if(box17.filled == false)
		{
			box17.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 7;
		}
		else if(box18.filled == false)
		{
			box18.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 8;
		}
		else if(box19.filled == false)
		{
			box19.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 9;
		}	
		else
		{
			cout << "Comp17-18-19 Error";
		}
	}
	else if((box11.boxoutput == "  O  " && box14.boxoutput == "  O  " && box17.filled == false) ||
			(box11.boxoutput == "  O  " && box17.boxoutput == "  O  " && box14.filled == false) ||
			(box14.boxoutput == "  O  " && box17.boxoutput == "  O  " && box11.filled == false))
	{
		if(box11.filled == false)
		{
			box11.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 1;
		}
		else if(box14.filled == false)
		{
			box14.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 4;
		}
		else if(box17.filled == false)
		{
			box17.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 7;
		}	
		else
		{
			cout << "Comp11-14-17 Error";
		}
	}
	else if((box12.boxoutput == "  O  " && box15.boxoutput == "  O  " && box18.filled == false) ||
			(box12.boxoutput == "  O  " && box18.boxoutput == "  O  " && box15.filled == false) ||
			(box15.boxoutput == "  O  " && box18.boxoutput == "  O  " && box12.filled == false))
	{
		if(box12.filled == false)
		{
			box12.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 2;
		}
		else if(box15.filled == false)
		{
			box15.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 5;
		}
		else if(box18.filled == false)
		{
			box18.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 8;
		}	
		else
		{
			cout << "Comp12-15-18 Error";
		}
	}
	else if((box13.boxoutput == "  O  " && box16.boxoutput == "  O  " && box19.filled == false) ||
			(box13.boxoutput == "  O  " && box19.boxoutput == "  O  " && box16.filled == false) ||
			(box16.boxoutput == "  O  " && box19.boxoutput == "  O  " && box13.filled == false))
	{
		if(box13.filled == false)
		{
			box13.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 3;
		}
		else if(box16.filled == false)
		{
			box16.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 6;
		}
		else if(box19.filled == false)
		{
			box19.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 9;
		}	
		else
		{
			cout << "Comp13-16-19 Error";
		}
	}
	else if((box11.boxoutput == "  O  " && box15.boxoutput == "  O  " && box19.filled == false) ||
			(box11.boxoutput == "  O  " && box19.boxoutput == "  O  " && box15.filled == false) ||
			(box15.boxoutput == "  O  " && box19.boxoutput == "  O  " && box11.filled == false))
	{
		if(box11.filled == false)
		{
			box11.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 1;
		}
		else if(box15.filled == false)
		{
			box15.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 5;
		}
		else if(box19.filled == false)
		{
			box19.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 9;
		}	
		else
		{
			cout << "Comp11-15-19 Error";
		}
	}
	else if((box13.boxoutput == "  O  " && box15.boxoutput == "  O  " && box17.filled == false) ||
			(box13.boxoutput == "  O  " && box17.boxoutput == "  O  " && box15.filled == false) ||
			(box15.boxoutput == "  O  " && box17.boxoutput == "  O  " && box13.filled == false))
	{
		if(box13.filled == false)
		{
			box13.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 3;
		}
		else if(box15.filled == false)
		{
			box15.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 5;
		}
		else if(box17.filled == false)
		{
			box17.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 7;
		}	
		else
		{
			cout << "Comp13-15-17 Error";
		}
	}
	else if((box11.boxoutput == "  X  " && box12.boxoutput == "  X  " && box13.filled == false) ||
			(box11.boxoutput == "  X  " && box13.boxoutput == "  X  " && box12.filled == false) ||
			(box12.boxoutput == "  X  " && box13.boxoutput == "  X  " && box11.filled == false))
	{
		if(box11.filled == false)
		{
			box11.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 1;
		}
		else if(box12.filled == false)
		{
			box12.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 2;
		}
		else if(box13.filled == false)
		{
			box13.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 3;
		}	
		else
		{
			cout << "Play11-12-13 Error";
		}
	}
	else if((box14.boxoutput == "  X  " && box15.boxoutput == "  X  " && box16.filled == false) ||
			(box14.boxoutput == "  X  " && box16.boxoutput == "  X  " && box15.filled == false) ||
			(box15.boxoutput == "  X  " && box16.boxoutput == "  X  " && box14.filled == false))
	{	
		if(box14.filled == false)
		{
			box14.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 4;
		}
		else if(box15.filled == false)
		{
			box15.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 5;
		}
		else if(box16.filled == false)
		{
			box16.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 6;
		}	
		else
		{
			cout << "Play14-15-16 Error";
		}
	}
	else if((box17.boxoutput == "  X  " && box18.boxoutput == "  X  " && box19.filled == false) ||
			(box17.boxoutput == "  X  " && box19.boxoutput == "  X  " && box18.filled == false) ||
			(box18.boxoutput == "  X  " && box19.boxoutput == "  X  " && box17.filled == false))
	{
		if(box17.filled == false)
		{
			box17.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 7;
		}
		else if(box18.filled == false)
		{
			box18.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 8;
		}
		else if(box19.filled == false)
		{
			box19.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 9;
		}	
		else
		{
			cout << "Play17-18-19 Error";
		}
	}
	else if((box11.boxoutput == "  X  " && box14.boxoutput == "  X  " && box17.filled == false) ||
			(box11.boxoutput == "  X  " && box17.boxoutput == "  X  " && box14.filled == false) ||
			(box14.boxoutput == "  X  " && box17.boxoutput == "  X  " && box11.filled == false))
	{
		if(box11.filled == false)
		{
			box11.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 1;
		}
		else if(box14.filled == false)
		{
			box14.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 4;
		}
		else if(box17.filled == false)
		{
			box17.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 7;
		}	
		else
		{
			cout << "Play11-14-17 Error";
		}
	}
	else if((box12.boxoutput == "  X  " && box15.boxoutput == "  X  " && box18.filled == false) ||
			(box12.boxoutput == "  X  " && box18.boxoutput == "  X  " && box15.filled == false) ||
			(box15.boxoutput == "  X  " && box18.boxoutput == "  X  " && box12.filled == false))
	{
		if(box12.filled == false)
		{
			box12.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 2;
		}
		else if(box15.filled == false)
		{
			box15.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 5;
		}
		else if(box18.filled == false)
		{
			box18.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 8;
		}	
		else
		{
			cout << "Play12-15-18 Erorr";
		}
	}
	else if((box13.boxoutput == "  X  " && box16.boxoutput == "  X  " && box19.filled == false) ||
			(box13.boxoutput == "  X  " && box19.boxoutput == "  X  " && box16.filled == false) ||
			(box16.boxoutput == "  X  " && box19.boxoutput == "  X  " && box13.filled == false))
	{
		if(box13.filled == false)
		{
			box13.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 3;
		}
		else if(box16.filled == false)
		{
			box16.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 6;
		}
		else if(box19.filled == false)
		{
			box19.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 9;
		}	
		else
		{
			cout << "Play13-16-19 Error";
		}
	}
	else if((box11.boxoutput == "  X  " && box15.boxoutput == "  X  " && box19.filled == false) ||
			(box11.boxoutput == "  X  " && box19.boxoutput == "  X  " && box15.filled == false) ||
			(box15.boxoutput == "  X  " && box19.boxoutput == "  X  " && box11.filled == false))
	{
		if(box11.filled == false)
		{
			box11.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 1;
		}
		else if(box15.filled == false)
		{
			box15.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 5;
		}
		else if(box19.filled == false)
		{
			box19.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 9;
		}	
		else
		{
			cout << "Play11-15-19 Error";
		}
	}
	else if((box13.boxoutput == "  X  " && box15.boxoutput == "  X  " && box17.filled == false) ||
			(box13.boxoutput == "  X  " && box17.boxoutput == "  X  " && box15.filled == false) ||
			(box15.boxoutput == "  X  " && box17.boxoutput == "  X  " && box13.filled == false))
	{
		if(box13.filled == false)
		{
			box13.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 3;
		}
		else if(box15.filled == false)
		{
			box15.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 5;
		}
		else if(box17.filled == false)
		{
			box17.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 7;
		}	
		else
		{
			cout << "Play13-15-17 Error";
		}
	}
	else if((box21.boxoutput == "  O  " && box22.boxoutput == "  O  " && box23.filled == false) ||
			(box21.boxoutput == "  O  " && box23.boxoutput == "  O  " && box22.filled == false) ||
			(box22.boxoutput == "  O  " && box23.boxoutput == "  O  " && box21.filled == false))
	{
		if(box21.filled == false)
		{
			box21.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 1;
		}
		else if(box22.filled == false)
		{
			box22.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 2;
		}
		else if(box23.filled == false)
		{
			box23.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 3;
		}	
		else
		{
			cout << "Comp21-22-23 Error";
		}
	}
	else if((box24.boxoutput == "  O  " && box25.boxoutput == "  O  " && box26.filled == false) ||
			(box24.boxoutput == "  O  " && box26.boxoutput == "  O  " && box25.filled == false) ||
			(box25.boxoutput == "  O  " && box26.boxoutput == "  O  " && box24.filled == false))
	{	
		if(box24.filled == false)
		{
			box24.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 4;
		}
		else if(box25.filled == false)
		{
			box25.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 5;
		}
		else if(box26.filled == false)
		{
			box26.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 6;
		}
		else
		{
			cout << "Comp24-25-26 Error";
		}
	}
	else if((box27.boxoutput == "  O  " && box28.boxoutput == "  O  " && box29.filled == false) ||
			(box27.boxoutput == "  O  " && box29.boxoutput == "  O  " && box28.filled == false) ||
			(box28.boxoutput == "  O  " && box29.boxoutput == "  O  " && box27.filled == false))
	{
		if(box27.filled == false)
		{
			box27.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 7;
		}
		else if(box28.filled == false)
		{
			box28.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 8;
		}
		else if(box29.filled == false)
		{
			box29.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 9;
		}	
		else
		{
			cout << "Comp27-28-29 Error";
		}
	}
	else if((box21.boxoutput == "  O  " && box24.boxoutput == "  O  " && box27.filled == false) ||
			(box21.boxoutput == "  O  " && box27.boxoutput == "  O  " && box24.filled == false) ||
			(box24.boxoutput == "  O  " && box27.boxoutput == "  O  " && box21.filled == false))
	{
		if(box21.filled == false)
		{
			box21.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 1;
		}
		else if(box24.filled == false)
		{
			box24.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 4;
		}
		else if(box27.filled == false)
		{
			box27.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 7;
		}	
		else
		{
			cout << "Comp21-24-27 Error";
		}
	}
	else if((box22.boxoutput == "  O  " && box25.boxoutput == "  O  " && box28.filled == false) ||
			(box22.boxoutput == "  O  " && box28.boxoutput == "  O  " && box25.filled == false) ||
			(box25.boxoutput == "  O  " && box28.boxoutput == "  O  " && box22.filled == false))
	{
		if(box22.filled == false)
		{
			box22.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 2;
		}
		else if(box25.filled == false)
		{
			box25.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 5;
		}
		else if(box28.filled == false)
		{
			box28.fill(comp, user, comp);
		    sendboard = 2;
			sendbox = 8;
		}	
		else
		{
			cout << "Comp22-25-28 Error";
		}
	}
	else if((box23.boxoutput == "  O  " && box26.boxoutput == "  O  " && box29.filled == false) ||
			(box23.boxoutput == "  O  " && box29.boxoutput == "  O  " && box26.filled == false) ||
			(box26.boxoutput == "  O  " && box29.boxoutput == "  O  " && box23.filled == false))
	{
		if(box23.filled == false)
		{
			box23.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 3;
		}
		else if(box26.filled == false)
		{
			box26.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 6;
		}
		else if(box29.filled == false)
		{
			box29.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 9;
		}	
		else
		{
			cout << "Comp23-26-29 Error";
		}
	}
	else if((box21.boxoutput == "  O  " && box25.boxoutput == "  O  " && box29.filled == false) ||
			(box21.boxoutput == "  O  " && box29.boxoutput == "  O  " && box25.filled == false) ||
			(box25.boxoutput == "  O  " && box29.boxoutput == "  O  " && box21.filled == false))
	{
		if(box21.filled == false)
		{
			box21.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 1;
		}
		else if(box25.filled == false)
		{
			box25.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 5;
		}
		else if(box29.filled == false)
		{
			box29.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 9;
		}	
		else
		{
			cout << "Comp21-25-29 Error";
		}
	}
	else if((box23.boxoutput == "  O  " && box25.boxoutput == "  O  " && box27.filled == false) ||
			(box23.boxoutput == "  O  " && box27.boxoutput == "  O  " && box25.filled == false) ||
			(box25.boxoutput == "  O  " && box27.boxoutput == "  O  " && box23.filled == false))
	{
		if(box23.filled == false)
		{
			box23.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 3;
		}
		else if(box25.filled == false)
		{
			box25.fill(comp, user, comp);
		    sendboard = 2;
			sendbox = 5;
		}
		else if(box27.filled == false)
		{
			box27.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 7;
		}	
		else
		{
			cout << "Comp23-25-27 Error";
		}
	}
	else if((box21.boxoutput == "  X  " && box22.boxoutput == "  X  " && box23.filled == false) ||
			(box21.boxoutput == "  X  " && box23.boxoutput == "  X  " && box22.filled == false) ||
			(box22.boxoutput == "  X  " && box23.boxoutput == "  X  " && box21.filled == false))
	{
		if(box21.filled == false)
		{
			box21.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 1;
		}
		else if(box22.filled == false)
		{
			box22.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 2;
		}
		else if(box23.filled == false)
		{
			box23.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 3;
		}	
		else
		{
			cout << "Play21-22-23 Error";
		}
	}
	else if((box24.boxoutput == "  X  " && box25.boxoutput == "  X  " && box26.filled == false) ||
			(box24.boxoutput == "  X  " && box26.boxoutput == "  X  " && box25.filled == false) ||
			(box25.boxoutput == "  X  " && box26.boxoutput == "  X  " && box24.filled == false))
	{	
		if(box24.filled == false)
		{
			box24.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 4;
		}
		else if(box25.filled == false)
		{
			box25.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 5;
		}
		else if(box26.filled == false)
		{
			box26.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 6;
		}	
		else
		{
			cout << "Play24-25-26 Error";
		}
	}
	else if((box27.boxoutput == "  X  " && box28.boxoutput == "  X  " && box29.filled == false) ||
			(box27.boxoutput == "  X  " && box29.boxoutput == "  X  " && box28.filled == false) ||
			(box28.boxoutput == "  X  " && box29.boxoutput == "  X  " && box27.filled == false))
	{
		if(box27.filled == false)
		{
			box27.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 7;
		}
		else if(box28.filled == false)
		{
			box28.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 8;
		}
		else if(box29.filled == false)
		{
			box29.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 9;
		}	
		else
		{
			cout << "Play27-28-29 Error";
		}
	}
	else if((box21.boxoutput == "  X  " && box24.boxoutput == "  X  " && box27.filled == false) ||
			(box21.boxoutput == "  X  " && box27.boxoutput == "  X  " && box24.filled == false) ||
			(box24.boxoutput == "  X  " && box27.boxoutput == "  X  " && box21.filled == false))
	{
		if(box21.filled == false)
		{
			box21.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 1;
		}
		else if(box24.filled == false)
		{
			box24.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 4;
		}
		else if(box27.filled == false)
		{
			box27.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 7;
		}	
		else
		{
			cout << "Play21-24-27 Error";
		}
	}
	else if((box22.boxoutput == "  X  " && box25.boxoutput == "  X  " && box28.filled == false) ||
			(box22.boxoutput == "  X  " && box28.boxoutput == "  X  " && box25.filled == false) ||
			(box25.boxoutput == "  X  " && box28.boxoutput == "  X  " && box22.filled == false))
	{
		if(box22.filled == false)
		{
			box22.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 2;
		}
		else if(box25.filled == false)
		{
			box25.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 5;
		}
		else if(box28.filled == false)
		{
			box28.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 8;
		}	
		else
		{
			cout << "Play22-25-28 Erorr";
		}
	}
	else if((box23.boxoutput == "  X  " && box26.boxoutput == "  X  " && box29.filled == false) ||
			(box23.boxoutput == "  X  " && box29.boxoutput == "  X  " && box26.filled == false) ||
			(box26.boxoutput == "  X  " && box29.boxoutput == "  X  " && box23.filled == false))
	{
		if(box23.filled == false)
		{
			box23.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 3;
		}
		else if(box26.filled == false)
		{
			box26.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 6;
		}
		else if(box29.filled == false)
		{
			box29.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 9;
		}	
		else
		{
			cout << "Play23-26-29 Error";
		}
	}
	else if((box21.boxoutput == "  X  " && box25.boxoutput == "  X  " && box29.filled == false) ||
			(box21.boxoutput == "  X  " && box29.boxoutput == "  X  " && box25.filled == false) ||
			(box25.boxoutput == "  X  " && box29.boxoutput == "  X  " && box21.filled == false))
	{
		if(box21.filled == false)
		{
			box21.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 1;
		}
		else if(box25.filled == false)
		{
			box25.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 5;
		}
		else if(box29.filled == false)
		{
			box29.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 9;
		}	
		else
		{
			cout << "Play21-25-29 Error";
		}
	}
	else if((box23.boxoutput == "  X  " && box25.boxoutput == "  X  " && box27.filled == false) ||
			(box23.boxoutput == "  X  " && box27.boxoutput == "  X  " && box25.filled == false) ||
			(box25.boxoutput == "  X  " && box27.boxoutput == "  X  " && box23.filled == false))
	{
		if(box23.filled == false)
		{
			box23.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 3;
		}
		else if(box25.filled == false)
		{
			box25.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 5;
		}
		else if(box27.filled == false)
		{
			box27.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 7;
		}	
		else
		{
			cout << "Play23-25-27 Error";
		}
	}
	else if( (box31.boxoutput == "  O  " && box32.boxoutput == "  O  " && box33.filled == false) ||
		(box31.boxoutput == "  O  " && box33.boxoutput == "  O  " && box32.filled == false) ||
		(box32.boxoutput == "  O  " && box33.boxoutput == "  O  " && box31.filled == false))
	{
		if(box31.filled == false)
		{
			box31.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 1;
		}
		else if(box32.filled == false)
		{
			box32.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 2;
		}
		else if(box33.filled == false)
		{
			box33.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 3;
		}	
		else
		{
			cout << "Comp31-32-33 Error";
		}
	}
	else if((box34.boxoutput == "  O  " && box35.boxoutput == "  O  " && box36.filled == false) ||
			(box34.boxoutput == "  O  " && box36.boxoutput == "  O  " && box35.filled == false) ||
			(box35.boxoutput == "  O  " && box36.boxoutput == "  O  " && box34.filled == false))
	{	
		if(box34.filled == false)
		{
			box34.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 4;
		}
		else if(box35.filled == false)
		{
			box35.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 5;
		}
		else if(box36.filled == false)
		{
			box36.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 6;
		}	
		else
		{
			cout << "Comp34-35-36 Error";
		}
	}
	else if((box37.boxoutput == "  O  " && box38.boxoutput == "  O  " && box39.filled == false) ||
			(box37.boxoutput == "  O  " && box39.boxoutput == "  O  " && box38.filled == false) ||
			(box38.boxoutput == "  O  " && box39.boxoutput == "  O  " && box37.filled == false))
	{
		if(box37.filled == false)
		{
			box37.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 7;
		}
		else if(box38.filled == false)
		{
			box38.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 8;
		}
		else if(box39.filled == false)
		{
			box39.fill(comp, user, comp);
		    sendboard = 3;
			sendbox = 9;
		}	
		else
		{
			cout << "Comp37-38-39 Error";
		}
	}
	else if((box31.boxoutput == "  O  " && box34.boxoutput == "  O  " && box37.filled == false) ||
			(box31.boxoutput == "  O  " && box37.boxoutput == "  O  " && box34.filled == false) ||
			(box34.boxoutput == "  O  " && box37.boxoutput == "  O  " && box31.filled == false))
	{
		if(box31.filled == false)
		{
			box31.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 1;
		}
		else if(box34.filled == false)
		{
			box34.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 4;
		}
		else if(box37.filled == false)
		{
			box37.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 7;
		}	
		else
		{
			cout << "Comp31-34-37 Error";
		}
	}
	else if((box32.boxoutput == "  O  " && box35.boxoutput == "  O  " && box38.filled == false) ||
			(box32.boxoutput == "  O  " && box38.boxoutput == "  O  " && box35.filled == false) ||
			(box35.boxoutput == "  O  " && box38.boxoutput == "  O  " && box32.filled == false))
	{
		if(box32.filled == false)
		{
			box32.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 2;
		}
		else if(box35.filled == false)
		{
			box35.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 5;
		}
		else if(box38.filled == false)
		{
			box38.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 8;
		}	
		else
		{
			cout << "Comp32-35-38 Error";
		}
	}
	else if((box33.boxoutput == "  O  " && box36.boxoutput == "  O  " && box39.filled == false) ||
			(box33.boxoutput == "  O  " && box39.boxoutput == "  O  " && box36.filled == false) ||
			(box36.boxoutput == "  O  " && box39.boxoutput == "  O  " && box33.filled == false))
	{
		if(box33.filled == false)
		{
			box33.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 3;
		}
		else if(box36.filled == false)
		{
			box36.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 6;
		}
		else if(box39.filled == false)
		{
			box39.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 9;
		}	
		else
		{
			cout << "Comp33-36-39 Error";
		}
	}
	else if((box31.boxoutput == "  O  " && box35.boxoutput == "  O  " && box39.filled == false) ||
			(box31.boxoutput == "  O  " && box39.boxoutput == "  O  " && box35.filled == false) ||
			(box35.boxoutput == "  O  " && box39.boxoutput == "  O  " && box31.filled == false))
	{
		if(box31.filled == false)
		{
			box31.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 1;
		}
		else if(box35.filled == false)
		{
			box35.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 5;
		}
		else if(box39.filled == false)
		{
			box39.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 9;
		}	
		else
		{
			cout << "Comp31-35-39 Error";
		}
	}
	else if((box33.boxoutput == "  O  " && box35.boxoutput == "  O  " && box37.filled == false) ||
			(box33.boxoutput == "  O  " && box37.boxoutput == "  O  " && box35.filled == false) ||
			(box35.boxoutput == "  O  " && box37.boxoutput == "  O  " && box33.filled == false))
	{
		if(box33.filled == false)
		{
			box33.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 3;
		}
		else if(box35.filled == false)
		{
			box35.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 5;
		}
		else if(box37.filled == false)
		{
			box37.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 7;
		}	
		else
		{
			cout << "Comp33-35-37 Error";
		}
	}
	else if((box31.boxoutput == "  X  " && box32.boxoutput == "  X  " && box33.filled == false) ||
			(box31.boxoutput == "  X  " && box33.boxoutput == "  X  " && box32.filled == false) ||
			(box32.boxoutput == "  X  " && box33.boxoutput == "  X  " && box31.filled == false))
	{
		if(box31.filled == false)
		{
			box31.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 1;
		}
		else if(box32.filled == false)
		{
			box32.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 2;
		}
		else if(box33.filled == false)
		{
			box33.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 3;
		}	
		else
		{
			cout << "Play31-32-33 Error";
		}
	}
	else if((box34.boxoutput == "  X  " && box35.boxoutput == "  X  " && box36.filled == false) ||
			(box34.boxoutput == "  X  " && box36.boxoutput == "  X  " && box35.filled == false) ||
			(box35.boxoutput == "  X  " && box36.boxoutput == "  X  " && box34.filled == false))
	{	
		if(box34.filled == false)
		{
			box34.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 4;
		}
		else if(box35.filled == false)
		{
			box35.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 5;
		}
		else if(box36.filled == false)
		{
			box36.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 6;
		}	
		else
		{
			cout << "Play34-35-36 Error";
		}
	}
	else if((box37.boxoutput == "  X  " && box38.boxoutput == "  X  " && box39.filled == false) ||
			(box37.boxoutput == "  X  " && box39.boxoutput == "  X  " && box38.filled == false) ||
			(box38.boxoutput == "  X  " && box39.boxoutput == "  X  " && box37.filled == false))
	{
		if(box37.filled == false)
		{
			box37.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 7;
		}
		else if(box38.filled == false)
		{
			box38.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 8;
		}
		else if(box39.filled == false)
		{
			box39.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 9;
		}	
		else
		{
			cout << "Play37-38-39 Error";
		}
	}
	else if((box31.boxoutput == "  X  " && box34.boxoutput == "  X  " && box37.filled == false) ||
			(box31.boxoutput == "  X  " && box37.boxoutput == "  X  " && box34.filled == false) ||
			(box34.boxoutput == "  X  " && box37.boxoutput == "  X  " && box31.filled == false))
	{
		if(box31.filled == false)
		{
			box31.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 1;
		}
		else if(box34.filled == false)
		{
			box34.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 4;
		}
		else if(box37.filled == false)
		{
			box37.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 7;
		}	
		else
		{
			cout << "Play31-34-37 Error";
		}
	}
	else if((box32.boxoutput == "  X  " && box35.boxoutput == "  X  " && box38.filled == false) ||
			(box32.boxoutput == "  X  " && box38.boxoutput == "  X  " && box35.filled == false) ||
			(box35.boxoutput == "  X  " && box38.boxoutput == "  X  " && box32.filled == false))
	{
		if(box32.filled == false)
		{
			box32.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 2;
		}
		else if(box35.filled == false)
		{
			box35.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 5;
		}
		else if(box38.filled == false)
		{
			box38.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 8;
		}	
		else
		{
			cout << "Play32-35-38 Erorr";
		}
	}
	else if((box33.boxoutput == "  X  " && box36.boxoutput == "  X  " && box39.filled == false) ||
			(box33.boxoutput == "  X  " && box39.boxoutput == "  X  " && box36.filled == false) ||
			(box36.boxoutput == "  X  " && box39.boxoutput == "  X  " && box33.filled == false))
	{
		if(box33.filled == false)
		{
			box33.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 3;
		}
		else if(box36.filled == false)
		{
			box36.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 6;
		}
		else if(box39.filled == false)
		{
			box39.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 9;
		}	
		else
		{
			cout << "Play33-36-39 Error";
		}
	}
	else if((box31.boxoutput == "  X  " && box35.boxoutput == "  X  " && box39.filled == false) ||
			(box31.boxoutput == "  X  " && box39.boxoutput == "  X  " && box35.filled == false) ||
			(box35.boxoutput == "  X  " && box39.boxoutput == "  X  " && box31.filled == false))
	{
		if(box31.filled == false)
		{
			box31.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 1;
		}
		else if(box35.filled == false)
		{
			box35.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 5;
		}
		else if(box39.filled == false)
		{
			box39.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 9;
		}	
		else
		{
			cout << "Play31-35-39 Error";
		}
	}
	else if((box33.boxoutput == "  X  " && box35.boxoutput == "  X  " && box37.filled == false) ||
			(box33.boxoutput == "  X  " && box37.boxoutput == "  X  " && box35.filled == false) ||
			(box35.boxoutput == "  X  " && box37.boxoutput == "  X  " && box33.filled == false))
	{
		if(box33.filled == false)
		{
			box33.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 3;
		}
		else if(box35.filled == false)
		{
			box35.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 5;
		}
		else if(box37.filled == false)
		{
			box37.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 7;
		}	
		else
		{
			cout << "Play33-35-37 Error";
		}
	}
	else if((box11.boxoutput == "  O  " && box21.boxoutput == "  O  " && box31.filled == false) ||
			(box11.boxoutput == "  O  " && box31.boxoutput == "  O  " && box21.filled == false) ||
			(box21.boxoutput == "  O  " && box31.boxoutput == "  O  " && box11.filled == false))
	{
		if(box11.filled == false)
		{
			box11.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 1;
		}
		else if(box21.filled == false)
		{
			box21.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 1;
		}
		else if(box31.filled == false)
		{
			box31.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 1;
		}	
		else
		{
			cout << "Comp11-21-31 Error";
		}
	}
	else if((box12.boxoutput == "  O  " && box22.boxoutput == "  O  " && box32.filled == false) ||
			(box12.boxoutput == "  O  " && box32.boxoutput == "  O  " && box22.filled == false) ||
			(box22.boxoutput == "  O  " && box32.boxoutput == "  O  " && box12.filled == false))
	{
		if(box12.filled == false)
		{
			box12.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 2;
		}
		else if(box22.filled == false)
		{
			box22.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 2;
		}
		else if(box32.filled == false)
		{
			box32.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 2;
		}	
		else
		{
			cout << "Comp12-22-32 Error";
		}
	}
	else if((box13.boxoutput == "  O  " && box23.boxoutput == "  O  " && box33.filled == false) ||
			(box13.boxoutput == "  O  " && box33.boxoutput == "  O  " && box23.filled == false) ||
			(box23.boxoutput == "  O  " && box33.boxoutput == "  O  " && box13.filled == false))
	{
		if(box13.filled == false)
		{
			box13.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 3;
		}
		else if(box23.filled == false)
		{
			box23.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 3;
		}
		else if(box33.filled == false)
		{
			box33.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 3;
		}	
		else
		{
			cout << "Comp13-23-33 Error";
		}
	}
	else if((box14.boxoutput == "  O  " && box24.boxoutput == "  O  " && box34.filled == false) ||
			(box14.boxoutput == "  O  " && box34.boxoutput == "  O  " && box24.filled == false) ||
			(box24.boxoutput == "  O  " && box34.boxoutput == "  O  " && box14.filled == false))
	{
		if(box14.filled == false)
		{
			box14.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 4;
		}
		else if(box24.filled == false)
		{
			box24.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 4;
		}
		else if(box34.filled == false)
		{
			box34.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 4;
		}	
		else
		{
			cout << "Comp14-24-34 Error";
		}
	}
	else if((box15.boxoutput == "  O  " && box25.boxoutput == "  O  " && box35.filled == false) ||
			(box15.boxoutput == "  O  " && box35.boxoutput == "  O  " && box25.filled == false) ||
			(box25.boxoutput == "  O  " && box35.boxoutput == "  O  " && box15.filled == false))
	{
		if(box15.filled == false)
		{
			box15.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 5;
		}
		else if(box25.filled == false)
		{
			box25.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 5;
		}
		else if(box35.filled == false)
		{
			box35.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 5;
		}	
		else
		{
			cout << "Comp15-25-35 Error";
		}
	}
	else if((box16.boxoutput == "  O  " && box26.boxoutput == "  O  " && box36.filled == false) ||
			(box16.boxoutput == "  O  " && box36.boxoutput == "  O  " && box26.filled == false) ||
			(box26.boxoutput == "  O  " && box36.boxoutput == "  O  " && box16.filled == false))
	{
		if(box16.filled == false)
		{
			box16.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 6;
		}
		else if(box26.filled == false)
		{
			box26.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 6;
		}
		else if(box36.filled == false)
		{
			box36.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 6;
		}	
		else
		{
			cout << "Comp16-26-36 Error";
		}
	}
	else if((box17.boxoutput == "  O  " && box27.boxoutput == "  O  " && box37.filled == false) ||
			(box17.boxoutput == "  O  " && box37.boxoutput == "  O  " && box27.filled == false) ||
			(box27.boxoutput == "  O  " && box37.boxoutput == "  O  " && box17.filled == false))
	{
		if(box17.filled == false)
		{
			box17.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 7;
		}
		else if(box27.filled == false)
		{
			box27.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 7;
		}
		else if(box37.filled == false)
		{
			box37.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 7;
		}	
		else
		{
			cout << "Comp17-27-37 Error";
		}
	}
	else if((box18.boxoutput == "  O  " && box28.boxoutput == "  O  " && box38.filled == false) ||
			(box18.boxoutput == "  O  " && box38.boxoutput == "  O  " && box28.filled == false) ||
			(box28.boxoutput == "  O  " && box38.boxoutput == "  O  " && box18.filled == false))
	{
		if(box18.filled == false)
		{
			box18.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 8;
		}
		else if(box28.filled == false)
		{
			box28.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 8;
		}
		else if(box38.filled == false)
		{
			box38.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 8;
		}	
		else
		{
			cout << "Comp18-28-38 Error";
		}
	}
	else if((box19.boxoutput == "  O  " && box29.boxoutput == "  O  " && box39.filled == false) ||
			(box19.boxoutput == "  O  " && box39.boxoutput == "  O  " && box29.filled == false) ||
			(box29.boxoutput == "  O  " && box39.boxoutput == "  O  " && box19.filled == false))
	{
		if(box19.filled == false)
		{
			box19.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 9;
		}
		else if(box29.filled == false)
		{
			box29.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 9;
		}
		else if(box39.filled == false)
		{
			box39.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 9;
		}	
		else
		{
			cout << "Comp19-29-39 Error";
		}
	}
	else if((box11.boxoutput == "  X  " && box21.boxoutput == "  X  " && box31.filled == false) ||
			(box11.boxoutput == "  X  " && box31.boxoutput == "  X  " && box21.filled == false) ||
			(box21.boxoutput == "  X  " && box31.boxoutput == "  X  " && box11.filled == false))
	{
		if(box11.filled == false)
		{
			box11.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 1;
		}
		else if(box21.filled == false)
		{
			box21.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 1;
		}
		else if(box31.filled == false)
		{
			box31.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 1;
		}	
		else
		{
			cout << "Play11-21-31 Error";
		}
	}
	else if((box12.boxoutput == "  X  " && box22.boxoutput == "  X  " && box32.filled == false) ||
			(box12.boxoutput == "  X  " && box32.boxoutput == "  X  " && box22.filled == false) ||
			(box22.boxoutput == "  X  " && box32.boxoutput == "  X  " && box12.filled == false))
	{
		if(box12.filled == false)
		{
			box12.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 2;
		}
		else if(box22.filled == false)
		{
			box22.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 2;
		}
		else if(box32.filled == false)
		{
			box32.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 2;
		}	
		else
		{
			cout << "Play12-22-32 Error";
		}
	}
	else if((box13.boxoutput == "  X  " && box23.boxoutput == "  X  " && box33.filled == false) ||
			(box13.boxoutput == "  X  " && box33.boxoutput == "  X  " && box23.filled == false) ||
			(box23.boxoutput == "  X  " && box33.boxoutput == "  X  " && box13.filled == false))
	{
		if(box13.filled == false)
		{
			box13.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 3;
		}
		else if(box23.filled == false)
		{
			box23.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 3;
		}
		else if(box33.filled == false)
		{
			box33.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 3;
		}	
		else
		{
			cout << "Play13-23-33 Error";
		}
	}
	else if((box14.boxoutput == "  X  " && box24.boxoutput == "  X  " && box34.filled == false) ||
			(box14.boxoutput == "  X  " && box34.boxoutput == "  X  " && box24.filled == false) ||
			(box24.boxoutput == "  X  " && box34.boxoutput == "  X  " && box14.filled == false))
	{
		if(box14.filled == false)
		{
			box14.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 4;
		}
		else if(box24.filled == false)
		{
			box24.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 4;
		}
		else if(box34.filled == false)
		{
			box34.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 4;
		}	
		else
		{
			cout << "Play14-24-34 Error";
		}
	}
	else if((box15.boxoutput == "  X  " && box25.boxoutput == "  X  " && box35.filled == false) ||
			(box15.boxoutput == "  X  " && box35.boxoutput == "  X  " && box25.filled == false) ||
			(box25.boxoutput == "  X  " && box35.boxoutput == "  X  " && box15.filled == false))
	{
		if(box15.filled == false)
		{
			box15.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 5;
		}
		else if(box25.filled == false)
		{
			box25.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 5;
		}
		else if(box35.filled == false)
		{
			box35.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 5;
		}	
		else
		{
			cout << "Play15-25-35 Error";
		}
	}
	else if((box16.boxoutput == "  X  " && box26.boxoutput == "  X  " && box36.filled == false) ||
			(box16.boxoutput == "  X  " && box36.boxoutput == "  X  " && box26.filled == false) ||
			(box26.boxoutput == "  X  " && box36.boxoutput == "  X  " && box16.filled == false))
	{
		if(box16.filled == false)
		{
			box16.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 6;
		}
		else if(box26.filled == false)
		{
			box26.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 6;
		}
		else if(box36.filled == false)
		{
			box36.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 6;
		}	
		else
		{
			cout << "Play16-26-36 Error";
		}
	}
	else if((box17.boxoutput == "  X  " && box27.boxoutput == "  X  " && box37.filled == false) ||
			(box17.boxoutput == "  X  " && box37.boxoutput == "  X  " && box27.filled == false) ||
			(box27.boxoutput == "  X  " && box37.boxoutput == "  X  " && box17.filled == false))
	{
		if(box17.filled == false)
		{
			box17.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 7;
		}
		else if(box27.filled == false)
		{
			box27.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 7;
		}
		else if(box37.filled == false)
		{
			box37.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 7;
		}	
		else
		{
			cout << "Play17-27-37 Error";
		}
	}
	else if((box18.boxoutput == "  X  " && box28.boxoutput == "  X  " && box38.filled == false) ||
			(box18.boxoutput == "  X  " && box38.boxoutput == "  X  " && box28.filled == false) ||
			(box28.boxoutput == "  X  " && box38.boxoutput == "  X  " && box18.filled == false))
	{
		if(box18.filled == false)
		{
			box18.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 8;
		}
		else if(box28.filled == false)
		{
			box28.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 8;
		}
		else if(box38.filled == false)
		{
			box38.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 8;
		}	
		else
		{
			cout << "Play18-28-38 Error";
		}
	}
	else if((box19.boxoutput == "  X  " && box29.boxoutput == "  X  " && box39.filled == false) ||
			(box19.boxoutput == "  X  " && box39.boxoutput == "  X  " && box29.filled == false) ||
			(box29.boxoutput == "  X  " && box39.boxoutput == "  X  " && box19.filled == false))
	{
		if(box19.filled == false)
		{
			box19.fill(comp, user, comp);
			sendboard = 1;
			sendbox = 9;
		}
		else if(box29.filled == false)
		{
			box29.fill(comp, user, comp);
			sendboard = 2;
			sendbox = 9;
		}
		else if(box39.filled == false)
		{
			box39.fill(comp, user, comp);
			sendboard = 3;
			sendbox = 9;
		}	
		else
		{
			cout << "Play19-29-39 Error";
		}
	}
	else
	{
		int randomchoice = rand() % (27-1+1) + 1;
		int filledthisturn = 0;
		while(filledthisturn != 1)
		{
			if(randomchoice == 1)
			{
				if(box11.filled == false)
				{
					box11.fill(comp, user, comp);
					
					sendboard = 1;
					sendbox = 1;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-2+1) + 1;
				}
			}
			else if(randomchoice == 2)
			{
				if(box12.filled == false)
				{
					box12.fill(comp, user, comp);
					
					sendboard = 1;
					sendbox = 2;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-3+1) + 1;
				}
			}
			else if(randomchoice == 3)
			{
				if(box13.filled == false)
				{
					box13.fill(comp, user, comp);
					
					sendboard = 1;
					sendbox = 3;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-4+1) + 1;
				}
			}
			else if(randomchoice == 4)
			{
				if(box14.filled == false)
				{
					box14.fill(comp, user, comp);
					
					sendboard = 1;
					sendbox = 4;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-5+1) + 1;
				}
			}
			else if(randomchoice == 5)
			{
				if(box15.filled == false)
				{
					box15.fill(comp, user, comp);
				    
				    sendboard = 1;
					sendbox = 5;
				    filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-6+1) + 1;
				}
			}
			else if(randomchoice == 6)
			{
				if(box16.filled == false)
				{
					box16.fill(comp, user, comp);
					
					sendboard = 1;
					sendbox = 6;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-7+1) + 1;
				}
			}
			else if(randomchoice == 7)
			{
				if(box17.filled == false)
				{
					box17.fill(comp, user, comp);
					
					sendboard = 1;
					sendbox = 7;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-8+1) + 1;
				}
			}
			else if(randomchoice == 8)
			{
				if(box18.filled == false)
				{
					box18.fill(comp, user, comp);
					
					sendboard = 1;
					sendbox = 8;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-9+1) + 1;
				}
			}
			else if(randomchoice == 9)
			{
				if(box19.filled == false)
				{
					box19.fill(comp, user, comp);
					
					sendboard = 1;
					sendbox = 9;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-10+1) + 1;
				}
			}
			else if(randomchoice == 10)
			{
				if(box21.filled == false)
				{
					box21.fill(comp, user, comp);
					
					sendboard = 2;
					sendbox = 1;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-11+1) + 1;
				}
			}
			else if(randomchoice == 11)
			{
				if(box22.filled == false)
				{
					box22.fill(comp, user, comp);
					
					sendboard = 2;
					sendbox = 2;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-12+1) + 1;
				}
			}
			else if(randomchoice == 12)
			{
				if(box23.filled == false)
				{
					box23.fill(comp, user, comp);
					
					sendboard = 2;
					sendbox = 3;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-13+1) + 1;
				}
			}
			else if(randomchoice == 13)
			{
				if(box24.filled == false)
				{
					box24.fill(comp, user, comp);
					
					sendboard = 2;
					sendbox = 4;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-14+1) + 1;
				}
			}
			else if(randomchoice == 14)
			{
				if(box25.filled == false)
				{
					box25.fill(comp, user, comp);
					
					sendboard = 2;
					sendbox = 5;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-15+1) + 1;
				}
			}
			else if(randomchoice == 15)
			{
				if(box26.filled == false)
				{
					box26.fill(comp, user, comp);
					
					sendboard = 2;
					sendbox = 6;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-16+1) + 1;
				}
			}
			else if(randomchoice == 16)
			{
				if(box27.filled == false)
				{
					box27.fill(comp, user, comp);
					
					sendboard = 2;
					sendbox = 7;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-17+1) + 1;
				}
			}
			else if(randomchoice == 17)
			{
				if(box28.filled == false)
				{
					box28.fill(comp, user, comp);
					
					sendboard = 2;
					sendbox = 8;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-18+1) + 1;
				}
			}
			else if(randomchoice == 18)
			{
				if(box29.filled == false)
				{
					box29.fill(comp, user, comp);
					
					sendboard = 2;
					sendbox = 9;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-19+1) + 1;
				}
			}
			else if(randomchoice == 19)
			{
				if(box31.filled == false)
				{
					box31.fill(comp, user, comp);
					
					sendboard = 3;
					sendbox = 1;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-20+1) + 1;
				}
			}
			else if(randomchoice == 20)
			{
				if(box32.filled == false)
				{
					box32.fill(comp, user, comp);
					
					sendboard = 3;
					sendbox = 2;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-21+1) + 1;
				}
			}
			else if(randomchoice == 21)
			{
				if(box33.filled == false)
				{
					box33.fill(comp, user, comp);
					
					sendboard = 3;
					sendbox = 3;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-22+1) + 1;
				}
			}
			else if(randomchoice == 22)
			{
				if(box34.filled == false)
				{
					box34.fill(comp, user, comp);
					
					sendboard = 3;
					sendbox = 4;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-23+1) + 1;
				}
			}
			else if(randomchoice == 23)
			{
				if(box35.filled == false)
				{
					box35.fill(comp, user, comp);
					
					sendboard = 3;
					sendbox = 5;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-24+1) + 1;
				}
			}
			else if(randomchoice == 24)
			{
				if(box36.filled == false)
				{
					box36.fill(comp, user, comp);
					
					sendboard = 3;
					sendbox = 6;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-25+1) + 1;
				}
			}
			else if(randomchoice == 25)
			{
				if(box37.filled == false)
				{
					box37.fill(comp, user, comp);
					
					sendboard = 3;
					sendbox = 7;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-26+1) + 1;
				}
			}
			else if(randomchoice == 26)
			{
				if(box38.filled == false)
				{
					box38.fill(comp, user, comp);
					
					sendboard = 3;
					sendbox = 8;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = 27;
				}
			}
			else if(randomchoice == 27)
			{
				if(box39.filled == false)
				{
					box39.fill(comp, user, comp);
					
					sendboard = 3;
					sendbox = 9;
					filledthisturn = 1;
				}
				else
				{
					randomchoice = rand() % (27-1+1) + 1;
				}
			}
			else
			{
				cout << "CompRandomError";
			}
		}
	}
}






