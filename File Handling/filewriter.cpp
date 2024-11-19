#include <iostream>
#include <cstdio> // for FILE, fopen, fclose, etc.
using namespace std;

class FileWriter {
private:
    FILE *file;
    bool LastOperationFailed;

public:
    static const char NEW;
    static const char APPEND;

    FileWriter();
    ~FileWriter();
    void open(const char *name, const char mode);
    bool failed();
    void close();
    FileWriter &operator<<(const char *str);
    FileWriter &operator<<(int value);
    FileWriter &operator<<(char value);
};

// Static constant initialization
const char FileWriter::NEW = 'w';
const char FileWriter::APPEND = 'a';

// Constructor
FileWriter::FileWriter() {
    this->file = NULL;
    this->LastOperationFailed = false;
}

// Destructor
FileWriter::~FileWriter() {
    if (this->file != NULL) fclose(this->file);
}

// Open file
void FileWriter::open(const char *name, const char mode) {
    this->LastOperationFailed = false;
    if (name == NULL) {
        this->LastOperationFailed = true;
        return;
    }
    if (mode == FileWriter::NEW) {
        this->file = fopen(name, "w");
    } else if (mode == FileWriter::APPEND) {
        this->file = fopen(name, "a");
    } else {
        this->LastOperationFailed = true;
        return;
    }
    if (this->file == NULL) {
        this->LastOperationFailed = true;
    }
}

// Check if the last operation failed
bool FileWriter::failed() {
    return this->LastOperationFailed;
}

// Close the file
void FileWriter::close() {
    this->LastOperationFailed = false;
    if (this->file == NULL) {
        this->LastOperationFailed = true;
        return;
    }
    fclose(this->file);
    this->file = NULL;
}

// Write string to file
FileWriter &FileWriter::operator<<(const char *str) {
    this->LastOperationFailed = false;
    if (str == NULL || this->file == NULL) {
        this->LastOperationFailed = true;
        return *this;
    }
    fputs(str, this->file);
    return *this;
}

// Write integer to file
FileWriter &FileWriter::operator<<(int value) {
    this->LastOperationFailed = false;
    if (this->file == NULL) {
        this->LastOperationFailed = true;
        return *this;
    }
    fprintf(this->file, "%d", value);
    return *this;
}

// Write character to file
FileWriter &FileWriter::operator<<(char value) {
    this->LastOperationFailed = false;
    if (this->file == NULL) {
        this->LastOperationFailed = true;
        return *this;
    }
    fputc(value, this->file);
    return *this;
}

int main() {
    FileWriter fw;
    fw.open("something.txt", FileWriter::NEW);
    if (fw.failed()) {
        cout << "Unable to create a file" << endl;
        return 1;
    }
    fw << "God is great\n";
    if (fw.failed()) {
        cout << "Unable to write to the file" << endl;
    }
    fw << "Ujjain is the city of god\n";
    if (fw.failed()) {
        cout << "Unable to write to the file" << endl;
    }
    fw << "I live in Ujjain\n";
    if (fw.failed()) {
        cout << "Unable to write to the file" << endl;
    }
    fw << 123;
    fw << "\n";
    fw << 'A';
    fw << " cool\n";
    fw.close();
    if (fw.failed()) {
        cout << "Unable to close the file" << endl;
    }
    return 0;
}
