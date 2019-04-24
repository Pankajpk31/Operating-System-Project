 int main()
 {

int i,t=0,b_t=0,peak;

int a[10];

float wait_time = 0, taround_time = 0, avg_w_t=0, avg_taround_time=0;

printf("enter the no. of processes: ");

scanf("%d",&n);

for(i = 0; i < n; i++)

{

p_list[i].p_no = i+1;

printf("\nEnter Details For P%d process:-\n", p_list[i].p_no);
printf("Enter Arrival Time: ");
scanf("%d", &p_list[i].arrival_t );
printf("Enter Burst Time: ");
scanf("%d", &p_list[i].burst_t);
p_list[i].flag = 0;
b_t = b_t + p_list[i].burst_t;
}
