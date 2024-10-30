## Bố trí thí nghiệm 
- sử dụng mosquito tạo 1 broker trên máy cá nhân (PC)

![Hình 5](./images/6.png "Hình 5")

- Sử dung MQTT client tạo 1 client kết nối đến broker mosquito đã tạo ở cổng 1883

![Hình 0](./images/4.png "Hình 0")

- tạo chứng chỉ và khóa cho bảo mật TLS bằng openssl

- Sử dụng MQTT client tạo 1 client kết nối đến broker mosquito đã tạo ở cổng 8883 với các chứng chỉ đã tạo

![Hình 1](./images/3.png "Hình 1")

![Hình 2](./images/2.png "Hình 2")


## Kịch bản thí nghiệm

-Sau khi kết nối gửi 1 vài tin nhắn đến các topic trên các cổng bảo mật kiểm tra xem có nhận được không


## Kết quả

![Hình 3](./images/1.png "Hình 3")
**Hình 3**

- **Hình 3** cho thấy: các tin nhắn được gửi và nhận ở cổng 1883 bình thường


![Hình 4](./images/5.png "Hình 4")
**Hình 4**

- **Hình 4** cho thấy: các tin nhắn được gửi và nhận ở cổng 8883 bình thường




