# API

```go
// start the service
// @argsStr all arguments as a string
// @return id
func runDtlspipe(argsStr string) int

// stop the service
// @cancelID the id has returned from runDtlspipe
func stopDtlspipe(cancelID int)
```

# Building Dynamic library

In the root project directory run:

```bash
go build -o dtlspipe.so -buildmode=c-shared dtlspipe.go
```

# Example

To see and test example come to dynamic-lib-example library:

```bash
cd dynamic-lib-example
```

Generate your psk according to the documentation and put it in to the example.c instead mine.

Compile the example.c

```bash
gcc -o example example.c ../dtlspipe.so
```

Run the example

```bash
./example
```
