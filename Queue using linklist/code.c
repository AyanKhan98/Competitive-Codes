#include<stdio.h>
struct node{
	int d;
	struct node *l;
};
struct node *create (struct node *p, int num)
{
	struct node *n,*pt;
	n=(struct node*) malloc (sizeof(struct node));
	n->d=num;
	n->l=p;
		p=n;
	printf("created");
	return (p);}
	struct node *display(struct node *p)
	{printf ("\n display\n");
		while(p!=NULL)
		{	printf("\n%d\n",p->d);
			p=p->l;		
		}
	}
	struct node *pop(struct node *p)
	{
		struct node *n,*c;
		n=p;
		if(n==NULL)
			printf("\npagla bari jaa delete korar kichu nei\n");
		else {
			printf("\ndel=%d\n", n->d);
			p=n-> l;}
		return p;
			
		}
	main ()
	{ int num,a;
		struct node *n;
		n=NULL;
		do {
			printf("\n1 insert\n2 display\n3 pop\n7 exit\n");
			scanf("%d",&a);
			switch(a){
				case 1:
					printf("\enter num\n");
					scanf("%d",&num);
					n=create(n, num);
					break;
				case 2:
					display(n);
					break;
				case 3:
					n=pop(n);
					break; 
				case 7:
					break;
				default:
					printf("\nwrong choice\n");
				break;
			}
		}while(a!=7);
	}