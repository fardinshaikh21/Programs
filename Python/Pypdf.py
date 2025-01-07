import PyPDF2 

a = PyPDF2.PdfFileReader("core-java.pdf")

print(a.documentInfo)