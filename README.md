This repository contains an implementation of GDS (Global Discovery Server) using Open62541!

### Clone the Repository

```bash
git clone https://github.com/Caduardoo/opcua_gds_server

cd opcua_gds_server

```

### Compiling and Execution

```bash
cmake -B build

cmake --build build

```

1. **Terminal 1:** Start GDS:
```bash
./build/gds_server

```

2. **Terminal 2:** Start O-PAS Node B:
```bash
./build/node_b_server

```

3. **Terminal 3:** Start O-PAS Node A:
```bash
./build/node_a_client

```