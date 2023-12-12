# Unix_Glykos

This repository contains C programs related to the MSc: "Applied Bioinformatics and Data Analysis"

## Directories:

- **Cprogs_1_2** , **Cprogs_3** , **Cprogs_4** : Programs related to lectures.

- **final_proj:** The `final_proj` directory contains a program that reads DNA sequences and identifies (if there are) coding sequences.

## final_proj :
  Specifically:
    
  i. **Input DNA Sequence:**
- The program starts by prompting the user to input a valid DNA sequence.

  2. **Validation:**
- The program checks if the DNA sequence is valid, ensuring that it contains only the           characters A, T, G, and C (case-insensitive). If invalid bases are found, an error              message is displayed: "Invalid DNA sequence".

  3. **Coding Sequence Identification:**
- If the sequence is valid, the program searches for coding sequences that start with "ATG"     (or "atg"). It then examines subsequent triplets, looking for stop codons ("TAA," "TAG,"        "TGA," "taa," "tag," "tga"). If a coding sequence is found, the program prints the position of the start codon and the position of the stop codon.

  4. **Summary:**
- If coding sequences are found, the program provides a summary of the identified coding sequences. If no coding sequences are found, it displays a message indicating that it "Couldn't find a coding sequence".

  5. **Loop or Exit:**
- After processing one DNA sequence, the program prompts the user to input another valid DNA sequence or exit by pressing Ctrl+C.
  
  ## How to Use:

    1. **Compile the Code:**
     - Compile the program using a C compiler (e.g., `gcc`).

    2. **Run the Executable:**
     - Run the compiled executable.
