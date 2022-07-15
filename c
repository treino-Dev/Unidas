[1mdiff --git a/.vs/Unidas.Treino/v17/.suo b/.vs/Unidas.Treino/v17/.suo[m
[1mindex ab2e91a..c2ce677 100644[m
Binary files a/.vs/Unidas.Treino/v17/.suo and b/.vs/Unidas.Treino/v17/.suo differ
[1mdiff --git a/Treino.Deploy/Startup.cs b/Treino.Deploy/Startup.cs[m
[1mindex 2330690..cb8d816 100644[m
[1m--- a/Treino.Deploy/Startup.cs[m
[1m+++ b/Treino.Deploy/Startup.cs[m
[36m@@ -31,6 +31,9 @@[m [mnamespace Unidas.Deploy.Api[m
             services.AddEndpointsApiExplorer();[m
             services.AddSwaggerGen();[m
 [m
[32m+[m[32m            services.AddHealthChecks()[m
[32m+[m[32m                       .AddMongoDb(Configuration["MongoDBSettings:ConnectionString"]);[m
[32m+[m
         }[m
 [m
         // This method gets called by the runtime. Use this method to configure the HTTP request pipeline.[m
[1mdiff --git a/Treino.Deploy/appsettings.Development.json b/Treino.Deploy/appsettings.Development.json[m
[1mindex 0c208ae..dd05d57 100644[m
[1m--- a/Treino.Deploy/appsettings.Development.json[m
[1m+++ b/Treino.Deploy/appsettings.Development.json[m
[36m@@ -4,5 +4,10 @@[m
       "Default": "Information",[m
       "Microsoft.AspNetCore": "Warning"[m
     }[m
[32m+[m[32m  },[m
[32m+[m[32m  "MongoDBSettings": {[m
[32m+[m[32m    "CollectionName": "cliente",[m
[32m+[m[32m    "ConnectionString": "mongodb://u2z9us4jnnyxrorwc7yi:cqq239trlpvvAmtF6nEO@n1-c2-mongodb-clevercloud-customers.services.clever-cloud.com:27017,n2-c2-mongodb-clevercloud-customers.services.clever-cloud.com:27017/bfst26zh2pkn7b2?replicaSet=rs0",[m
[32m+[m[32m    "DatabaseName": "bd0lpttjvds6tou"[m
   }[m
 }[m
[1mdiff --git a/Treino.Deploy/appsettings.json b/Treino.Deploy/appsettings.json[m
[1mindex 10f68b8..b85dd52 100644[m
[1m--- a/Treino.Deploy/appsettings.json[m
[1m+++ b/Treino.Deploy/appsettings.json[m
[36m@@ -5,5 +5,10 @@[m
       "Microsoft.AspNetCore": "Warning"[m
     }[m
   },[m
[32m+[m[32m  "MongoDBSettings": {[m
[32m+[m[32m    "CollectionName": "cliente",[m
[32m+[m[32m    "ConnectionString": "mongodb://u2z9us4jnnyxrorwc7yi:cqq239trlpvvAmtF6nEO@n1-c2-mongodb-clevercloud-customers.services.clever-cloud.com:27017,n2-c2-mongodb-clevercloud-customers.services.clever-cloud.com:27017/bfst26zh2pkn7b2?replicaSet=rs0",[m
[32m+[m[32m    "DatabaseName": "bd0lpttjvds6tou"[m
[32m+[m[32m  },[m
   "AllowedHosts": "*"[m
 }[m
[1mdiff --git a/Treino.Deploy/obj/Debug/net6.0/Unidas.Deploy.Api.assets.cache b/Treino.Deploy/obj/Debug/net6.0/Unidas.Deploy.Api.assets.cache[m
[1mindex 269e41b..99333ab 100644[m
Binary files a/Treino.Deploy/obj/Debug/net6.0/Unidas.Deploy.Api.assets.cache and b/Treino.Deploy/obj/Debug/net6.0/Unidas.Deploy.Api.assets.cache differ
[1mdiff --git a/Treino.Deploy/obj/Debug/net6.0/Unidas.Deploy.Api.csproj.FileListAbsolute.txt b/Treino.Deploy/obj/Debug/net6.0/Unidas.Deploy.Api.csproj.FileListAbsolute.txt[m
[1mindex de2b693..ccfe4e3 100644[m
[1m--- a/Treino.Deploy/obj/Debug/net6.0/Unidas.Deploy.Api.csproj.FileListAbsolute.txt[m
[1m+++ b/Treino.Deploy/obj/Debug/net6.0/Unidas.Deploy.Api.csproj.FileListAbsolute.txt[m
[36m@@ -92,3 +92,50 @@[m [mC:\Users\abdias.ferreira\OneDrive - Unidas\TreinoDeployVersao6\WebApplication1\W[m
 C:\Users\abdias.ferreira\OneDrive - Unidas\TreinoDeployVersao6\WebApplication1\WebApplication1\bin\Debug\net6.0\runtimes\linux\native\libmongocrypt.so[m
 C:\Users\abdias.ferreira\OneDrive - Unidas\TreinoDeployVersao6\WebApplication1\WebApplication1\bin\Debug\net6.0\runtimes\osx\native\libmongocrypt.dylib[m
 C:\Users\abdias.ferreira\OneDrive - Unidas\TreinoDeployVersao6\WebApplication1\WebApplication1\bin\Debug\net6.0\runtimes\win\native\mongocrypt.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\appsettings.Development.json[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\appsettings.json[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\Unidas.Deploy.Api.exe[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\Unidas.Deploy.Api.deps.json[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\Unidas.Deploy.Api.runtimeconfig.json[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\Unidas.Deploy.Api.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\Unidas.Deploy.Api.pdb[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\HealthChecks.MongoDb.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\DnsClient.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\Microsoft.Extensions.Diagnostics.HealthChecks.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\Microsoft.Extensions.Diagnostics.HealthChecks.Abstractions.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\Microsoft.OpenApi.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\MongoDB.Bson.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\MongoDB.Driver.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\MongoDB.Driver.Core.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\MongoDB.Libmongocrypt.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\Newtonsoft.Json.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\SharpCompress.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\Swashbuckle.AspNetCore.Swagger.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\Swashbuckle.AspNetCore.SwaggerGen.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\Swashbuckle.AspNetCore.SwaggerUI.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\runtimes\linux\native\libsnappy64.so[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\runtimes\linux\native\libzstd.so[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\runtimes\osx\native\libsnappy64.dylib[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\runtimes\osx\native\libzstd.dylib[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\runtimes\win\native\libzstd.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\runtimes\win\native\snappy32.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\runtimes\win\native\snappy64.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\runtimes\linux\native\libmongocrypt.so[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\runtimes\osx\native\libmongocrypt.dylib[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\bin\Debug\net6.0\runtimes\win\native\mongocrypt.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\Unidas.Deploy.Api.csproj.AssemblyReference.cache[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\Unidas.Deploy.Api.GeneratedMSBuildEditorConfig.editorconfig[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\Unidas.Deploy.Api.AssemblyInfoInputs.cache[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\Unidas.Deploy.Api.AssemblyInfo.cs[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\Unidas.Deploy.Api.csproj.CoreCompileInputs.cache[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\Unidas.Deploy.Api.MvcApplicationPartsAssemblyInfo.cs[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\Unidas.Deploy.Api.MvcApplicationPartsAssemblyInfo.cache[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\staticwebassets.build.json[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\staticwebassets.development.json[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\scopedcss\bundle\Unidas.Deploy.Api.styles.css[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\Unidas.Deploy.Api.csproj.CopyComplete[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\Unidas.Deploy.Api.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\refint\Unidas.Deploy.Api.dll[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\Unidas.Deploy.Api.pdb[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\Unidas.Deploy.Api.genruntimeconfig.cache[m
[32m+[m[32mC:\Fontes\TreinoDeployUnidas\Unidas\Treino.Deploy\obj\Debug\net6.0\ref\Unidas.Deploy.Api.dll[m
[1mdiff --git a/Treino.Deploy/obj/staticwebassets.pack.sentinel b/Treino.Deploy/obj/staticwebassets.pack.sentinel[m
[1mindex a5b40ca..769d611 100644[m
[1m--- a/Treino.Deploy/obj/staticwebassets.pack.sentinel[m
[1m+++ b/Treino.Deploy/obj/staticwebassets.pack.sentinel[m
[36m@@ -7,3 +7,4 @@[m
 2.0[m
 2.0[m
 2.0[m
[32m+[m[32m2.0[m
