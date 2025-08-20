# การใช้งาน idf_component
1. เพิ่มไฟล์ idf_component.yml ใน main
```yml
dependencies:  <--- keyword 
  lab7_components:  <---- ชื่อ component
    git: https://github.com/APPLICATIONS-OF-MICROCONTROLLERS/Lab7_Components.git  <-- url ของ component
```
2. idf.py build

3. ถ้า build สำเร็จ ตรวจสอบว่ามีการใช้ component หรือไม่โดยใช้คำสั่ง idf.py size-files | grep <ชื่อไฟล์>
