#include<stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main()
{

	double max,mid,min;

	printf("실수값 세 개 입력 : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);	
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf \n",max,mid,min);

	return 0;
}

void swap(double *pa, double *pb)
{

	double temp;
	
	temp = *pa;
	*pa = *pb;
	*pb  = temp;

	
}

void line_up(double *maxp, double *midp, double *minp)
{
	int i,j;

	int sort[3] = {*maxp,*midp,*minp};

	for(i = 0; i<3 ; i++) {
		for(j = i+1 ; j < 3; j++) {
			if(sort[i] < sort[j])
				swap(&sort[i],&sort[j]);
		}
	}

}
