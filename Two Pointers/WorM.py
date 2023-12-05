# Lista de nombres
nombres = [
    "Mirna Ariadna Muñoz Mata",
    "Luis Armando Valtierra Gonzalez Madrid",
    "Julieta Domínguez Soberanes",
    "Hector Manuel Aceves Ortega",
    "Marcos Reyes Vargas",
    "Berta Alicia Valdez Aldrete",
    "Salma Leticia Jalife Villalón",
    "Miguel Armando Ramírez Morales",
    "Jorge Buitron Arriola",
    "Benjamin Bernardo Cervantes Vega",
    "JUAN CARLOS FEREGRINO QUEZADA",
    "CUAUHTEMOC TORRES CRUZ",
    "Anibal Bustillo Leal",
    "Ricardo Navarro",
    "Ronal Arnaldo Delgado Diaz",
    "Guillermo Medina",
    "MAGDA PAOLA VIDAL GÓMEZ",
    "Roberto Gruest",
    "Miguel Angel Sanabria Plascencia",
    "Arturo Ramos Hernández",
    "Gustavo Garcia Gonzalez",
    "Christopher Klasu Jareño Henríquez",
    "Marcelo Hinojosa",
    "Eric Servín de la Mora Salceda",
    "GERARDO LÓPEZ DÍAZ",
    "Roberto Rangel",
    "Me a Antonieta Zuloaga",
]

# Diccionarios para hombres y mujeres
hombres = {}
mujeres = {}

# Separar nombres por género
for nombre in nombres:
    # Normalizar el nombre a minúsculas para hacer la comparación
    nombre_lower = nombre.lower()

    # Identificar género basado en ciertos nombres
    if any(key in nombre_lower for key in ["luis", "hector", "marcos", "miguel", "jorge", "benjamin", "juan carlos", "cuauhtemoc", "anibal", "ricardo", "ronal", "guillermo", "roberto", "christopher", "eric", "gerardo"]):
        # Agregar al diccionario de hombres
        hombres[nombre] = True
    else:
        # Agregar al diccionario de mujeres
        mujeres[nombre] = True

# Mostrar los diccionarios resultantes
print("Hombres:", hombres)
print("Mujeres:", mujeres)
