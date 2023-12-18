/* Chapter : 2 - item : 4 - การแสดงผลทศนิยม

เติมส่วนของ format string ในคำสั่ง printf ให้เหมาะสม เพื่อให้ผลลัพธ์ ตามตัวอย่าง 

int main()
{
  printf("123456789012345678901234567890\n");
  printf("%  f\n",3.1415926535897932); //จอง 25 ช่องชิดขวา
  printf("%   f\n",3.1415926535897932); //จอง 30 ช่อง ทศนิยม 16 ตำแหน่ง ชิดซ้าย
  printf("%  f\n",3.1415926535897932); //จอง 20 ช่องชิดขวา
  printf("%   f\n",3.1415926535897932); //ทศนิยม 6 ตำแหน่ง ชิดซ้าย
  printf("%     f\n",3.1415926535897932); //จอง 30 ช่อง ทศนิยม 20 ตำแหน่ง ชิดขวา

  return 0;
}

หมายเหตุ

เลขทศนิยมในหลักขวามืออาจไม่เหมือนกับตัวอย่าง
ซึ่งความละเอียดของทศนิยมขึ้นกับ compiler
*/

int main()
{
  printf("123456789012345678901234567890\n");
  printf("%25f\n",3.1415926535897932);
  printf("%-30.16f\n",3.1415926535897932); 
  printf("%20f\n",3.1415926535897932); 
  printf("%-f\n",3.1415926535897932); 
  printf("%30.20f\n",3.1415926535897932);
  
  return 0;
}