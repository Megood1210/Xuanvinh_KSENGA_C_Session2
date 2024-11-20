#include <stdio.h>
 
/*Tao hàm tính chu vi hinh chu nhat*/
void ChuViVuong(int a){
  //khai báo bien P là chu vi hinh vuông
  int P;
  //tính chu vi su dung công thuc dài nhân 4
  P = 4 * a;
  //hien thi chu vi ra màn hinh
  printf("\nChu vi hinh vuong la: %d",P);
}
/*Tao hàm tính dien tích h?nh vuông*/
void DienTichVuong(int a){
  //khai báo bien S là dien tích hinh vuông
  int S;
  //tính dien tích bang công thuc binh phuong canh a
  S = a * a;
  //hien thi ket qua ra màn hinh
  printf("\nDien tich hinh vuong la: %d",S);
}
 
int main(){
  //khai báo hai bien a và b là chieu dài canh vuông
  int a;
  //yêu cau nguoi dùng nhap vào chieu dài canh vuông
  printf("Nhap chieu dài a: ");
  scanf("%d", &a);
  //goi hàm tính chu vi và dien tich da viet
  ChuViVuong(a);
  DienTichVuong(a);
  return 0;
}
