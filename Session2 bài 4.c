#include <stdio.h>
 
/*Tao h�m t�nh chu vi hinh chu nhat*/
void ChuViVuong(int a){
  //khai b�o bien P l� chu vi hinh vu�ng
  int P;
  //t�nh chu vi su dung c�ng thuc d�i nh�n 4
  P = 4 * a;
  //hien thi chu vi ra m�n hinh
  printf("\nChu vi hinh vuong la: %d",P);
}
/*Tao h�m t�nh dien t�ch h?nh vu�ng*/
void DienTichVuong(int a){
  //khai b�o bien S l� dien t�ch hinh vu�ng
  int S;
  //t�nh dien t�ch bang c�ng thuc binh phuong canh a
  S = a * a;
  //hien thi ket qua ra m�n hinh
  printf("\nDien tich hinh vuong la: %d",S);
}
 
int main(){
  //khai b�o hai bien a v� b l� chieu d�i canh vu�ng
  int a;
  //y�u cau nguoi d�ng nhap v�o chieu d�i canh vu�ng
  printf("Nhap chieu d�i a: ");
  scanf("%d", &a);
  //goi h�m t�nh chu vi v� dien tich da viet
  ChuViVuong(a);
  DienTichVuong(a);
  return 0;
}
