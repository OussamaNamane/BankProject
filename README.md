# 🏦 Bank Management System (C++ & Object-Oriented Programming)

A comprehensive, console-based Bank Management System built using C++ and Object-Oriented Programming (OOP) principles.

---

## 🚀 What the System Does & Core Features

This system simulates a fully functional bank management environment, handling multi-user permissions, client databases, financial transactions, and currency conversions entirely through text file persistence and structured OOP design.

### 1. 👥 Client Management (CRUD System)
- Add New Clients: Register new bank clients with validation checks.
- Client List: Display a neatly formatted table of all active clients.
- Update / Delete Clients: Modify client data or remove records seamlessly.
- Find Client: Quick search functionality to locate clients by account number.

### 2. 💳 Transactions & Financial Operations
- Deposit & Withdraw: Process cash deposits and withdrawals with real-time balance validation.
- Total Balances: View individual balances alongside the total aggregate balance of all bank accounts.
- Secure Transfers: Transfer funds between client accounts with transaction logs automatically recorded in TransferLog.txt.

### 3. 💱 Currency Exchange & Calculator
- Currency List: View available world currencies, codes, and exchange rates.
- Update Rate: Modify exchange rates dynamically.
- Currency Calculator: Convert amounts instantly from one currency to another (including cross-currency calculations through USD).

### 4. 🔑 User & Access Control
- User Management: Admin capability to add, delete, update, and list system operators.
- Permission System: Granular access control restricting users from specific screens based on assigned privileges.
- Login Register: Tracks login history, timestamps, and usernames in LoginRegister.txt.

---

## 🔐 Default Login Credentials

> Note: Passwords in Users.txt are encrypted for security. 

- Username: User1
- Password: 1234 *(The system automatically validates your plain-text entry against the encrypted record)*

---

## 🛠️ Tech Stack & Architecture
- Language: C++ (OOP, Inheritance, Encapsulation)
- IDE: Microsoft Visual Studio
- Storage: Flat-file databases (Clients.txt, Users.txt, Currencies.txt, TransferLog.txt, LoginRegister.txt)

---

## 🚀 How to Run
1. Clone the repository:
   `bash
   git clone [https://github.com/OussamaNamane/BankProject.git](https://github.com/OussamaNamane/BankProject.git)
