#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    for(int i=0;i<10;i++)
        s.push(i); // 0 1 2 3 4 5 6 7 8 9 
    stack<int> a;
    a = s;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.top()<<endl; //9 Last in First out
    s.pop(); // Last in First out
    cout<<s.top()<<endl;
    a.swap(s);
    cout<<s.top()<<endl; //9
    cout<<a.top()<<endl; //8
    /*การตรวจสอบการใช้วงเล็บ
    ถูก : (  {  (  )  [  {  }  ]  }  )
    ผิด : เปิดปิดไม่ตรงกัน  ( { ] )
    ผิด : มีปิดมากไป ( { ( ) } ) ) }
    ผิด : มีเปิดมากไป  ( { ( ) }
    วิธีทำ
    อ่านมาทีละตัว
    ถ้าเป็นวงเล็บเปิด ให้ push ลง stack
    ถ้าเป็นวงเล็บปิด ให้ pop จาก stack มาตรวจสอบว่าเป็นวงเล็บเปิดที่ตรงกันวงเล็บปิดที่พบหรือไม่
    เมื่อใดอยาก pop ถ้า isEmpty แสดงว่า ปิดมีมากไป
    เมื่ออ่านเสร็จหมด stack ยังมีข้อมูล แสดงว่า เปิดมีมากไป
    */
    /*นิพจน์เติมหลัง
    2 3 + 4 5 – 6 * +  มีค่าเท่าไร ?
    สามารถใช้ stack ช่วยหาค่าของนิพจน์ postfix
    วิธีทำ
    ดูทีละตัวใน postfix จากซ้ายไปขวา
    ถ้าเป็น operand ให้ push ของ stack
    ถ้าเป็น operator ให้ pop operands จาก stack ตามที่ operator ต้องการมาประมวลผล แล้ว push ผลลัพธ์
    ทำเสร็จ คำตอบจะอยู่ที่ top of stack
    */
    /*เปลี่ยนนิพจน์เติมกลางเป็นเติมหลัง
    input : infix expression
    output : postfix expression
    ขั้นตอนการทำงาน
    ดูแต่ละตัวใน infix
    ถ้าเป็น operand  นำไปต่อท้าย output
    ถ้าเป็น operator
    อาจ pop operator ออกไปต่อท้าย output
    push operator ลงกองซ้อน
    เมื่อดู infix ครบตัวแล้ว
    ให้ pop operators ทุกตัวออกไปต่อท้าย output
    */
   //เพิ่มเติมใน slide
}