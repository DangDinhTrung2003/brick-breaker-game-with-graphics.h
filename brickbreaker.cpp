#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
void game()
{
	int x=200,y=600;
	int c=200,d=600,e=200,f=600;
	
  	int brickx[30],bricky[30];
  	brickx[0]=100;brickx[1]=250;brickx[2]=400;brickx[3]=550;brickx[4]=700;
  	brickx[5]=100;brickx[6]=250;brickx[7]=400;brickx[8]=550;brickx[9]=700;
  	brickx[10]=100,brickx[11]=250;brickx[12]=400;brickx[13]=550;brickx[14]=700;
  	brickx[15]=100;brickx[16]=250;brickx[17]=400;brickx[18]=550;brickx[19]=700;
  	brickx[20]=100;brickx[21]=250;brickx[22]=400;brickx[23]=550;brickx[24]=700;
  	
  	bricky[0]=100;bricky[1]=100;bricky[2]=100;bricky[3]=100;bricky[4]=100;
  	bricky[5]=200;bricky[6]=200;bricky[7]=200;bricky[8]=200;bricky[9]=200;
  	bricky[10]=300;bricky[11]=300;bricky[12]=300;bricky[13]=300,bricky[14]=300;
  	bricky[15]=400;bricky[16]=400;bricky[17]=400;bricky[18]=400,bricky[19]=400;
  	bricky[20]=500;bricky[21]=500;bricky[22]=500;bricky[23]=500,bricky[24]=500;
  	
    int a=460,b=750,page=0,vx=5,vy=5;
    int vc=5,vd=5,ve=5,vf=5;
    
    int diem=0;
    
    while(true)
    {
    	setactivepage(page);
    	setvisualpage(1-page);
    	
    	cleardevice();
    	setcolor(BLUE);
   		rectangle(985,0,1000,800);
   		setfillstyle(SOLID_FILL,BLUE);
   		floodfill(986,1,BLUE);
   		setcolor(BLUE);
   		rectangle(0,0,985,15);
   		setfillstyle(SOLID_FILL,BLUE);
   		floodfill(1,1,BLUE);
   		setcolor(BLUE);
   		rectangle(0,15,15,800);
   		setfillstyle(SOLID_FILL,BLUE);
   		floodfill(1,16,BLUE);

		setcolor(RED);
		rectangle(a,b,a+80,b+30);
		setfillstyle(SOLID_FILL,RED);
		floodfill(a+1,b+1,RED);
    	if(a>=21 && a<=890)
    	{
		if(GetAsyncKeyState(VK_RIGHT))a+=10;
		else if(GetAsyncKeyState(VK_LEFT))a-=10;
		}
		else if(a<=21)
		{
			if(GetAsyncKeyState(VK_RIGHT))a+=10;
		}
    	else if(a>=890)
    	{
    		if(GetAsyncKeyState(VK_LEFT))a-=10;
		}
		
		
		
        setcolor(YELLOW);
        circle(x,y,10);
        setfillstyle(SOLID_FILL,YELLOW);
		floodfill(x,y,YELLOW);
		delay(10);
		
		x=x+vx;
		y=y+vy;
		
		if(x+10>=a && x-10<=a+80 && y+10==b)
		{
			vy=-vy;
		}
		if(x+10==985)
		{
			vx=-vx;
		}
		if(y-10==15)
		{
			vy=-vy;
		}
		if(x-10==15)
		{
			vx=-vx;
		}
		
		for(int i=0;i<=24;i++)
		{
			setcolor(GREEN);
   			rectangle(brickx[i],bricky[i],brickx[i]+100,bricky[i]+30);
   			setfillstyle(SOLID_FILL,GREEN);
   			floodfill(brickx[i]+1,bricky[i]+1,GREEN);
		}
		
   		
		for(int i=0;i<=24;i++)
		{
		if(x>=brickx[i] && x<=brickx[i]+100 && y+10<=bricky[i]+5 && y+10>=bricky[i])
		{
			vy=-vy;
			brickx[i]=1000;
			bricky[i]=1000;
			diem++;
		}
		if(x>=brickx[i] && x<=brickx[i]+100 && y-10>=bricky[i]+30-5 && y-10<=bricky[i]+30)
		{
			vy=-vy;
			brickx[i]=1000;
			bricky[i]=1000;
			diem++;
		}
		if(x+10<=brickx[i]+5 && x+10>=brickx[i] && y+10>=bricky[i] && y-10<=bricky[i]+30)
		{
			vx=-vx;
			brickx[i]=1000;
			bricky[i]=1000;
			diem++;
		}
		if(x-10 >=brickx[i]+100-5 && x-10<=brickx[i]+100 && y+10>=bricky[i] && y-10<=bricky[i]+30)
		{
			vx=-vx;
			brickx[i]=1000;
			bricky[i]=1000;
			diem++;
		}
		
		setcolor(YELLOW);
        circle(1050,100,10);
        setfillstyle(SOLID_FILL,YELLOW);
		floodfill(1050,100,YELLOW);
		circle(1100,100,10);
        setfillstyle(SOLID_FILL,YELLOW);
		floodfill(1100,100,YELLOW);
		circle(1150,100,10);
        setfillstyle(SOLID_FILL,YELLOW);
		floodfill(1150,100,YELLOW);
		 
		}
		
		int mang =3;
		
		if(y>=800)
		{
			mang--;
			
			
		}
		if(d>=800)
		{
			mang--;
		}
		
		if(f>=800)
		{
			cleardevice();
			setbkcolor(BLACK);
			outtextxy(550,400,"Ban da thua");
		}
		
		if(mang==2)
		{
			setfillstyle(SOLID_FILL,BLACK);
			floodfill(1150,100,BLACK);
			
			setcolor(YELLOW);
        	circle(c,d,10);
        	setfillstyle(SOLID_FILL,YELLOW);
			floodfill(c,d,YELLOW);
			delay(10);
		
			c=c+vc;
			d=d+vd;
		
			if(c+10>=a && c-10<=a+80 && d+10==b)
			{
				vd=-vd;
			}
			if(c+10==985)
			{
				vc=-vc;
			}
			if(d-10==15)
			{
				vd=-vd;
			}
			if(c-10==15)
			{
				vc=-vc;
			}
			
			for(int i=0;i<=24;i++)
			{ 	
				if(c>=brickx[i] && c<=brickx[i]+100 && d+10<=bricky[i]+5 && d+10>=bricky[i])
				{
					vd=-vd;
					brickx[i]=1000;
					bricky[i]=1000;
					diem++;
				}
				if(c>=brickx[i] && c<=brickx[i]+100 && d-10>=bricky[i]+30-5 && d-10<=bricky[i]+30)
				{
					vd=-vd;
					brickx[i]=1000;
					bricky[i]=1000;
					diem++;
				}
				if(c+10<=brickx[i]+5 && c+10>=brickx[i] && d+10>=bricky[i] && d-10<=bricky[i]+30)
				{
					vc=-vc;
					brickx[i]=1000;
					bricky[i]=1000;
					diem++;
				}
				if(c-10 >=brickx[i]+100-5 && c-10<=brickx[i]+100 && d+10>=bricky[i] && d-10<=bricky[i]+30)
				{
					vc=-vc;
					brickx[i]=1000;
					bricky[i]=1000;
					diem++;
				}
			}
		}
		
		if(mang==1)
		{
			setfillstyle(SOLID_FILL,BLACK);
			floodfill(1150,100,BLACK);
			setfillstyle(SOLID_FILL,BLACK);
			floodfill(1100,100,BLACK);
			
			setcolor(YELLOW);
        	circle(e,f,10);
        	setfillstyle(SOLID_FILL,YELLOW);
			floodfill(e,f,YELLOW);
			delay(10);
		
			e=e+ve;
			f=f+vf;
		
			if(e+10>=a && e-10<=a+80 && f+10==b)
			{
				vf=-vf;
			}
			if(e+10==985)
			{
				ve=-ve;
			}
			if(f-10==15)
			{
				vf=-vf;
			}
			if(e-10==15)
			{
				ve=-ve;
			}
			
			for(int i=0;i<=24;i++)
			{ 	
				if(e>=brickx[i] && e<=brickx[i]+100 && f+10<=bricky[i]+5 && f+10>=bricky[i])
				{
					vf=-vf;
					brickx[i]=1000;
					bricky[i]=1000;
					diem++;
				}
				if(e>=brickx[i] && e<=brickx[i]+100 && f-10>=bricky[i]+30-5 && f-10<=bricky[i]+30)
				{
					vf=-vf;
					brickx[i]=1000;
					bricky[i]=1000;
					diem++;
				}
				if(e+10<=brickx[i]+5 && e+10>=brickx[i] && f+10>=bricky[i] && f-10<=bricky[i]+30)
				{
					ve=-ve;
					brickx[i]=1000;
					bricky[i]=1000;
					diem++;
				}
				if(e-10 >=brickx[i]+100-5 && e-10<=brickx[i]+100 && f+10>=bricky[i] && f-10<=bricky[i]+30)
				{
					ve=-ve;
					brickx[i]=1000;
					bricky[i]=1000;
					diem++;
				}
			}
		}
		
		if(diem==25)
		{
		cleardevice();
    	setbkcolor(BLACK);
   		
   		outtextxy(550,400,"Ban da thang");
		}
		
		
		page=1-page;
		
	}
   	
}
int main()
{
	initwindow(1200,800);
    game();
   	getch();	
   	closegraph();
   	return 0;
}
