import sqlite3

# Create a SQLite database and establish a connection
conn = sqlite3.connect("hospital.db")
cursor = conn.cursor()

# Create tables for patients, doctors, and medicines
cursor.execute('''
    CREATE TABLE IF NOT EXISTS patients (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT,
        age INTEGER,
        gender TEXT,
        address TEXT
    )
''')

cursor.execute('''
    CREATE TABLE IF NOT EXISTS doctors (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT,
        specialization TEXT
    )
''')

cursor.execute('''
    CREATE TABLE IF NOT EXISTS medicines (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT,
        price REAL,
        quantity INTEGER
    )
''')

conn.commit()

class Patient:
    def __init__(self, name, age, gender, address):
        self.name = name
        self.age = age
        self.gender = gender
        self.address = address

class Doctor:
    def __init__(self, name, specialization):
        self.name = name
        self.specialization = specialization

class Medicine:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

class Hospital:
    def add_patient(self, patient):
        cursor.execute("INSERT INTO patients (name, age, gender, address) VALUES (?, ?, ?, ?)",
                       (patient.name, patient.age, patient.gender, patient.address))
        conn.commit()

    def add_doctor(self, doctor):
        cursor.execute("INSERT INTO doctors (name, specialization) VALUES (?, ?)",
                       (doctor.name, doctor.specialization))
        conn.commit()

    def add_medicine(self, medicine):
        cursor.execute("INSERT INTO medicines (name, price, quantity) VALUES (?, ?, ?)",
                       (medicine.name, medicine.price, medicine.quantity))
        conn.commit()

    def view_patients(self):
        cursor.execute("SELECT * FROM patients")
        patients = cursor.fetchall()
        for patient in patients:
            print(f"ID: {patient[0]}, Name: {patient[1]}, Age: {patient[2]}, Gender: {patient[3]}, Address: {patient[4]}")

    def view_doctors(self):
        cursor.execute("SELECT * FROM doctors")
        doctors = cursor.fetchall()
        for doctor in doctors:
            print(f"ID: {doctor[0]}, Name: {doctor[1]}, Specialization: {doctor[2]}")

    def view_medicines(self):
        cursor.execute("SELECT * FROM medicines")
        medicines = cursor.fetchall()
        for medicine in medicines:
            print(f"ID: {medicine[0]}, Name: {medicine[1]}, Price: {medicine[2]}, Quantity: {medicine[3]}")

if __name__ == "__main__":
    hospital = Hospital()

    while True:
        print("\nHospital Management System")
        print("1. Add Patient")
        print("2. Add Doctor")
        print("3. Add Medicine")
        print("4. View Patients")
        print("5. View Doctors")
        print("6. View Medicines")
        print("7. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            name = input("Enter patient name: ")
            age = int(input("Enter patient age: "))
            gender = input("Enter patient gender: ")
            address = input("Enter patient address: ")
            patient = Patient(name, age, gender, address)
            hospital.add_patient(patient)

        elif choice == "2":
            name = input("Enter doctor name: ")
            specialization = input("Enter doctor specialization: ")
            doctor = Doctor(name, specialization)
            hospital.add_doctor(doctor)

        elif choice == "3":
            name = input("Enter medicine name: ")
            price = float(input("Enter medicine price: "))
            quantity = int(input("Enter medicine quantity: "))
            medicine = Medicine(name, price, quantity)
            hospital.add_medicine(medicine)

        elif choice == "4":
            hospital.view_patients()

        elif choice == "5":
            hospital.view_doctors()

        elif choice == "6":
            hospital.view_medicines()

        elif choice == "7":
            print("Exiting Hospital Management System. Goodbye!")
            conn.close()
            break

        else:
            print("Invalid choice. Please select a valid option.")
