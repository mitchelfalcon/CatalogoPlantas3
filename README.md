# 🌿 Catálogo Botánico Inteligente - Reporte Académico Interactivo

[![React](https://img.shields.io/badge/React-18.0+-61DAFB?style=for-the-badge&logo=react&logoColor=black)](https://reactjs.org/)
[![TypeScript](https://img.shields.io/badge/TypeScript-5.0+-3178C6?style=for-the-badge&logo=typescript&logoColor=white)](https://www.typescriptlang.org/)
[![Tailwind CSS](https://img.shields.io/badge/Tailwind_CSS-4.0-38B2AC?style=for-the-badge&logo=tailwind-css&logoColor=white)](https://tailwindcss.com/)
[![Vite](https://img.shields.io/badge/Vite-5.0+-646CFF?style=for-the-badge&logo=vite&logoColor=white)](https://vitejs.dev/)

> Aplicación web interactiva que presenta el reporte académico completo del Proyecto Integrador Etapa 3 para el curso de **Lógica y Programación Estructurada** en UVM.

## 📋 Descripción del Proyecto

Esta aplicación web moderna presenta un análisis académico integral de un sistema de gestión botánica implementado en C++. El proyecto documenta la implementación de algoritmos de búsqueda, modificación y visualización en estructuras de datos anidadas (structs dentro de arreglos).

### 🎯 Objetivos Académicos

- **Documentar** la implementación de algoritmos de búsqueda lineal en arreglos
- **Analizar** el manejo de estructuras de datos anidadas (structs dentro de structs)
- **Demostrar** la gestión del búfer de entrada en C++ (cin/getline)
- **Explicar** los parámetros de aprendizaje del curso universitario
- **Presentar** diagramas de flujo, pseudocódigo y código fuente completo

## ✨ Características Principales

### 🎨 Diseño Neo-Futurista con Glassmorphism
- Interfaz moderna con efectos de vidrio esmerilado
- Gradientes dinámicos y animaciones fluidas
- **Máximo contraste**: fondo blanco con texto negro puro (#000000)
- Completamente responsive (móvil, tablet, desktop)

### 📚 Secciones Académicas Completas

1. **Hero Section** - Portada con título y navegación rápida
2. **Introducción Académica** - Contexto, objetivos y justificación
3. **Arquitectura Técnica** - Análisis de estructuras de datos
4. **Análisis de Parámetros** - Desempeños y competencias del curso
5. **Lógica de Programación** - Diagramas de flujo interactivos con pseudocódigo
6. **Código Fuente C++** - Implementación completa con resaltado de sintaxis
7. **Testing y Limitaciones** - Casos de prueba y análisis crítico
8. **Referencias APA 7** - Bibliografía académica formateada

### 🚀 Funcionalidades Interactivas

- ✅ **Progress Tracker** - Indicador visual del progreso de lectura
- ✅ **Navegación Rápida** - Menú flotante para saltar entre secciones
- ✅ **Scroll to Top** - Botón flotante para volver arriba
- ✅ **Tabs Interactivos** - Navegación por pestañas en módulos técnicos
- ✅ **Acordeones Expandibles** - Organización jerárquica de contenido
- ✅ **Resaltado de Código** - Syntax highlighting para C++
- ✅ **Mobile Menu** - Navegación optimizada para móviles

## 🛠️ Stack Tecnológico

### Frontend
- **React 18+** - Biblioteca de UI con hooks modernos
- **TypeScript** - Tipado estático para mayor robustez
- **Vite** - Build tool ultrarrápido
- **Tailwind CSS 4.0** - Framework CSS utility-first

### Librerías de UI
- **Lucide React** - Iconos modernos y ligeros
- **Radix UI** - Componentes accesibles y sin estilos predefinidos
- **React Syntax Highlighter** - Resaltado de código
- **Framer Motion / Motion** - Animaciones fluidas

### Componentes Personalizados
```
/components
├── IntroConclusion.tsx        # Introducción y conclusión académica
├── ParameterAnalysis.tsx      # Análisis de parámetros de aprendizaje
├── TechnicalArchitecture.tsx  # Arquitectura de datos (structs)
├── FlowDiagram.tsx            # Diagramas de flujo con pseudocódigo
├── TechnicalImplementation.tsx # Implementación detallada por módulos
├── SourceCode.tsx             # Código fuente C++ completo
├── TestingLimitations.tsx     # Casos de prueba y limitaciones
├── References.tsx             # Referencias bibliográficas APA 7
├── ProgressTracker.tsx        # Barra de progreso de lectura
├── QuickNavigation.tsx        # Menú de navegación rápida
└── ScrollToTop.tsx            # Botón scroll to top
```

## 📦 Instalación y Uso

### Requisitos Previos
- Node.js 18+ 
- npm o yarn

### Instalación

1. **Clonar el repositorio**
```bash
git clone https://github.com/tu-usuario/catalogo-botanico-inteligente.git
cd catalogo-botanico-inteligente
```

2. **Instalar dependencias**
```bash
npm install
```

3. **Ejecutar en modo desarrollo**
```bash
npm run dev
```

4. **Abrir en el navegador**
```
http://localhost:5173
```

### Build para Producción

```bash
npm run build
```

Los archivos optimizados se generarán en la carpeta `/dist`.

## 📱 Navegación de la Aplicación

### Hero Section
- Título principal del proyecto
- Subtítulo con institución (UVM)
- Botones de navegación rápida

### Secciones Principales

| Sección | ID | Descripción |
|---------|-----|-------------|
| Hero | `#hero` | Portada principal |
| Introducción | `#intro` | Contexto académico |
| Arquitectura | `#architecture` | Diseño de estructuras |
| Análisis | `#analysis` | Parámetros de aprendizaje |
| Lógica | `#logic` | Diagramas de flujo |
| Código | `#code` | Código fuente C++ |
| Testing | `#testing` | Casos de prueba |
| Referencias | `#refs` | Bibliografía APA 7 |

## 🎓 Contenido Académico

### Parámetros de Aprendizaje Documentados

#### 📊 Desempeños
- Implementación de algoritmos de búsqueda
- Gestión de estructuras de datos complejas
- Manejo de entrada/salida en C++

#### 🎯 Competencias Profesionales
- Análisis y diseño de algoritmos
- Programación estructurada
- Documentación técnica

#### 💡 Conceptos Clave
- Arreglos estáticos vs dinámicos
- Structs anidados
- Búsqueda lineal vs binaria
- Complejidad algorítmica O(N)

### Código C++ Implementado

```cpp
// Estructura principal
struct Planta {
    int id;
    string nombre_comun;
    Cuidados cuidados; // Struct anidado
};

// Funciones principales
void altaPlanta();      // Registrar nueva planta
void modificarPlanta(); // Actualizar datos existentes
void buscarPlanta();    // Búsqueda por ID
void mostrarCatalogo(); // Listar todas las plantas
```

## 🎨 Guía de Estilos

### Paleta de Colores

```css
/* Primarios */
--emerald-500: #10b981  /* Accent principal */
--teal-500: #14b8a6     /* Accent secundario */

/* Textos */
--black: #000000        /* Texto principal (máximo contraste) */
--gray-600: #4b5563     /* Texto secundario */
--gray-700: #374151     /* Texto terciario */

/* Fondos */
--white: #ffffff        /* Fondo principal */
--gray-50: #f9fafb      /* Fondos sutiles */
```

### Efectos Glassmorphism

```css
.glass-card {
  background: rgba(255, 255, 255, 0.7);
  backdrop-filter: blur(10px);
  border: 1px solid rgba(255, 255, 255, 0.3);
}
```

## 📂 Estructura del Proyecto

```
catalogo-botanico-inteligente/
├── public/              # Archivos estáticos
├── src/
│   ├── components/      # Componentes React
│   │   ├── ui/         # Componentes base (shadcn/ui)
│   │   └── *.tsx       # Componentes de secciones
│   ├── styles/         # Estilos globales
│   │   └── globals.css # Tailwind + custom styles
│   ├── App.tsx         # Componente principal
│   └── main.tsx        # Punto de entrada
├── package.json        # Dependencias
├── tsconfig.json       # Configuración TypeScript
├── tailwind.config.js  # Configuración Tailwind
├── vite.config.ts      # Configuración Vite
└── README.md          # Este archivo
```

## 🧪 Testing

### Casos de Prueba Documentados

1. **Búsqueda Exitosa** - ID existente en el catálogo
2. **Búsqueda Fallida** - ID no encontrado
3. **Modificación con Confirmación** - Actualización exitosa
4. **Modificación Cancelada** - Usuario aborta operación
5. **Catálogo Vacío** - Sin registros previos
6. **Catálogo Lleno** - Límite de 100 plantas alcanzado

## 🚀 Deploy

### Opciones de Despliegue

- **Vercel** (Recomendado)
  ```bash
  npm install -g vercel
  vercel
  ```

- **Netlify**
  ```bash
  npm run build
  # Subir carpeta dist/
  ```

- **GitHub Pages**
  ```bash
  npm run build
  # Configurar gh-pages branch
  ```

## 📚 Referencias Académicas

El proyecto incluye referencias completas en formato APA 7:

- Deitel, P., & Deitel, H. (2016). *C++ How to Program* (10th ed.). Pearson.
- Cormen, T. H., et al. (2022). *Introduction to Algorithms* (4th ed.). MIT Press.
- Documentación oficial de C++ (cppreference.com)

## 👨‍💻 Autor

**Estudiante de Lógica y Programación Estructurada**  
Universidad del Valle de México (UVM)  
Proyecto Integrador - Etapa 3

## 📄 Licencia

Este proyecto es de uso académico. Desarrollado como parte del curso de Lógica y Programación Estructurada en UVM.

---

## 🔗 Links Útiles

- [📥 Descargar Proyecto Completo](#descargar)
- [📖 Documentación de React](https://react.dev/)
- [🎨 Documentación de Tailwind CSS](https://tailwindcss.com/docs)
- [📘 Referencia de C++](https://en.cppreference.com/)

---

## 💡 Notas de Implementación

### Decisiones de Diseño

1. **Búsqueda Lineal** - Elegida por simplicidad y tamaño de datos (N=100)
2. **Arreglos Estáticos** - Según restricciones del proyecto académico
3. **Validación de Búfer** - `cin.ignore()` para evitar errores comunes
4. **Formato Vertical** - Mejor legibilidad en consolas de 80 columnas
5. **Glassmorphism** - Diseño moderno y profesional

### Tecnologías Modernas Aplicadas

- ✅ React Hooks (useState, useEffect)
- ✅ TypeScript para type safety
- ✅ Componentes funcionales
- ✅ CSS-in-JS con Tailwind
- ✅ Responsive design mobile-first
- ✅ Accesibilidad (ARIA labels)

---

<div align="center">

**⭐ Si este proyecto te fue útil, considera darle una estrella ⭐**

Desarrollado con ❤️ para la comunidad académica de UVM

</div>
