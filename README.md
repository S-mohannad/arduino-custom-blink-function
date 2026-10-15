# 💡 Custom Blink Pattern with Function

> **Arduino Project #23** — أنماط وميض مخصصة باستخدام دالة Blink() قابلة للاستخدام مجدداً

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

مشروع يُشغّل LED بأنماط وميض مخصصة عبر دالة `Blink()` مُعرَّفة من قبل المستخدم:

- الدالة تقبل عدد الومضات والمدة الزمنية كمعاملات
- تُنفَّذ الأنماط مرة واحدة في `setup()` بالترتيب
- `loop()` فارغة لأن التسلسل يحتاج تشغيل مرة وحدة فقط

---

## 🔌 Circuit

```
Arduino UNO
┌─────────────────┐
│            13 ●─┼──[220Ω]──💡 LED ── GND
└─────────────────┘
```

- 💡 LED على Pin 13 مع مقاومة 220Ω

---

## 💡 Concepts Used

- **Custom Function** — تعريف دالة `Blink(int t, int D)` خارج `setup()` و `loop()`
- معاملات الدالة — `t` عدد الومضات، `D` مدة كل ومضة بالـ ms
- `for loop` بدون تهيئة — `for(; t > 0; t--)` يستخدم المعامل مباشرةً كعداد
- `delay()` — للتحكم بتوقيت التشغيل والإطفاء والتوقف بين الأنماط

---

## 📊 Behavior

| الخطوة | الدالة | النتيجة |
|--------|--------|---------|
| 1 | `Blink(2, 300)` | ومضتان كل منها 300ms |
| 2 | `delay(2000)` | توقف 2 ثانية |
| 3 | `Blink(5, 300)` | 5 ومضات كل منها 300ms |
| 4 | `delay(1500)` | توقف 1.5 ثانية |
| 5 | `Blink(7, 190)` | 7 ومضات كل منها 190ms |

---

## 🔗 Code

```cpp
void setup() {
  pinMode(13, OUTPUT);
  Blink(2, 300);
  delay(2000);
  Blink(5, 300);
  delay(1500);
  Blink(7, 190);
}

void loop() {
}

void Blink(int t, int D) {
  for (; t > 0; t--) {
    digitalWrite(13, HIGH);
    delay(D);
    digitalWrite(13, LOW);
    delay(D);
  }
}
```

---

## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل LED على pin 13 مع مقاومة 220Ω
3. انسخ الكود والصقه في المحرر
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. راقب LED يومض: 2 ومضات ← توقف ← 5 ومضات ← توقف ← 7 ومضات

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
