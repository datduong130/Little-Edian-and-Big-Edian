#include <stdio.h>
// LITTLE ENDIAN VÀ BIG ENDIAN 
// Little-endian: Bit có trọng số cao sẽ ở địa chỉ cao, bit có trọng số thấp sẽ ở địa chỉ thấp
// Big-endian: Ngược lại

int main()
{
    unsigned short int x = 0x4229; 
    // Biểu diễn nhị phân của x: 0100 0010 0010 1001 
    // Trong hệ hexa: 4    2    2    9 
    // Ở đây mình đang sử dụng x: 2 byte -> 16 bit 

    unsigned short int lsb = x & 0xff; 
    // Lấy x & 0xff, tương đương với 1111 1111 trong hệ nhị phân
    // Kết quả: lsb = 0000 0000 0010 1001 => hex: 29

    unsigned short int msb = (x >> 8) & 0xff;
    // Lấy x dịch phải 8 bit, kết quả là msb: 0000 0000 0100 0010 
    // Sau đó, thực hiện AND với 0xff, giữ lại 8 bit cuối cùng
    // Kết quả: msb = 0000 0000 0100 0010 => hex: 42

    printf("msb:%x lsb:%x", msb, lsb);
    // msb = 42, lsb = 29 => Máy tính của mình là little endian 

    return 0;
}
