# Lab-08-teamwork-dev-for-esp32
1. แบ่งกลุ่ม กลุ่มละ 3 คน
2. แต่ละคนสร้าง 2 folder
   - Folder ที่ 1 เป็น folder ของ project ชื่อ Lab08-6703xxxx <-- (รหัสนักศึกษา) เป็น repo ที่ 1
   - Folder ที่ 2 เป็น folder ของ component คนละ 1 component  (คนที่ 1 สร้าง sensor, คนที่ 2 สร้าง display, คนที่ 3 สร้าง LED) เป็น repo ที่ 2  (สามารถใช้ code จากใบงานที่ 6 และ 7 ได้เลย)
   - Sync repo กับ github แล้วแจ้งทีมให้ทราบถึง url ของ components  
3. ใน folder main ของ project ให้สร้างไฟล์ idf-component.yml เพื่อดึง component ทั้ง 3 มาร่วม build
4. Build และทดสอบให้ทำงานได้
5. ส่งงาน

## ระบบสมบูรณ์ที่คาดหวัง
 
<img width="1588" height="964" alt="image" src="https://github.com/user-attachments/assets/b9c9e187-c856-4488-9dd5-0e3073ac7f61" />


**สิ่งสำคัญ** อย่าลืมระบุที่อยู่ของ component ในไฟล์ idf_component.yml ไว้ในโฟลเดอร์ main ของโปรเจค (ดูจากใบงานที่ 7)[https://github.com/APPLICATIONS-OF-MICROCONTROLLERS/Lab-07-ESP32-Components/blob/25bdbdd99a552249e83ae37346502de23b81b2bf/Labsheet%2007-1.md?plain=1#L345]
<img width="1579" height="964" alt="image" src="https://github.com/user-attachments/assets/aaa3e21b-b6a6-47d1-b2d8-25af96c07920" />
