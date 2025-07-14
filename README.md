# SeatBelt_AUTOSAR
# Seatbelt AUTOSAR System

## Tổng quan
Dự án này sử dụng MATLAB Simulink để thiết kế và triển khai hệ thống seatbelt (dây an toàn) theo tiêu chuẩn AUTOSAR. Hệ thống được phát triển với kiến trúc component-based, sử dụng các service tiêu chuẩn AUTOSAR.

## Kiến trúc hệ thống

### AUTOSAR Software Components (SWC)
- **SeatBelt SWC**: Component chính xử lý logic dây an toàn, bao gồm:
  - Giám sát trạng thái dây an toàn
  - Tính toán tốc độ trung bình
  - Đếm số lần chuyển trạng thái khóa điện
  - Xử lý cảnh báo và lỗi
- **GetStatus SWC**: Component lấy thông tin trạng thái chẩn đoán từ DEM service

### Composition
Cả hai SWC được bao bọc bởi một composition, tạo thành một unit hoàn chỉnh cho hệ thống seatbelt.

### AUTOSAR Services
- **NVM (Non-Volatile Memory)**: 
  - Lưu trữ số lần chuyển trạng thái khóa điện (`IgnitionKeySwitchCount`)
  - Service calls: `ReadBlock`, `WriteBlock`
- **DEM (Diagnostic Event Manager)**: 
  - Quản lý các sự kiện chẩn đoán lỗi tốc độ
  - Events: `SpeedStuckHigh`, `SpeedStuckLow`
  - Service calls: `SetEventStatus`, `GetEventFailed`

## Giao diện (Ports)

### SeatBelt SWC

#### Input Ports (Inport)
- **SeatBeltFasten**: Trạng thái dây an toàn (boolean) - đã thắt hay chưa
- **Speed**: Tốc độ hiện tại của xe (uint16) - đơn vị km/h
- **Key**: Trạng thái khóa điện (enState_IgnitionKey) - OFF/ON/CRANK

#### Output Ports (Outport)
- **SeatbeltIcon**: Tín hiệu hiển thị biểu tượng dây an toàn (boolean)
- **SeatbeltFastenError**: Tín hiệu lỗi dây an toàn (boolean)

### GetStatus SWC

#### Input Ports (Inport)
- Không có input ports trực tiếp (sử dụng service calls)

#### Output Ports (Outport)
- **SpeedStuckHigh_GetFailedStatus**: Trạng thái lỗi tốc độ bị kẹt cao (boolean)
- **SpeedStuckLow_GetFailedStatus**: Trạng thái lỗi tốc độ bị kẹt thấp (boolean)

## Công nghệ sử dụng
- **MATLAB Simulink**: Môi trường phát triển chính
- **AUTOSAR Blockset**: Toolbox cho thiết kế AUTOSAR
- **Embedded Coder**: Để sinh code C/C++

## Yêu cầu hệ thống
- MATLAB R2024a
- Simulink
- AUTOSAR Blockset
- Embedded Coder
