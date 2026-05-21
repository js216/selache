// SPDX-License-Identifier: MIT
// cctest_csmith_616eee25.c --- cctest case csmith_616eee25 (csmith seed 1634659877)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x374aa206 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 1634659877 -o /tmp/csmith_gen_g7cx6ksp/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   uint64_t  f3;
   const uint32_t  f4;
   uint32_t  f5;
   uint16_t  f6;
   uint64_t  f7;
};
#pragma pack(pop)

struct S1 {
   uint32_t  f0;
   uint32_t  f1;
   struct S0  f2;
   uint8_t  f3;
};

struct S2 {
   struct S1  f0;
   uint16_t  f1;
   const int64_t  f2;
   uint16_t  f3;
   uint32_t  f4;
};

struct S3 {
   uint8_t  f0;
   uint32_t  f1;
   const int8_t  f2;
   const struct S0  f3;
   struct S1  f4;
   int32_t  f5;
   uint64_t  f6;
};

union U4 {
   int16_t  f0;
};


static int32_t g_2 = 6L;
static struct S1 g_22 = {0xA8C76C9FL,18446744073709551606UL,{-1L,9UL,65527UL,0UL,18446744073709551609UL,4294967293UL,0x6337L,18446744073709551615UL},255UL};
static struct S1 *g_21 = &g_22;
static const struct S1 g_62 = {18446744073709551613UL,18446744073709551615UL,{0x4014C235FF65E9E5LL,0xFE406C98L,65535UL,0xDC083601C06A4836LL,4UL,0xC4CDA38EL,0x8FF7L,18446744073709551615UL},251UL};
static int16_t g_66 = 0xAB66L;
static int32_t g_77 = (-2L);
static int16_t g_82 = 5L;
static int32_t g_83 = 0x25740FBDL;
static uint8_t g_84 = 0UL;
static uint32_t g_146 = 0x650ACC4DL;
static struct S3 g_152 = {1UL,6UL,-1L,{0xDB2F457C9E64603CLL,0xC094A489L,8UL,18446744073709551608UL,0x3EF6D6D9L,1UL,0xA41FL,0x78DD7419F2FE954CLL},{0x7728DF5BL,0UL,{0xFB0C5DD6833591E9LL,0x5D1E8AEAL,1UL,0x18CF48FB08C44B1FLL,18446744073709551615UL,0x6898C7DAL,0x2D69L,0x96D44F74CC65872CLL},0x49L},0x5A8E8F59L,0xF90B8BAF473B4E5FLL};
static int8_t g_161[4][2][3] = {{{(-4L),0xE7L,0xE7L},{(-1L),0xE7L,1L}},{{1L,(-4L),(-5L)},{(-1L),(-1L),(-5L)}},{{(-4L),1L,1L},{0xE7L,(-1L),0xE7L}},{{0xE7L,(-4L),(-1L)},{(-4L),0xE7L,0xE7L}}};
static int32_t g_183 = (-10L);
static struct S2 g_206 = {{6UL,0UL,{-3L,0xAE4A8FA5L,0x9678L,5UL,0UL,4294967295UL,65532UL,0x466516C3827196CBLL},1UL},0x65DAL,0xE0E5EE3B36A9D7FDLL,0x7F21L,8UL};
static uint64_t g_251 = 1UL;
static uint64_t g_258[3][2] = {{0x15333847FF09B90ELL,0x15333847FF09B90ELL},{0x15333847FF09B90ELL,0x15333847FF09B90ELL},{0x15333847FF09B90ELL,0x15333847FF09B90ELL}};
static uint16_t *g_274 = &g_206.f0.f2.f6;
static uint16_t * const *g_273 = &g_274;
static uint16_t **g_277 = &g_274;
static int16_t *g_317[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static int16_t **g_316 = &g_317[1][5];
static struct S0 *g_331 = &g_206.f0.f2;
static int32_t g_363 = 9L;
static uint32_t *g_394[4] = {&g_152.f4.f2.f5,&g_152.f4.f2.f5,&g_152.f4.f2.f5,&g_152.f4.f2.f5};
static const int32_t *g_415 = (void*)0;
static const int32_t **g_414[1][6][5] = {{{&g_415,&g_415,&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415,&g_415,&g_415},{&g_415,&g_415,&g_415,&g_415,&g_415}}};
static struct S1 **g_429 = &g_21;
static struct S3 g_430 = {250UL,0x0B29E48AL,0L,{0x8F9C657D68D3AD8CLL,0x1AEF16FAL,0x84FBL,0UL,0x095DD384L,1UL,65535UL,6UL},{0xF7793958L,0UL,{-1L,4294967292UL,3UL,0xB0F809C14093FA9CLL,0x59114B75L,4294967295UL,0xB8D1L,18446744073709551610UL},0x32L},0xEC7FD24BL,18446744073709551615UL};
static struct S1 *g_431[5] = {&g_430.f4,&g_430.f4,&g_430.f4,&g_430.f4,&g_430.f4};
static int32_t g_495 = (-6L);
static union U4 g_503 = {0xD138L};
static uint64_t g_546 = 0xD7D4FD53A9EED730LL;
static uint32_t g_562 = 1UL;
static int8_t g_569[1][1][5] = {{{0xEBL,0xEBL,0xEBL,0xEBL,0xEBL}}};
static uint32_t g_574 = 18446744073709551615UL;
static int64_t *g_586[5] = {&g_430.f4.f2.f0,&g_430.f4.f2.f0,&g_430.f4.f2.f0,&g_430.f4.f2.f0,&g_430.f4.f2.f0};
static int64_t *g_587 = &g_206.f0.f2.f0;
static int32_t g_610 = (-1L);
static int8_t g_611 = 0xEDL;
static int32_t g_613 = 0x2545B62BL;
static int64_t g_615 = 0x74B894C43FE54604LL;
static uint8_t g_616 = 255UL;
static uint64_t g_620 = 0x1AEB7D845900A14CLL;
static uint32_t g_725 = 4294967295UL;
static int32_t g_760[7][7] = {{0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L,0x97F13303L}};
static struct S2 g_815 = {{18446744073709551612UL,0UL,{0x14BEDA70297096EELL,4294967295UL,0xBEBEL,18446744073709551615UL,5UL,0UL,3UL,0x0A6CCAC9CFF98633LL},0x4EL},65532UL,1L,0xCE37L,0x7A9D48F4L};
static int32_t *g_817 = &g_495;
static int32_t **g_816 = &g_817;
static struct S3 **g_887 = (void*)0;
static struct S1 *g_922[7] = {&g_152.f4,&g_815.f0,&g_815.f0,&g_152.f4,&g_815.f0,&g_815.f0,&g_152.f4};
static uint32_t g_939 = 18446744073709551615UL;
static uint32_t g_967 = 0x203C7596L;
static const int64_t *g_991 = (void*)0;
static const int64_t **g_990 = &g_991;
static const int64_t ***g_989[4] = {&g_990,&g_990,&g_990,&g_990};
static const struct S0 *g_1003 = &g_815.f0.f2;
static const struct S0 **g_1002[5] = {&g_1003,&g_1003,&g_1003,&g_1003,&g_1003};
static const struct S0 ***g_1001 = &g_1002[3];
static const struct S0 ****g_1000[6] = {&g_1001,&g_1001,&g_1001,&g_1001,&g_1001,&g_1001};
static const struct S0 *****g_999 = &g_1000[2];
static int32_t *g_1017 = &g_83;
static uint8_t **g_1039 = (void*)0;
static uint64_t ***g_1054 = (void*)0;
static int32_t g_1076 = 2L;
static int32_t g_1079 = 0x226BA92AL;
static int32_t * const g_1078 = &g_1079;
static int32_t * const *g_1077[5] = {&g_1078,&g_1078,&g_1078,&g_1078,&g_1078};
static int16_t g_1086 = 0x3857L;
static union U4 g_1113 = {-1L};
static uint8_t g_1199 = 0x7DL;
static int64_t **g_1222 = &g_586[3];
static uint64_t g_1236[7][7] = {{0x4079CDABA52D880BLL,18446744073709551614UL,0x5B7C504FF5378BD1LL,0xA39DE38177E704A3LL,0x5B7C504FF5378BD1LL,18446744073709551614UL,0x4079CDABA52D880BLL},{18446744073709551615UL,18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,18446744073709551611UL,18446744073709551615UL,18446744073709551615UL},{0x4079CDABA52D880BLL,0xA39DE38177E704A3LL,0xEEC12447A20AA8A0LL,0xA39DE38177E704A3LL,0x4079CDABA52D880BLL,0UL,0x4079CDABA52D880BLL},{18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,18446744073709551611UL},{0x5B7C504FF5378BD1LL,0xA39DE38177E704A3LL,0x5B7C504FF5378BD1LL,18446744073709551614UL,0x4079CDABA52D880BLL,18446744073709551614UL,0x5B7C504FF5378BD1LL},{18446744073709551611UL,18446744073709551611UL,5UL,18446744073709551611UL,18446744073709551611UL,5UL,18446744073709551611UL},{0x4079CDABA52D880BLL,18446744073709551614UL,0x5B7C504FF5378BD1LL,0xA39DE38177E704A3LL,0x5B7C504FF5378BD1LL,18446744073709551614UL,0x4079CDABA52D880BLL}};
static struct S3 g_1266 = {0x37L,1UL,0L,{0xF53BA261FA9515BBLL,0x6F7984D0L,0x019BL,18446744073709551615UL,18446744073709551614UL,4294967295UL,0xEF97L,1UL},{9UL,0UL,{0x0FB4BC39B148F761LL,4294967295UL,65535UL,0x3EC0BEE8D5EB6149LL,1UL,3UL,0xDCF9L,0x340D7E66E8BF67D5LL},0UL},0x29D5F0A8L,0xC7396FBA3C5B955FLL};
static union U4 *g_1311 = &g_503;
static int8_t *g_1331[1][1][7] = {{{&g_161[0][1][1],&g_569[0][0][0],&g_161[0][1][1],&g_161[0][1][1],&g_569[0][0][0],&g_161[0][1][1],&g_161[0][1][1]}}};
static int8_t **g_1330 = &g_1331[0][0][3];
static struct S1 g_1333 = {1UL,0UL,{-8L,4294967295UL,0x75E1L,1UL,1UL,4294967295UL,1UL,0x52BA304FA2BFE4E5LL},0x3DL};
static uint8_t g_1380 = 0x6AL;
static const int32_t *g_1382[1] = {&g_183};
static const int32_t **g_1381[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};



static struct S3  func_1(void);
static const struct S1 * func_6(int32_t  p_7, uint64_t  p_8, struct S3  p_9, struct S2  p_10, uint32_t  p_11);
static int32_t  func_12(struct S1 * p_13, struct S3  p_14, struct S1 * p_15);
static struct S1 * func_16(struct S1 * const  p_17, struct S2  p_18);
static struct S1 * func_19(struct S1 * p_20);
static int64_t  func_30(struct S1 * p_31, struct S1 * p_32, int16_t  p_33, uint8_t  p_34, uint8_t  p_35);
static struct S1 * func_36(struct S1 * const  p_37, uint64_t  p_38, uint32_t  p_39);
static struct S1 * const  func_40(struct S1 * p_41, int8_t  p_42, int16_t  p_43);




static struct S3  func_1(void)
{ 
    int32_t l_813 = 0xE742E346L;
    int32_t l_846 = 1L;
    struct S2 l_858 = {{0x6323FCF1L,0xD6D4453DL,{2L,4294967295UL,7UL,0UL,0xA2958C9FL,0x6C735B1EL,1UL,18446744073709551611UL},0x38L},0x2C0EL,0x27351D2F17A433CFLL,0x9ADAL,0xB2C9C9FCL};
    uint8_t l_861 = 249UL;
    int32_t ** const *l_866 = &g_816;
    int64_t l_872 = (-1L);
    struct S0 **l_907 = &g_331;
    struct S0 ***l_906 = &l_907;
    struct S0 **l_914[5];
    uint16_t l_919 = 0UL;
    int32_t l_936 = 0x1760A6DCL;
    int64_t * const *l_1032 = &g_586[3];
    int32_t l_1050 = (-6L);
    uint32_t l_1051 = 0xECC8E723L;
    struct S1 *l_1068 = &g_430.f4;
    int32_t * const l_1075 = &g_1076;
    int32_t * const *l_1074 = &l_1075;
    uint32_t l_1084 = 1UL;
    int8_t l_1091 = 9L;
    uint32_t l_1159[6];
    uint16_t l_1195[1];
    uint16_t l_1211 = 0xB7CCL;
    int8_t l_1223[3];
    int32_t l_1228 = 0xDA3EC50CL;
    struct S3 *l_1265 = &g_1266;
    int32_t l_1269 = 9L;
    int32_t l_1271 = 1L;
    int32_t l_1272 = (-9L);
    int32_t l_1273 = 0x3AF8B6ABL;
    int32_t l_1275 = 0x234C821FL;
    union U4 l_1316 = {0x1192L};
    int32_t *l_1354 = (void*)0;
    int32_t l_1387 = 0xAAA2E148L;
    int i;
    for (i = 0; i < 5; i++)
        l_914[i] = &g_331;
    for (i = 0; i < 6; i++)
        l_1159[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_1195[i] = 0x464AL;
    for (i = 0; i < 3; i++)
        l_1223[i] = 0xB2L;
    for (g_2 = (-11); (g_2 <= 0); g_2++)
    { 
        uint8_t l_5 = 247UL;
        struct S3 l_814 = {0xFCL,0xB377A5BDL,5L,{-10L,4UL,65535UL,18446744073709551615UL,1UL,0xC574EA56L,0x3429L,18446744073709551611UL},{1UL,3UL,{0x67649149FC25307DLL,0xC5464F97L,65535UL,0x2D39501C4E322EEELL,3UL,0UL,0xC279L,0x6D1699AAB039D126LL},255UL},-2L,1UL};
        const struct S1 *l_825 = &g_206.f0;
        const struct S1 **l_824 = &l_825;
        struct S0 *l_841 = &g_430.f4.f2;
        int32_t l_842[6][7][5] = {{{1L,(-1L),0xAA540E06L,0x012527A2L,0x992F33A3L},{9L,0L,0L,0xA1CE641DL,(-10L)},{0x862E84B3L,0x423D9A41L,2L,0x9C083DF3L,0xA05585E7L},{(-1L),1L,0x9C083DF3L,(-1L),0x84672E1FL},{0xAA540E06L,(-10L),(-1L),0xAA540E06L,(-1L)},{0x42BB18D5L,0xA1CE641DL,0x977776F2L,(-8L),(-1L)},{(-10L),0x42BB18D5L,0x84672E1FL,1L,0x84672E1FL}},{{1L,1L,0L,1L,0xA05585E7L},{0L,1L,0xD79A43B4L,5L,(-10L)},{(-1L),0xD79A43B4L,0x84672E1FL,(-1L),0x9C083DF3L},{1L,1L,0x85D3B5C2L,(-1L),1L},{(-8L),1L,0x862E84B3L,(-8L),0xA1CE641DL},{(-1L),0x42BB18D5L,0x9C083DF3L,1L,2L},{0x992F33A3L,0xA1CE641DL,(-9L),1L,(-1L)}},{{2L,(-10L),(-8L),(-8L),(-10L)},{(-10L),1L,2L,(-1L),0x977776F2L},{(-1L),0x423D9A41L,(-1L),(-1L),0xCADBBF56L},{5L,(-10L),0x862E84B3L,5L,(-1L)},{(-1L),(-8L),0x977776F2L,1L,0xD79A43B4L},{(-10L),(-1L),1L,1L,0xCADBBF56L},{2L,1L,0xD79A43B4L,(-8L),0xA05585E7L}},{{0x992F33A3L,0x99729D75L,0xD79A43B4L,0xAA540E06L,0x862E84B3L},{(-1L),(-1L),1L,(-1L),(-1L)},{(-8L),1L,0x977776F2L,0x9C083DF3L,1L},{1L,2L,0x862E84B3L,0xA1CE641DL,(-8L)},{(-1L),(-1L),(-1L),1L,1L},{0L,0xA1CE641DL,2L,0x99729D75L,(-1L)},{1L,0x862E84B3L,(-8L),0xA1CE641DL,0x862E84B3L}},{{(-10L),0x423D9A41L,(-9L),(-1L),0xA05585E7L},{0x42BB18D5L,0x423D9A41L,0x9C083DF3L,0xD79A43B4L,0xCADBBF56L},{0xAA540E06L,0x862E84B3L,0x862E84B3L,0xAA540E06L,0xD79A43B4L},{(-1L),0xA1CE641DL,0x85D3B5C2L,1L,(-1L)},{0x862E84B3L,(-1L),0x84672E1FL,2L,0xCADBBF56L},{1L,2L,0xD79A43B4L,1L,0x977776F2L},{0x992F33A3L,1L,0L,0xAA540E06L,(-10L)}},{{0x9C083DF3L,(-1L),0x84672E1FL,0xD79A43B4L,(-1L)},{1L,0x99729D75L,0x977776F2L,(-1L),2L},{1L,1L,(-1L),0xA1CE641DL,0xA1CE641DL},{0x9C083DF3L,(-1L),0x9C083DF3L,0x99729D75L,1L},{0x992F33A3L,(-8L),0L,1L,0L},{0xD79A43B4L,5L,(-10L),0x862E84B3L,5L},{9L,0x977776F2L,0L,0L,0x84672E1FL}}};
        int32_t l_843 = 0x558EDCB1L;
        uint32_t *l_844 = (void*)0;
        uint32_t *l_845 = &g_152.f1;
        struct S3 l_903 = {0xE6L,4294967286UL,-9L,{0x13CC5E7D7E59C5B3LL,4294967291UL,1UL,0x2B7605411FE94FFFLL,18446744073709551609UL,0x58FEF624L,0x868BL,18446744073709551613UL},{18446744073709551607UL,8UL,{1L,0x59B1A132L,65533UL,1UL,18446744073709551615UL,0xCBB09219L,0xE2B6L,0x36C78F6E4BF6C601LL},1UL},0x5F2C8F96L,9UL};
        struct S0 * const **l_904[2];
        int32_t l_908 = 0x436CE43BL;
        struct S2 l_921 = {{18446744073709551607UL,1UL,{0x9FFD15671A67EEEALL,0x9F1987CFL,0x958DL,0xA1DA2B9502945B8BLL,1UL,4294967287UL,1UL,0UL},0UL},1UL,0x9E74F518CB9392FELL,1UL,0x16A7E30CL};
        uint8_t l_1141[4] = {0xCFL,0xCFL,0xCFL,0xCFL};
        int64_t **l_1174 = &g_587;
        int64_t l_1194 = 0xE722A744D41438B4LL;
        uint16_t *l_1219 = (void*)0;
        int32_t l_1227 = 0L;
        uint64_t l_1229 = 0x688DC5A1E081E47DLL;
        struct S1 * const l_1260 = &g_22;
        int32_t l_1274 = 0xFA1497F6L;
        uint32_t l_1276 = 0x5EB1C00DL;
        const int32_t ***l_1383 = &g_1381[0];
        const uint16_t l_1386[5] = {0UL,0UL,0UL,0UL,0UL};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_904[i] = (void*)0;
    }
    return g_152;
}



static const struct S1 * func_6(int32_t  p_7, uint64_t  p_8, struct S3  p_9, struct S2  p_10, uint32_t  p_11)
{ 
    int32_t ***l_818 = &g_816;
    int32_t **l_820 = &g_817;
    int32_t ***l_819 = &l_820;
    int32_t *l_821 = &g_77;
    int32_t **l_822 = (void*)0;
    int32_t **l_823 = &l_821;
    (*l_821) = (((*l_818) = g_816) != ((*l_819) = &g_817));
    (*l_823) = l_821;
    p_9.f5 = ((**l_823) = 0xB4D25665L);
    return (*g_429);
}



static int32_t  func_12(struct S1 * p_13, struct S3  p_14, struct S1 * p_15)
{ 
    const uint32_t l_434[4] = {7UL,7UL,7UL,7UL};
    struct S1 l_438 = {0x639E9D2CL,9UL,{0x04EE360FDADE5A41LL,0x6D27D34CL,0x24BAL,0xC43C1D01BAF555E4LL,18446744073709551609UL,4294967291UL,0x818AL,7UL},0UL};
    struct S0 **l_439 = (void*)0;
    int32_t l_459 = (-1L);
    int32_t *l_461 = (void*)0;
    int32_t * const *l_460 = &l_461;
    int32_t l_473 = 0x8EA45B2FL;
    int32_t l_474 = 0xB1DACD6EL;
    uint32_t l_475 = 0x1D59D6FBL;
    int32_t * const *l_490[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t *l_558[2][5] = {{&g_152.f4.f2.f0,&g_152.f4.f2.f0,&g_152.f4.f2.f0,&g_152.f4.f2.f0,&g_152.f4.f2.f0},{&g_22.f2.f0,&g_22.f2.f0,&g_22.f2.f0,&g_22.f2.f0,&g_22.f2.f0}};
    struct S1 *l_571 = (void*)0;
    int32_t l_612[1];
    int32_t l_636 = 0xCDB8D2A2L;
    uint8_t l_696 = 0xFAL;
    struct S2 l_758 = {{0UL,0xEA630B80L,{7L,8UL,1UL,0x7DD553E9AF1EAC1FLL,0UL,4294967295UL,0x5B38L,0x7F89E54F5195321CLL},0UL},65526UL,0L,1UL,0x4582238CL};
    int16_t l_763 = (-1L);
    union U4 l_809 = {0x2FF3L};
    int i, j;
    for (i = 0; i < 1; i++)
        l_612[i] = (-1L);
    g_77 = (safe_div_func_uint32_t_u_u((l_434[1] > ((p_14.f4.f2.f0 == (l_434[3] , (safe_lshift_func_int16_t_s_u((~p_14.f3.f1), (l_438 , ((*g_274) = (l_439 == (void*)0))))))) , 1UL)), p_14.f4.f2.f4));
lbl_747:
    for (g_206.f0.f2.f5 = 17; (g_206.f0.f2.f5 >= 1); g_206.f0.f2.f5--)
    { 
        int32_t *l_442 = &g_77;
        (*l_442) = 0x3E64BB15L;
        g_430.f5 &= (((((safe_rshift_func_int16_t_s_u(l_434[1], 12)) < (((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((((*l_442) , 0x6BD99BB7E16553EALL) , (void*)0) == (((safe_mul_func_int8_t_s_s((l_459 ^= (safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((*l_442), (((safe_sub_func_int16_t_s_s(0L, 7UL)) < 0x4C36L) > 0L))), l_438.f2.f7)), g_206.f0.f2.f4))), 255UL)) & 18446744073709551606UL) , l_460)), 0xAAD8C09BL)), 10)) >= g_22.f2.f3) , g_258[0][1])) , 4294967290UL) < p_14.f5) <= p_14.f3.f2);
    }
    for (p_14.f4.f2.f2 = 0; (p_14.f4.f2.f2 <= 0); p_14.f4.f2.f2 += 1)
    { 
        const uint32_t l_462 = 0x90F03072L;
        int32_t l_472 = 4L;
        int32_t l_535 = (-1L);
        int32_t l_537 = (-1L);
        int32_t l_538 = 0x46379957L;
        const int64_t *l_556 = &g_430.f3.f0;
        int32_t **l_568 = &l_461;
        int32_t l_570 = 6L;
        struct S1 l_592 = {1UL,18446744073709551614UL,{0x6EF4704E90A43F0ELL,0UL,1UL,4UL,18446744073709551608UL,0x1DBE59CDL,0x07EBL,2UL},255UL};
        if (l_462)
            break;
        for (g_430.f0 = 0; (g_430.f0 <= 3); g_430.f0 += 1)
        { 
            uint32_t l_478[4][2] = {{0x2E81A96CL,0x2E81A96CL},{0UL,0x2E81A96CL},{0x2E81A96CL,0UL},{0x2E81A96CL,0x2E81A96CL}};
            int32_t *l_480 = &g_77;
            int8_t *l_504 = &g_161[0][1][1];
            uint32_t l_514 = 0UL;
            uint8_t l_517 = 0xBAL;
            int32_t l_536 = (-1L);
            int32_t *l_544 = (void*)0;
            int32_t *l_545[6] = {&l_538,&l_459,&l_538,&l_538,&l_459,&l_538};
            const int64_t **l_557[2];
            uint32_t *l_559 = &g_430.f1;
            int64_t *l_584 = &l_438.f2.f0;
            uint64_t l_589 = 1UL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_557[i] = &l_556;
            if (l_462)
            { 
                int32_t *l_479 = &g_2;
                int32_t *l_484[7] = {&g_183,&g_183,&g_183,&g_183,&g_183,&g_183,&g_183};
                int32_t **l_483 = &l_484[5];
                uint8_t l_521 = 0UL;
                int i;
                for (p_14.f4.f1 = 0; (p_14.f4.f1 <= 1); p_14.f4.f1 += 1)
                { 
                    int32_t *l_463 = &g_430.f5;
                    int32_t *l_464 = &g_152.f5;
                    int32_t *l_465 = &g_83;
                    int32_t *l_466 = (void*)0;
                    int32_t *l_467 = &g_152.f5;
                    int32_t *l_468 = &l_459;
                    int32_t *l_469 = &g_83;
                    int32_t *l_470 = &g_430.f5;
                    int32_t *l_471[2][5][7] = {{{&g_83,&g_83,&g_430.f5,&g_83,&g_83,&g_430.f5,&g_83},{&g_2,&l_459,&g_430.f5,&g_77,&g_430.f5,&l_459,&g_2},{&g_2,&g_83,&g_2,&g_2,&g_83,&g_2,&g_2},{&g_2,&g_77,&g_363,&g_77,&g_2,(void*)0,&g_2},{&g_83,&g_2,&g_2,&g_83,&g_2,&g_2,&g_83}},{{&g_430.f5,&g_77,&g_430.f5,&l_459,&g_2,&l_459,&g_430.f5},{&g_83,&g_83,&g_430.f5,&g_83,&g_83,&g_430.f5,&g_83},{&g_2,&l_459,&g_430.f5,&g_77,&g_430.f5,&l_459,&g_2},{&g_2,&g_83,&g_2,&g_2,&g_83,&g_2,&g_2},{&g_2,&g_77,&g_363,&g_77,&g_2,(void*)0,&g_2}}};
                    int i, j, k;
                    if (g_161[(p_14.f4.f1 + 2)][p_14.f4.f1][(p_14.f4.f2.f2 + 2)])
                        break;
                    l_475--;
                    return l_478[1][0];
                }
                for (g_82 = 3; (g_82 >= 0); g_82 -= 1)
                { 
                    int32_t **l_481 = &l_461;
                    int32_t *l_482 = &g_77;
                    int i, j, k;
                    (*l_481) = (l_480 = l_479);
                    (*l_482) ^= (*l_461);
                    if (p_14.f4.f2.f7)
                        continue;
                    return g_430.f6;
                }
                for (g_430.f4.f2.f0 = 3; (g_430.f4.f2.f0 >= 0); g_430.f4.f2.f0 -= 1)
                { 
                    uint64_t *l_489[4] = {&g_251,&g_251,&g_251,&g_251};
                    int32_t * const **l_491 = &l_490[4];
                    int32_t * const l_494 = &g_495;
                    int32_t * const *l_493 = &l_494;
                    int32_t * const **l_492 = &l_493;
                    int16_t *l_496 = (void*)0;
                    int8_t *l_502 = &g_161[0][1][1];
                    int8_t **l_501 = &l_502;
                    int32_t *l_507 = &g_83;
                    int16_t *l_510 = &g_82;
                    uint32_t *l_513 = &g_152.f4.f2.f5;
                    uint32_t *l_520 = &g_430.f4.f2.f5;
                    int64_t *l_522 = &g_206.f0.f2.f0;
                    uint8_t *l_523 = (void*)0;
                    uint8_t *l_524 = &g_430.f4.f3;
                    int i;
                    g_77 = ((void*)0 == l_483);
                    g_152.f5 ^= (safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_472 ^= (((g_152.f4.f3 == (g_430.f4.f2.f3 = p_14.f4.f3)) > (((((*l_492) = ((*l_491) = l_490[1])) == (void*)0) == 1L) || (**g_277))) , (-1L))), (*l_480))), p_14.f4.f2.f2));
                    (*l_507) ^= (((!((!(((((**g_273)--) == p_14.f4.f2.f1) , ((*l_501) = &g_161[0][1][2])) == (g_503 , l_504))) & (l_472 ^ p_14.f4.f2.f4))) > (((((safe_lshift_func_uint8_t_u_u((0UL ^ g_152.f4.f0), 6)) != 1L) & p_14.f4.f1) ^ 2L) >= (*l_480))) & p_14.f4.f2.f3);
                    p_14.f5 |= (((*l_524) = (g_152.f0 ^= (((*l_510) ^= p_14.f4.f2.f6) | (((*l_522) = (0x44C222C8L >= ((0UL || (safe_sub_func_uint32_t_u_u(((*l_513) = (*l_480)), ((l_514 || (safe_sub_func_int8_t_s_s(l_517, (((safe_add_func_uint32_t_u_u(((*l_520) = (p_14.f4.f1 == 0x3334L)), (*l_480))) > l_521) ^ p_14.f3.f3)))) || (-8L))))) ^ (*l_507)))) != (*l_480))))) , 0xE3691A8FL);
                    g_430.f5 |= (safe_mod_func_uint16_t_u_u(p_14.f4.f1, 1L));
                }
            }
            else
            { 
                int32_t **l_527 = &l_480;
                (*l_527) = l_480;
            }
            for (g_430.f4.f2.f7 = 0; (g_430.f4.f2.f7 <= 1); g_430.f4.f2.f7 += 1)
            { 
                int i, j;
                for (p_14.f0 = 0; (p_14.f0 <= 4); p_14.f0 += 1)
                { 
                    int i, j;
                    return l_478[g_430.f4.f2.f7][(p_14.f4.f2.f2 + 1)];
                }
                return l_478[(g_430.f4.f2.f7 + 2)][(p_14.f4.f2.f2 + 1)];
            }
            for (g_430.f4.f2.f3 = 0; (g_430.f4.f2.f3 <= 0); g_430.f4.f2.f3 += 1)
            { 
                int32_t **l_528 = &l_461;
                int32_t l_534 = 0x4A92E54AL;
                uint32_t l_539 = 0x4C5EEA7FL;
                int i, j, k;
                (*l_528) = (void*)0;
                for (g_152.f4.f2.f5 = 0; (g_152.f4.f2.f5 <= 3); g_152.f4.f2.f5 += 1)
                { 
                    int32_t *l_529 = &l_474;
                    int32_t *l_530 = &g_83;
                    int32_t *l_531 = (void*)0;
                    int32_t *l_532 = &g_430.f5;
                    int32_t *l_533[7][1] = {{&g_2},{&g_77},{&g_77},{&g_2},{&g_77},{&g_77},{&g_2}};
                    int i, j;
                    l_539++;
                    (*l_532) &= ((p_14.f4.f2.f0 = (safe_div_func_uint16_t_u_u(p_14.f3.f0, (g_152 , l_537)))) ^ 1L);
                    if (p_14.f3.f5)
                        continue;
                }
            }
            --g_546;
            if ((safe_sub_func_uint64_t_u_u(((((((void*)0 != &g_274) || (+(safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((p_14.f3 , 0x4231L), p_14.f4.f2.f3)), (((((*l_559) = ((((**g_277) = ((l_556 = l_556) == l_558[1][4])) ^ p_14.f3.f3) , p_14.f4.f2.f0)) , (**g_277)) && p_14.f3.f2) > g_206.f0.f2.f5))))) || (*l_480)) , p_14.f4.f3) == 7L), p_14.f5)))
            { 
                struct S1 l_567 = {0x41A77E13L,0x5A46110DL,{0x05E1910E2C15E3BELL,4294967295UL,0xE41DL,0x7083706DC6EFCF4BLL,1UL,0x8082EDAAL,0xD388L,0x114C79ADEE7C9F7DLL},1UL};
                p_14.f5 ^= (safe_mul_func_uint16_t_u_u(g_562, ((safe_lshift_func_int8_t_s_u((l_570 |= (g_569[0][0][1] |= ((*l_504) = (l_438 , (safe_mod_func_int16_t_s_s(p_14.f3.f6, (l_567 , (((l_568 != &g_415) , 0x3C53L) || p_14.f3.f0)))))))), 0)) & p_14.f4.f0)));
            }
            else
            { 
                int16_t l_583 = 0x50AFL;
                struct S1 l_593 = {18446744073709551615UL,1UL,{0x190C1E8EAA2FA960LL,4294967294UL,0xFD4DL,18446744073709551615UL,7UL,0xA2B4BCD9L,1UL,0x1AA9FC6D736890B8LL},0xA5L};
                uint64_t *l_594 = &g_22.f2.f7;
                uint64_t l_603 = 1UL;
                int32_t l_607[3][7][6] = {{{(-1L),8L,0L,0xB62AF6FBL,0L,0xDB25C237L},{1L,8L,0x0C91585DL,0L,3L,0xD66EC26BL},{0x9BACC47EL,0L,0L,3L,3L,0L},{0L,0L,0x8226D5B1L,0L,0xB62AF6FBL,4L},{0x8226D5B1L,7L,1L,0L,0xA8CBBA3EL,0x8226D5B1L},{0xDB25C237L,0x8226D5B1L,1L,0x0C91585DL,0L,4L},{0xD66EC26BL,0x0C91585DL,0x8226D5B1L,0L,0xC7FADC9AL,0L}},{{0L,0xC7FADC9AL,0L,0x8226D5B1L,0x0C91585DL,1L},{3L,0x8226D5B1L,0x9BACC47EL,3L,1L,8L},{1L,0xDB25C237L,0L,3L,(-1L),1L},{3L,0xD66EC26BL,7L,1L,0x8226D5B1L,0x8226D5B1L},{0L,0L,0L,0L,2L,0L},{1L,4L,0L,0x9BACC47EL,4L,0L},{8L,0x8226D5B1L,0xD66EC26BL,0L,4L,0xB62AF6FBL}},{{1L,4L,0xA8CBBA3EL,7L,2L,1L},{0x8226D5B1L,0L,0xC7FADC9AL,0L,0x8226D5B1L,0x0C91585DL},{0L,0xD66EC26BL,4L,0L,(-1L),1L},{0L,0xDB25C237L,0L,0xD66EC26BL,1L,1L},{0xB62AF6FBL,0x8226D5B1L,4L,0xA8CBBA3EL,0x9BACC47EL,0x0C91585DL},{1L,0L,0xC7FADC9AL,0xC7FADC9AL,0L,1L},{0x0C91585DL,0x9BACC47EL,0xA8CBBA3EL,4L,0x8226D5B1L,0xB62AF6FBL}}};
                int32_t l_619 = 1L;
                int32_t l_637 = 0xE7F6052FL;
                int64_t **l_642 = &l_584;
                int i, j, k;
                for (g_363 = 0; (g_363 <= 3); g_363 += 1)
                { 
                    int32_t *l_572 = &g_83;
                    int32_t l_573 = 1L;
                    l_571 = func_16((*g_429), g_206);
                    l_572 = (*l_460);
                    l_573 = p_14.f5;
                }
                g_574++;
                for (g_83 = 0; (g_83 <= 3); g_83 += 1)
                { 
                    uint32_t l_582 = 1UL;
                    int64_t **l_585[5] = {&l_584,&l_584,&l_584,&l_584,&l_584};
                    int32_t l_588 = 0x4E82B0F3L;
                    int i;
                    g_363 = p_14.f3.f6;
                    l_473 = ((g_206 , p_14.f4.f2.f5) || (safe_add_func_int32_t_s_s((l_588 = (p_14.f5 = ((+((l_582 , g_206) , l_583)) == (p_14.f4.f2.f4 > ((g_586[3] = l_584) != g_587))))), l_589)));
                    p_14.f5 = 0x049D8A16L;
                }
                if (((0UL < ((((safe_mod_func_uint32_t_u_u(((*l_559) = p_14.f3.f6), p_14.f3.f0)) <= ((*l_584) = ((l_592 , l_593) , (-1L)))) , ((((*l_594)++) != ((safe_sub_func_uint64_t_u_u(((((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((0xB2F1L != (-1L)), p_14.f4.f2.f4)) || (*l_480)), 10)) == (*g_587)) < (**g_277)) <= p_14.f4.f3), 18446744073709551615UL)) , p_14.f4.f1)) > p_14.f4.f2.f7)) != l_603)) & 1UL))
                { 
                    struct S0 ****l_604 = (void*)0;
                    struct S0 ***l_606 = &l_439;
                    struct S0 ****l_605 = &l_606;
                    int32_t l_608 = 0L;
                    int32_t l_609 = (-1L);
                    int32_t l_614 = 1L;
                    uint8_t *l_624 = &g_430.f4.f3;
                    int64_t ***l_643 = &l_642;
                    (*l_605) = &l_439;
                    g_616--;
                    --g_620;
                    l_636 |= (((((0x95B10A54L ^ (!p_14.f4.f3)) >= (((*l_624) = 255UL) ^ ((*l_504) |= ((safe_mod_func_int16_t_s_s(((l_593.f2.f6 != (((safe_unary_minus_func_int32_t_s(((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(p_14.f4.f2.f5, (((g_610 = l_592.f2.f3) & ((safe_mul_func_int8_t_s_s((-1L), p_14.f4.f3)) < p_14.f4.f2.f2)) == p_14.f4.f2.f1))), (-7L))) == p_14.f3.f0))) , p_14.f4.f2.f5) < 0x0307L)) >= l_608), (**g_277))) != l_614)))) & 1UL) != 0x290903846F3CE614LL) , p_14.f4.f2.f2);
                    g_83 ^= (g_610 = ((((l_637 >= 4294967289UL) && (safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((((((((*l_643) = l_642) == (void*)0) , &g_587) != &l_558[1][2]) ^ (safe_mod_func_uint8_t_u_u(p_14.f3.f2, 0xFAL))) < p_14.f4.f3), p_14.f4.f2.f5)), p_14.f4.f2.f2))) <= g_152.f4.f2.f2) <= p_14.f4.f2.f7));
                }
                else
                { 
                    struct S1 l_650 = {0UL,0x38CA653FL,{0x38586709ED264B22LL,0x3C16F5BBL,65526UL,18446744073709551608UL,0UL,4294967291UL,0xFFE7L,0UL},255UL};
                    int64_t *l_657 = &l_592.f2.f0;
                    int32_t l_658 = 0x9FE8FB78L;
                    int16_t l_659 = (-1L);
                    l_658 |= (safe_add_func_uint32_t_u_u(0x6F6FA349L, ((*l_559) = (safe_rshift_func_int16_t_s_s(p_14.f3.f6, (l_650 , (safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((safe_div_func_int32_t_s_s((p_14.f4.f2.f3 != (((g_430 , ((*l_594) = p_14.f5)) <= ((void*)0 == l_657)) == (*g_274))), p_14.f4.f2.f0)) && p_14.f3.f3) , p_14.f4.f2.f5), (*l_480))), 2))))))));
                    if (l_659)
                        continue;
                    if (p_14.f4.f2.f4)
                        break;
                    g_152.f5 ^= (l_607[1][1][5] = p_14.f4.f3);
                }
                for (l_537 = 3; (l_537 >= 0); l_537 -= 1)
                { 
                    if (p_14.f3.f3)
                        break;
                    l_461 = (*l_568);
                }
            }
        }
    }
    for (g_206.f0.f2.f1 = 0; (g_206.f0.f2.f1 > 15); g_206.f0.f2.f1 = safe_add_func_uint32_t_u_u(g_206.f0.f2.f1, 3))
    { 
        uint64_t l_684 = 18446744073709551615UL;
        uint64_t l_687 = 0UL;
        int32_t l_721[3];
        uint16_t *l_731[3];
        uint32_t *l_734 = &g_430.f1;
        uint32_t l_770 = 4294967295UL;
        int16_t *l_784 = &g_503.f0;
        int32_t *l_812 = &l_721[0];
        int i;
        for (i = 0; i < 3; i++)
            l_721[i] = 0xF4ABD669L;
        for (i = 0; i < 3; i++)
            l_731[i] = &g_22.f2.f6;
        for (g_206.f0.f2.f0 = (-19); (g_206.f0.f2.f0 <= (-3)); g_206.f0.f2.f0 = safe_add_func_uint64_t_u_u(g_206.f0.f2.f0, 8))
        { 
            uint32_t l_669 = 0xD065EE2DL;
            int16_t *l_716 = &g_82;
            int32_t l_722[7] = {0x8DB39DADL,0x8DB39DADL,0x8DB39DADL,0x8DB39DADL,0x8DB39DADL,0x8DB39DADL,0x8DB39DADL};
            int32_t *l_730 = &g_430.f5;
            int32_t *l_735 = (void*)0;
            int32_t *l_736 = &l_474;
            uint64_t *l_759 = (void*)0;
            uint32_t l_792 = 0x91027E17L;
            int i;
            if (p_14.f5)
            { 
                int8_t l_664[7][6][2] = {{{0L,0L},{0x42L,0L},{0L,0x42L},{0L,0L},{0x42L,0L},{0L,0x42L}},{{0L,0L},{0x42L,0L},{0L,0x42L},{0L,0L},{0x42L,0L},{0L,0x42L}},{{0L,0L},{0x42L,0L},{0L,0x42L},{0L,0L},{0x42L,0L},{0L,0x42L}},{{0L,0L},{0x42L,0L},{0L,0x42L},{0L,0L},{0x42L,0L},{0L,0x42L}},{{0L,0L},{0x42L,0L},{0L,0x42L},{0L,0L},{0x42L,0L},{0L,0x42L}},{{0L,0L},{0x42L,0L},{0L,0x42L},{0L,0L},{0x42L,0L},{0L,0x42L}},{{0L,0L},{0x42L,0L},{0L,0x42L},{0L,0L},{0x42L,0L},{0L,0x42L}}};
                int i, j, k;
                if (l_664[1][1][1])
                    break;
                return l_664[1][5][0];
            }
            else
            { 
                int8_t *l_697 = &g_161[0][0][0];
                int32_t l_700 = 1L;
                int64_t l_705 = (-1L);
                int32_t l_706 = 0xDD72EF59L;
                uint32_t *l_717 = &g_430.f4.f2.f1;
                uint32_t *l_718 = &g_430.f4.f2.f5;
                int32_t l_723 = (-7L);
                int32_t l_724 = 0x25C4C242L;
                for (g_430.f5 = (-2); (g_430.f5 <= (-2)); g_430.f5++)
                { 
                    uint32_t *l_672 = &g_430.f1;
                    uint32_t **l_681 = &g_394[3];
                    int8_t *l_685[5] = {&g_611,&g_611,&g_611,&g_611,&g_611};
                    int32_t *l_686 = &g_363;
                    int i;
                    (*l_686) = (safe_mod_func_int8_t_s_s(l_669, (g_569[0][0][4] = (safe_add_func_uint32_t_u_u(((*l_672)--), (((l_669 , ((((g_183 = g_613) , (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u((g_415 == ((*l_681) = l_672)), ((safe_add_func_uint64_t_u_u(g_430.f3.f7, ((p_14.f3.f4 == l_684) || p_14.f3.f0))) >= (**g_277)))) >= 2L) , &g_429) == &g_429), 14)), 2))) , g_152.f3.f7) >= 0xCEL)) != 1L) || l_684))))));
                }
                if (l_687)
                    break;
                l_473 = (safe_mul_func_uint8_t_u_u(((p_14.f3.f0 & (safe_mul_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u((((*g_274) ^= ((safe_lshift_func_uint8_t_u_s(l_687, ((*l_697) = l_696))) >= ((l_669 && ((safe_mul_func_int16_t_s_s((l_700 && (safe_div_func_uint64_t_u_u((safe_add_func_int64_t_s_s(l_669, ((p_14.f5 ^= (p_14.f3.f1 >= p_14.f3.f4)) ^ 0x5FBEF45AL))), l_669))), 0xBE7CL)) > (-1L))) || p_14.f1))) != l_705), 0x48L)) < p_14.f4.f2.f4) > l_700) , l_687), p_14.f3.f1))) == g_430.f3.f7), 0x5AL));
                l_706 ^= l_700;
                if ((safe_div_func_uint64_t_u_u(((~(-1L)) < ((*l_718) = ((*l_717) = ((safe_add_func_uint16_t_u_u(65535UL, (g_152.f3.f1 == (safe_add_func_int8_t_s_s((l_669 || 0x0FL), (safe_sub_func_uint8_t_u_u((8L > ((((*g_429) != (*g_429)) , (void*)0) == l_716)), p_14.f4.f2.f5))))))) >= g_152.f4.f2.f2)))), l_669)))
                { 
                    int32_t *l_719 = &l_612[0];
                    int32_t *l_720[2][1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_720[i][j] = &l_612[0];
                    }
                    g_725--;
                }
                else
                { 
                    g_77 = (safe_div_func_int64_t_s_s(p_14.f3.f5, 0x69A2C6E676F4842BLL));
                    return g_430.f4.f2.f4;
                }
            }
            (*l_730) = (-9L);
            if ((((void*)0 == l_731[0]) ^ ((((safe_mod_func_uint32_t_u_u(((void*)0 != l_734), ((*l_736) = ((*l_730) = p_14.f3.f2)))) <= (safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s(0x06L, l_687)), 18446744073709551614UL))) < 0UL) != p_14.f3.f4)))
            { 
                uint32_t l_744 = 0xA56731AAL;
                (*l_730) = p_14.f4.f2.f7;
                if (((*l_736) = l_721[0]))
                { 
                    return p_14.f5;
                }
                else
                { 
                    int32_t **l_741 = &l_736;
                    if (l_684)
                        break;
                    (*l_741) = &l_722[6];
                }
                for (l_459 = 0; (l_459 != (-19)); --l_459)
                { 
                    return l_744;
                }
            }
            else
            { 
                int32_t l_766 = 0x712815B0L;
                int32_t l_768 = 0x400C1D96L;
                int32_t l_769 = (-1L);
                int16_t *l_783[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_783[i] = &l_763;
                for (p_14.f4.f2.f1 = 0; (p_14.f4.f2.f1 <= 0); p_14.f4.f2.f1 += 1)
                { 
                    int32_t **l_745[2][7][1] = {{{(void*)0},{&l_730},{(void*)0},{&l_730},{(void*)0},{&l_730},{(void*)0}},{{&l_730},{(void*)0},{&l_730},{(void*)0},{&l_730},{(void*)0},{&l_730}}};
                    int32_t **l_746 = &l_461;
                    int i, j, k;
                    (*l_746) = (*l_460);
                    return g_206.f0.f2.f6;
                }
                if (g_152.f3.f1)
                    goto lbl_747;
                if ((((*l_734) = (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((*g_587) <= ((safe_add_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((l_758 , (l_558[1][4] != l_759)), g_760[4][6])), (safe_rshift_func_int16_t_s_u(l_763, (safe_lshift_func_uint16_t_u_u((p_14.f5 & (**g_273)), 15)))))) > p_14.f5), 5L)) | p_14.f3.f7)) != (*l_730)), p_14.f4.f3)), 1UL))) >= l_766))
                { 
                    (*l_730) = (p_14.f5 = (((*l_736) = (*l_730)) == 0x41358316L));
                    return g_251;
                }
                else
                { 
                    int32_t *l_767[2][7][4] = {{{(void*)0,&l_722[2],&l_722[2],(void*)0},{&l_722[6],&l_722[2],&l_474,&l_722[2]},{&l_722[2],&l_721[0],&l_474,&l_474},{&l_722[6],&l_722[6],&l_722[2],&l_474},{(void*)0,&l_721[0],(void*)0,&l_722[2]},{(void*)0,&l_722[2],&l_722[2],(void*)0},{&l_722[6],&l_722[2],&l_474,&l_722[2]}},{{&l_722[2],&l_721[0],&l_474,&l_474},{&l_722[6],&l_722[6],&l_722[2],&l_474},{(void*)0,&l_721[0],(void*)0,&l_722[2]},{(void*)0,&l_722[2],&l_722[2],(void*)0},{&l_722[6],&l_722[2],&l_474,&l_722[2]},{&l_722[2],&l_721[0],&l_474,&l_474},{&l_722[6],&l_722[6],&l_722[2],&l_474}}};
                    int16_t *l_782 = &l_763;
                    uint8_t *l_791 = &g_616;
                    int i, j, k;
                    if (p_14.f3.f3)
                        break;
                    l_770++;
                    (*l_736) ^= (safe_mul_func_int16_t_s_s(p_14.f3.f3, (safe_mod_func_uint16_t_u_u((~((((l_768 | 252UL) & (p_14.f4.f2.f0 = ((((safe_sub_func_uint32_t_u_u(((safe_div_func_int64_t_s_s((((l_783[5] = l_782) == (l_784 = (*g_316))) , (safe_lshift_func_int16_t_s_s(((((*l_791) = (safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u((p_14.f2 , (g_430.f4.f3 >= 0xC865561AB883A08BLL)), 0x6FFB88EFL)) ^ l_684) >= 0xFB79DE12B651A0F7LL), 3))) && 249UL) & p_14.f6), l_769))), p_14.f4.f2.f1)) < l_792), 0x702A25E5L)) , (**g_273)) && l_768) & p_14.f0))) | p_14.f4.f2.f6) == p_14.f4.f2.f4)), p_14.f3.f3))));
                    if (l_769)
                        continue;
                    (*l_730) = (((*g_331) , (safe_div_func_int16_t_s_s(p_14.f1, p_14.f4.f2.f0))) , (safe_add_func_int64_t_s_s((-1L), (l_684 && (l_768 = 0L)))));
                }
            }
        }
        for (p_14.f4.f2.f3 = 0; (p_14.f4.f2.f3 <= 1); p_14.f4.f2.f3 += 1)
        { 
            return g_82;
        }
        g_363 = ((-1L) && ((safe_rshift_func_uint16_t_u_s(((*g_274) &= (safe_sub_func_int64_t_s_s((*g_587), (safe_add_func_int32_t_s_s(0xBDF019FFL, (safe_sub_func_uint8_t_u_u(1UL, 0x4BL))))))), (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((l_809 , ((*l_812) = (g_152.f5 = (safe_sub_func_uint8_t_u_u(247UL, p_14.f4.f2.f3))))), p_14.f2)), p_14.f5)))) & l_770));
    }
    return g_430.f4.f2.f0;
}



static struct S1 * func_16(struct S1 * const  p_17, struct S2  p_18)
{ 
    uint32_t l_218 = 0x218EFC80L;
    int32_t l_254 = 0x535F5427L;
    int16_t *l_281 = &g_82;
    int16_t ** const l_280[3] = {&l_281,&l_281,&l_281};
    uint32_t l_326 = 3UL;
    struct S0 *l_347[4][2][3] = {{{&g_206.f0.f2,&g_206.f0.f2,&g_22.f2},{&g_206.f0.f2,&g_206.f0.f2,&g_206.f0.f2}},{{&g_206.f0.f2,&g_206.f0.f2,&g_206.f0.f2},{&g_206.f0.f2,(void*)0,&g_22.f2}},{{&g_206.f0.f2,(void*)0,&g_206.f0.f2},{&g_206.f0.f2,&g_206.f0.f2,&g_22.f2}},{{&g_206.f0.f2,&g_206.f0.f2,&g_206.f0.f2},{&g_206.f0.f2,&g_206.f0.f2,&g_206.f0.f2}}};
    struct S3 l_352 = {1UL,0UL,0x88L,{0x15E6A3BF0C357149LL,6UL,0UL,0x63258D6AF7FF2847LL,0xBCC76579L,0x1EBFE72AL,65530UL,0xD6955B33C5C16733LL},{1UL,18446744073709551610UL,{0xBECCE36594061D5ELL,0x1944EAD3L,0UL,0UL,1UL,0x81EA6BDBL,0xCB07L,0x589898A9D4E29CCFLL},0UL},0L,0UL};
    int8_t l_359 = 0x9AL;
    struct S1 **l_365[3];
    struct S1 *** const l_364[7][5][6] = {{{&l_365[2],&l_365[1],&l_365[1],&l_365[1],&l_365[1],(void*)0},{(void*)0,&l_365[1],&l_365[1],&l_365[1],&l_365[2],&l_365[1]},{&l_365[1],&l_365[0],&l_365[1],&l_365[2],&l_365[1],&l_365[0]},{&l_365[1],&l_365[2],(void*)0,&l_365[1],&l_365[1],&l_365[1]},{&l_365[1],(void*)0,(void*)0,&l_365[1],&l_365[0],&l_365[0]}},{{&l_365[1],&l_365[1],&l_365[1],&l_365[1],&l_365[1],&l_365[1]},{&l_365[1],&l_365[1],&l_365[1],&l_365[1],&l_365[1],(void*)0},{&l_365[1],(void*)0,&l_365[1],&l_365[2],&l_365[2],&l_365[1]},{&l_365[1],&l_365[1],(void*)0,(void*)0,&l_365[1],(void*)0},{&l_365[1],&l_365[1],&l_365[1],(void*)0,&l_365[1],(void*)0}},{{&l_365[0],&l_365[1],(void*)0,&l_365[1],(void*)0,&l_365[1]},{&l_365[1],&l_365[0],&l_365[1],&l_365[1],&l_365[1],(void*)0},{&l_365[1],&l_365[1],&l_365[1],&l_365[1],&l_365[1],&l_365[1]},{&l_365[1],&l_365[1],&l_365[1],&l_365[1],&l_365[1],&l_365[0]},{&l_365[2],&l_365[1],(void*)0,&l_365[1],&l_365[1],&l_365[1]}},{{&l_365[2],&l_365[2],(void*)0,&l_365[2],&l_365[1],&l_365[0]},{&l_365[0],&l_365[2],&l_365[1],&l_365[2],&l_365[1],&l_365[1]},{&l_365[2],&l_365[1],&l_365[1],&l_365[0],&l_365[1],&l_365[0]},{&l_365[1],&l_365[1],&l_365[2],&l_365[1],(void*)0,(void*)0},{(void*)0,(void*)0,&l_365[1],&l_365[1],(void*)0,&l_365[1]}},{{&l_365[2],&l_365[1],&l_365[1],&l_365[1],(void*)0,&l_365[1]},{(void*)0,&l_365[2],&l_365[1],(void*)0,&l_365[1],(void*)0},{&l_365[1],&l_365[1],&l_365[2],&l_365[1],&l_365[0],&l_365[0]},{&l_365[1],(void*)0,&l_365[1],(void*)0,(void*)0,&l_365[1]},{&l_365[1],&l_365[1],&l_365[1],&l_365[1],&l_365[2],(void*)0}},{{&l_365[1],(void*)0,&l_365[0],&l_365[1],&l_365[1],&l_365[1]},{(void*)0,&l_365[2],&l_365[0],(void*)0,&l_365[1],(void*)0},{(void*)0,&l_365[1],&l_365[1],(void*)0,(void*)0,&l_365[1]},{(void*)0,(void*)0,&l_365[1],&l_365[1],&l_365[1],&l_365[0]},{&l_365[1],&l_365[2],&l_365[2],&l_365[2],&l_365[1],(void*)0}},{{&l_365[1],&l_365[2],&l_365[1],&l_365[1],&l_365[2],&l_365[1]},{(void*)0,&l_365[1],&l_365[1],&l_365[2],(void*)0,&l_365[1]},{&l_365[1],(void*)0,&l_365[1],(void*)0,&l_365[1],(void*)0},{(void*)0,&l_365[1],&l_365[2],&l_365[1],&l_365[1],&l_365[0]},{&l_365[1],&l_365[2],&l_365[1],(void*)0,(void*)0,&l_365[1]}}};
    int32_t *l_413 = &g_152.f5;
    int32_t **l_412[4] = {&l_413,&l_413,&l_413,&l_413};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_365[i] = &g_21;
    for (g_152.f4.f2.f7 = 0; (g_152.f4.f2.f7 >= 56); g_152.f4.f2.f7 = safe_add_func_int16_t_s_s(g_152.f4.f2.f7, 8))
    { 
        int32_t *l_209 = &g_152.f5;
        (*l_209) = 1L;
    }
    for (p_18.f4 = 0; (p_18.f4 <= 1); p_18.f4 += 1)
    { 
        int16_t l_214 = 0x4F30L;
        int16_t *l_215[1];
        uint64_t *l_219 = (void*)0;
        uint64_t *l_220[6][3][5] = {{{&g_152.f4.f2.f7,(void*)0,&g_152.f4.f2.f7,&g_152.f4.f2.f7,&g_22.f2.f3},{&g_22.f2.f7,&g_152.f4.f2.f7,(void*)0,&g_152.f4.f2.f7,&g_22.f2.f7},{&g_152.f4.f2.f7,&g_22.f2.f7,(void*)0,&g_22.f2.f3,&g_22.f2.f7}},{{&g_22.f2.f7,&g_22.f2.f7,&g_22.f2.f7,&g_22.f2.f7,&g_22.f2.f3},{&g_152.f4.f2.f7,&g_152.f4.f2.f7,&g_206.f0.f2.f7,&g_22.f2.f7,&g_22.f2.f7},{&g_152.f4.f2.f7,&g_22.f2.f7,&g_152.f4.f2.f7,&g_22.f2.f3,&g_22.f2.f7}},{{&g_22.f2.f7,(void*)0,&g_22.f2.f3,&g_22.f2.f7,&g_22.f2.f3},{&g_152.f4.f2.f7,&g_152.f4.f2.f7,(void*)0,&g_22.f2.f7,&g_152.f4.f2.f7},{&g_152.f4.f2.f7,&g_152.f4.f2.f7,&g_22.f2.f3,&g_22.f2.f3,&g_152.f4.f2.f7}},{{&g_152.f4.f2.f7,&g_22.f2.f7,&g_152.f4.f2.f7,&g_152.f4.f2.f7,&g_22.f2.f3},{&g_152.f4.f2.f7,&g_152.f4.f2.f7,&g_206.f0.f2.f7,&g_152.f4.f2.f7,&g_152.f4.f2.f7},{&g_152.f4.f2.f7,&g_152.f4.f2.f7,&g_22.f2.f7,&g_22.f2.f3,&g_152.f4.f2.f7}},{{&g_152.f4.f2.f7,(void*)0,(void*)0,&g_152.f4.f2.f7,&g_22.f2.f3},{&g_152.f4.f2.f7,&g_22.f2.f7,(void*)0,&g_152.f4.f2.f7,&g_152.f4.f2.f7},{&g_152.f4.f2.f7,&g_152.f4.f2.f7,&g_152.f4.f2.f7,&g_22.f2.f3,&g_152.f4.f2.f7}},{{&g_152.f4.f2.f7,&g_22.f2.f7,&g_22.f2.f3,&g_152.f4.f2.f7,&g_22.f2.f3},{&g_22.f2.f7,&g_152.f4.f2.f7,&g_22.f2.f7,(void*)0,&g_22.f2.f3},{&g_22.f2.f7,&g_22.f2.f3,&g_152.f6,&g_152.f6,&g_22.f2.f3}}};
        int32_t l_221 = (-8L);
        int32_t *l_223 = &g_183;
        int32_t **l_222 = &l_223;
        uint16_t *l_224 = &g_22.f2.f2;
        int32_t *l_225 = &g_77;
        int32_t l_226 = 0xE85BA4B4L;
        int64_t *l_227 = (void*)0;
        int64_t *l_228 = (void*)0;
        int64_t *l_229 = &g_152.f4.f2.f0;
        uint32_t *l_230[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_231 = &g_83;
        int64_t l_265 = 0x78DC2BEDC92A4B13LL;
        struct S0 l_267 = {0x9F541C69828AE584LL,0UL,0x0D98L,0UL,0x1748FBCAL,0xF82D76ADL,0UL,0xC0C6FC5E1DF802B5LL};
        struct S3 l_279 = {0x05L,6UL,0x13L,{-9L,6UL,0xB4CDL,0x7BF0322432923FA3LL,7UL,1UL,0x6154L,0xF4178D8C225B8D58LL},{0x16072BF6L,0xCE069CBDL,{0x80C4930CA31D4DF0LL,0xBBEBAFA8L,0xBE3DL,0xDF1C7AB2B4A36ACELL,18446744073709551615UL,0UL,65532UL,2UL},0xD9L},-9L,0x164EA6D074E60A2CLL};
        struct S1 l_308 = {18446744073709551615UL,0x345F09B3L,{-8L,0x933B0674L,0xD05FL,0x6E6DCB5F9788EBA3LL,0UL,4294967293UL,65535UL,18446744073709551615UL},255UL};
        struct S1 **l_311[4];
        union U4 l_360 = {0L};
        int32_t *l_366[2];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_215[i] = &g_66;
        for (i = 0; i < 4; i++)
            l_311[i] = &g_21;
        for (i = 0; i < 2; i++)
            l_366[i] = &l_221;
    }
    g_429 = &g_21;
    return (*g_429);
}



static struct S1 * func_19(struct S1 * p_20)
{ 
    struct S1 *l_59[6] = {&g_22,&g_22,&g_22,&g_22,&g_22,&g_22};
    int32_t l_64 = 0x41C8DEFAL;
    uint64_t l_106[7] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    struct S2 l_115 = {{18446744073709551611UL,18446744073709551612UL,{0L,0xA44FB719L,0xDC9CL,0xB98C823E5249ECE0LL,0xAE0DD45DL,4294967295UL,65535UL,18446744073709551606UL},5UL},0x5239L,0x3281A18FF7EC8282LL,1UL,1UL};
    int32_t l_140 = 0xD1AC27F1L;
    int32_t l_141 = 0xEDFECE9AL;
    int32_t l_142 = (-1L);
    int32_t l_143 = (-1L);
    int32_t l_144[1][2][3] = {{{(-1L),(-1L),(-1L)},{0x5F61B82DL,0x5F61B82DL,0x5F61B82DL}}};
    uint16_t *l_177 = &l_115.f3;
    uint16_t **l_176 = &l_177;
    uint32_t l_181 = 0xE767B251L;
    int32_t *l_182 = &g_183;
    int32_t *l_194 = &l_140;
    int32_t *l_195 = &l_144[0][0][0];
    int32_t *l_196 = &g_77;
    int32_t *l_197 = (void*)0;
    int32_t *l_198 = &g_152.f5;
    int32_t *l_199 = &l_144[0][1][2];
    int32_t *l_200 = (void*)0;
    int32_t *l_201 = &l_143;
    int32_t *l_202 = &l_143;
    uint8_t l_203 = 0x9EL;
    int i, j, k;
    for (g_22.f2.f2 = 0; (g_22.f2.f2 <= 16); g_22.f2.f2 = safe_add_func_int8_t_s_s(g_22.f2.f2, 1))
    { 
        struct S1 *l_46 = &g_22;
        int32_t l_63 = (-2L);
        uint16_t l_89 = 65529UL;
        int32_t *l_95 = &l_63;
        struct S2 l_118 = {{18446744073709551615UL,0xD1818C57L,{0xBE0CD2700C1A7E2DLL,1UL,65527UL,0x4678B7D319A83302LL,0UL,0UL,65530UL,0x73DE08B5220E952BLL},0x29L},0x55A8L,0L,0xA8B2L,4294967291UL};
        int32_t l_139 = (-1L);
        int32_t l_145[2];
        int i;
        for (i = 0; i < 2; i++)
            l_145[i] = 6L;
        for (g_22.f2.f5 = 0; (g_22.f2.f5 != 56); g_22.f2.f5 = safe_add_func_uint16_t_u_u(g_22.f2.f5, 4))
        { 
            int32_t l_27 = 0x158D97F9L;
            struct S1 *l_47[7];
            int i;
            for (i = 0; i < 7; i++)
                l_47[i] = &g_22;
            if (l_27)
            { 
                struct S1 *l_44 = (void*)0;
                struct S1 **l_45 = &l_44;
                struct S1 **l_48[1];
                int32_t l_58 = 1L;
                const struct S1 *l_61[2];
                const struct S1 **l_60 = &l_61[0];
                int16_t *l_65 = &g_66;
                struct S1 *l_88 = &g_22;
                int32_t *l_90 = &g_83;
                int32_t *l_91 = &l_64;
                int i;
                for (i = 0; i < 1; i++)
                    l_48[i] = &g_21;
                for (i = 0; i < 2; i++)
                    l_61[i] = &g_62;
                (*l_91) = ((*l_90) &= ((((safe_div_func_int16_t_s_s((func_30(func_36(func_40(((*l_45) = l_44), (l_46 != (p_20 = l_47[2])), ((*l_65) = (safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(250UL, (((safe_mod_func_int32_t_s_s((~((l_58 , l_59[2]) != ((*l_60) = (void*)0))), l_63)) < 0L) != g_62.f2.f5))), l_64)))), g_22.f2.f3, g_22.f2.f1), l_88, l_63, l_27, l_89) >= l_27), l_58)) <= l_64) || l_64) < g_62.f2.f2));
                for (g_22.f0 = (-11); (g_22.f0 == 53); g_22.f0 = safe_add_func_int8_t_s_s(g_22.f0, 9))
                { 
                    int32_t **l_94 = &l_91;
                    (*l_94) = &l_64;
                    return p_20;
                }
                l_95 = &l_58;
                if ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(l_27, 13)) ^ ((*l_91) == (!((*l_90) || 0x89851559L)))), 2)), 4)))
                { 
                    (*l_90) ^= ((-7L) > 1L);
                    g_83 = g_22.f1;
                }
                else
                { 
                    return l_46;
                }
                (*l_91) |= (safe_mul_func_uint8_t_u_u(0x79L, 0UL));
            }
            else
            { 
                int32_t *l_105[5][5][4] = {{{(void*)0,&g_77,&l_64,&g_83},{(void*)0,&l_63,&g_2,&l_63},{&g_77,&l_64,&l_64,&l_64},{(void*)0,&g_83,&l_63,&g_77},{(void*)0,(void*)0,(void*)0,&g_83}},{{&g_83,(void*)0,(void*)0,&g_2},{&g_83,&l_64,&l_64,(void*)0},{(void*)0,&l_64,&l_64,&g_83},{&g_83,&l_64,(void*)0,&g_77},{&g_83,(void*)0,(void*)0,&l_63}},{{(void*)0,&l_63,&l_63,&l_64},{(void*)0,(void*)0,&l_64,&l_64},{&g_77,&g_77,&g_2,(void*)0},{(void*)0,&g_83,&l_64,&l_63},{(void*)0,&g_77,&l_63,&l_64}},{{&g_2,&g_77,&l_64,&l_63},{&g_77,&g_83,(void*)0,(void*)0},{&l_64,&g_77,&l_64,&l_64},{&l_63,(void*)0,&g_77,&l_64},{&l_64,&l_63,&g_83,&l_63}},{{&l_64,(void*)0,&l_64,&g_77},{&g_77,&l_64,&g_83,&g_83},{&l_63,&l_64,(void*)0,(void*)0},{&l_63,&l_64,&g_83,&g_2},{&g_77,(void*)0,&l_64,&g_83}}};
                int i, j, k;
                l_106[1]++;
            }
            return p_20;
        }
        for (g_84 = (-5); (g_84 != 49); g_84 = safe_add_func_int8_t_s_s(g_84, 6))
        { 
            int16_t *l_116 = &g_66;
            int32_t l_126 = 0x40D53DA7L;
            int32_t l_168[4][5] = {{(-3L),0xB5915617L,(-3L),(-1L),(-1L)},{0x5F6443CEL,1L,0x5F6443CEL,(-1L),(-1L)},{(-3L),0xB5915617L,(-3L),(-1L),(-1L)},{0x5F6443CEL,1L,0x5F6443CEL,(-1L),(-1L)}};
            int i, j;
            for (g_22.f2.f7 = 0; (g_22.f2.f7 <= 5); g_22.f2.f7 += 1)
            { 
                const int16_t *l_117[5] = {&g_82,&g_82,&g_82,&g_82,&g_82};
                int32_t l_123 = 0x3E09CE5FL;
                const uint16_t *l_150 = &l_115.f1;
                const uint16_t **l_149 = &l_150;
                const uint16_t ***l_151 = &l_149;
                int8_t *l_160 = &g_161[0][1][1];
                int32_t l_167 = 1L;
                int i;
                for (l_89 = 0; (l_89 <= 5); l_89 += 1)
                { 
                    int16_t **l_119 = &l_116;
                    uint16_t *l_120 = &l_118.f1;
                    int32_t l_129 = 0x3C06E78EL;
                    int32_t *l_134 = &l_129;
                    int32_t *l_135 = (void*)0;
                    int32_t *l_136 = &g_83;
                    int32_t *l_137 = &l_64;
                    int32_t *l_138[5][3];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_138[i][j] = &l_64;
                    }
                    (*l_95) = ((safe_sub_func_uint8_t_u_u(0x0AL, (-6L))) && (safe_sub_func_int8_t_s_s(0x66L, (((l_115 , l_116) != l_117[1]) ^ ((((*l_120) = (((l_118 , (void*)0) == l_119) , 7UL)) ^ 0UL) >= 0UL)))));
                    (*l_95) &= (((l_123 ^ (safe_add_func_uint32_t_u_u(l_126, (safe_mod_func_int64_t_s_s(l_123, l_129))))) ^ 0L) & ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_126 | l_123), 0xA4L)), g_22.f2.f3)) >= l_129));
                    g_146--;
                    l_59[g_22.f2.f7] = l_59[l_89];
                }
                if (l_126)
                    break;
                (*l_151) = l_149;
                if ((g_152 , (l_126 = ((!(safe_lshift_func_int8_t_s_u(((*p_20) , (l_123 = ((*l_160) = (l_115.f0.f2.f5 , (((safe_sub_func_uint64_t_u_u(l_126, (safe_sub_func_uint32_t_u_u(0x8598D332L, 7L)))) != l_115.f0.f0) > l_126))))), 1))) < g_152.f4.f2.f2))))
                { 
                    return p_20;
                }
                else
                { 
                    uint16_t *l_166[7] = {&l_115.f0.f2.f6,&l_115.f0.f2.f6,&l_115.f0.f2.f6,&l_115.f0.f2.f6,&l_115.f0.f2.f6,&l_115.f0.f2.f6,&l_115.f0.f2.f6};
                    int i;
                    (*l_95) = (safe_add_func_uint64_t_u_u(l_123, (safe_add_func_uint8_t_u_u(((g_152.f4.f2.f6--) <= g_152.f3.f6), (0x23L | (4294967295UL <= (safe_unary_minus_func_uint64_t_u((*l_95)))))))));
                    return p_20;
                }
            }
        }
        for (l_115.f0.f3 = 0; (l_115.f0.f3 > 40); l_115.f0.f3 = safe_add_func_int8_t_s_s(l_115.f0.f3, 1))
        { 
            (*l_95) = ((void*)0 != l_176);
            return &g_22;
        }
        return l_46;
    }
    (*l_194) |= ((safe_sub_func_int16_t_s_s((!(((((*l_182) = (l_144[0][0][2] = (l_141 , l_181))) , ((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(((((safe_add_func_int16_t_s_s(0x5C21L, g_82)) < (l_141 != (-3L))) != g_22.f2.f4) == g_152.f3.f0), g_62.f0)) || l_115.f0.f2.f7), 3)) ^ 8L) <= 4UL) == 2UL) , 1L), l_115.f0.f2.f0)), g_62.f2.f6)) != 0xAC6A4DF1L)) >= 0x5957L) != l_115.f0.f2.f2)), 1L)) | l_115.f4);
    (*l_195) &= (*l_194);
    l_203++;
    return &g_22;
}



static int64_t  func_30(struct S1 * p_31, struct S1 * p_32, int16_t  p_33, uint8_t  p_34, uint8_t  p_35)
{ 
    return p_35;
}



static struct S1 * func_36(struct S1 * const  p_37, uint64_t  p_38, uint32_t  p_39)
{ 
    struct S1 *l_87 = &g_22;
    return l_87;
}



static struct S1 * const  func_40(struct S1 * p_41, int8_t  p_42, int16_t  p_43)
{ 
    int16_t **l_70 = (void*)0;
    int16_t *l_71 = &g_66;
    int16_t *l_73[6][7] = {{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66}};
    int16_t **l_72 = &l_73[1][4];
    struct S2 l_74 = {{0x245343E2L,9UL,{7L,0x225D93BAL,5UL,18446744073709551610UL,18446744073709551615UL,4294967292UL,65535UL,0UL},0x74L},0x6AEAL,0L,5UL,0xDF6FF76FL};
    int32_t *l_75 = (void*)0;
    int32_t *l_76 = &g_77;
    int32_t l_78[3];
    int32_t *l_79 = &g_77;
    int32_t *l_80 = &l_78[0];
    int32_t *l_81[6] = {&l_78[0],&l_78[0],&l_78[0],&l_78[0],&l_78[0],&l_78[0]};
    int i, j;
    for (i = 0; i < 3; i++)
        l_78[i] = 0xC174B887L;
    (*l_76) = ((safe_mod_func_uint16_t_u_u(((l_71 = ((~p_42) , &p_43)) == ((*l_72) = &g_66)), 65535UL)) ^ ((g_21 = p_41) == (l_74 , (void*)0)));
    g_84--;
    return &g_22;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_22.f2.f0, "g_22.f2.f0", print_hash_value);
    transparent_crc(g_22.f2.f1, "g_22.f2.f1", print_hash_value);
    transparent_crc(g_22.f2.f2, "g_22.f2.f2", print_hash_value);
    transparent_crc(g_22.f2.f3, "g_22.f2.f3", print_hash_value);
    transparent_crc(g_22.f2.f4, "g_22.f2.f4", print_hash_value);
    transparent_crc(g_22.f2.f5, "g_22.f2.f5", print_hash_value);
    transparent_crc(g_22.f2.f6, "g_22.f2.f6", print_hash_value);
    transparent_crc(g_22.f2.f7, "g_22.f2.f7", print_hash_value);
    transparent_crc(g_22.f3, "g_22.f3", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_62.f1, "g_62.f1", print_hash_value);
    transparent_crc(g_62.f2.f0, "g_62.f2.f0", print_hash_value);
    transparent_crc(g_62.f2.f1, "g_62.f2.f1", print_hash_value);
    transparent_crc(g_62.f2.f2, "g_62.f2.f2", print_hash_value);
    transparent_crc(g_62.f2.f3, "g_62.f2.f3", print_hash_value);
    transparent_crc(g_62.f2.f4, "g_62.f2.f4", print_hash_value);
    transparent_crc(g_62.f2.f5, "g_62.f2.f5", print_hash_value);
    transparent_crc(g_62.f2.f6, "g_62.f2.f6", print_hash_value);
    transparent_crc(g_62.f2.f7, "g_62.f2.f7", print_hash_value);
    transparent_crc(g_62.f3, "g_62.f3", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_152.f0, "g_152.f0", print_hash_value);
    transparent_crc(g_152.f1, "g_152.f1", print_hash_value);
    transparent_crc(g_152.f2, "g_152.f2", print_hash_value);
    transparent_crc(g_152.f3.f0, "g_152.f3.f0", print_hash_value);
    transparent_crc(g_152.f3.f1, "g_152.f3.f1", print_hash_value);
    transparent_crc(g_152.f3.f2, "g_152.f3.f2", print_hash_value);
    transparent_crc(g_152.f3.f3, "g_152.f3.f3", print_hash_value);
    transparent_crc(g_152.f3.f4, "g_152.f3.f4", print_hash_value);
    transparent_crc(g_152.f3.f5, "g_152.f3.f5", print_hash_value);
    transparent_crc(g_152.f3.f6, "g_152.f3.f6", print_hash_value);
    transparent_crc(g_152.f3.f7, "g_152.f3.f7", print_hash_value);
    transparent_crc(g_152.f4.f0, "g_152.f4.f0", print_hash_value);
    transparent_crc(g_152.f4.f1, "g_152.f4.f1", print_hash_value);
    transparent_crc(g_152.f4.f2.f0, "g_152.f4.f2.f0", print_hash_value);
    transparent_crc(g_152.f4.f2.f1, "g_152.f4.f2.f1", print_hash_value);
    transparent_crc(g_152.f4.f2.f2, "g_152.f4.f2.f2", print_hash_value);
    transparent_crc(g_152.f4.f2.f3, "g_152.f4.f2.f3", print_hash_value);
    transparent_crc(g_152.f4.f2.f4, "g_152.f4.f2.f4", print_hash_value);
    transparent_crc(g_152.f4.f2.f5, "g_152.f4.f2.f5", print_hash_value);
    transparent_crc(g_152.f4.f2.f6, "g_152.f4.f2.f6", print_hash_value);
    transparent_crc(g_152.f4.f2.f7, "g_152.f4.f2.f7", print_hash_value);
    transparent_crc(g_152.f4.f3, "g_152.f4.f3", print_hash_value);
    transparent_crc(g_152.f5, "g_152.f5", print_hash_value);
    transparent_crc(g_152.f6, "g_152.f6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_161[i][j][k], "g_161[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_206.f0.f0, "g_206.f0.f0", print_hash_value);
    transparent_crc(g_206.f0.f1, "g_206.f0.f1", print_hash_value);
    transparent_crc(g_206.f0.f2.f0, "g_206.f0.f2.f0", print_hash_value);
    transparent_crc(g_206.f0.f2.f1, "g_206.f0.f2.f1", print_hash_value);
    transparent_crc(g_206.f0.f2.f2, "g_206.f0.f2.f2", print_hash_value);
    transparent_crc(g_206.f0.f2.f3, "g_206.f0.f2.f3", print_hash_value);
    transparent_crc(g_206.f0.f2.f4, "g_206.f0.f2.f4", print_hash_value);
    transparent_crc(g_206.f0.f2.f5, "g_206.f0.f2.f5", print_hash_value);
    transparent_crc(g_206.f0.f2.f6, "g_206.f0.f2.f6", print_hash_value);
    transparent_crc(g_206.f0.f2.f7, "g_206.f0.f2.f7", print_hash_value);
    transparent_crc(g_206.f0.f3, "g_206.f0.f3", print_hash_value);
    transparent_crc(g_206.f1, "g_206.f1", print_hash_value);
    transparent_crc(g_206.f2, "g_206.f2", print_hash_value);
    transparent_crc(g_206.f3, "g_206.f3", print_hash_value);
    transparent_crc(g_206.f4, "g_206.f4", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_258[i][j], "g_258[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_430.f0, "g_430.f0", print_hash_value);
    transparent_crc(g_430.f1, "g_430.f1", print_hash_value);
    transparent_crc(g_430.f2, "g_430.f2", print_hash_value);
    transparent_crc(g_430.f3.f0, "g_430.f3.f0", print_hash_value);
    transparent_crc(g_430.f3.f1, "g_430.f3.f1", print_hash_value);
    transparent_crc(g_430.f3.f2, "g_430.f3.f2", print_hash_value);
    transparent_crc(g_430.f3.f3, "g_430.f3.f3", print_hash_value);
    transparent_crc(g_430.f3.f4, "g_430.f3.f4", print_hash_value);
    transparent_crc(g_430.f3.f5, "g_430.f3.f5", print_hash_value);
    transparent_crc(g_430.f3.f6, "g_430.f3.f6", print_hash_value);
    transparent_crc(g_430.f3.f7, "g_430.f3.f7", print_hash_value);
    transparent_crc(g_430.f4.f0, "g_430.f4.f0", print_hash_value);
    transparent_crc(g_430.f4.f1, "g_430.f4.f1", print_hash_value);
    transparent_crc(g_430.f4.f2.f0, "g_430.f4.f2.f0", print_hash_value);
    transparent_crc(g_430.f4.f2.f1, "g_430.f4.f2.f1", print_hash_value);
    transparent_crc(g_430.f4.f2.f2, "g_430.f4.f2.f2", print_hash_value);
    transparent_crc(g_430.f4.f2.f3, "g_430.f4.f2.f3", print_hash_value);
    transparent_crc(g_430.f4.f2.f4, "g_430.f4.f2.f4", print_hash_value);
    transparent_crc(g_430.f4.f2.f5, "g_430.f4.f2.f5", print_hash_value);
    transparent_crc(g_430.f4.f2.f6, "g_430.f4.f2.f6", print_hash_value);
    transparent_crc(g_430.f4.f2.f7, "g_430.f4.f2.f7", print_hash_value);
    transparent_crc(g_430.f4.f3, "g_430.f4.f3", print_hash_value);
    transparent_crc(g_430.f5, "g_430.f5", print_hash_value);
    transparent_crc(g_430.f6, "g_430.f6", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_503.f0, "g_503.f0", print_hash_value);
    transparent_crc(g_546, "g_546", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_569[i][j][k], "g_569[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_760[i][j], "g_760[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_815.f0.f0, "g_815.f0.f0", print_hash_value);
    transparent_crc(g_815.f0.f1, "g_815.f0.f1", print_hash_value);
    transparent_crc(g_815.f0.f2.f0, "g_815.f0.f2.f0", print_hash_value);
    transparent_crc(g_815.f0.f2.f1, "g_815.f0.f2.f1", print_hash_value);
    transparent_crc(g_815.f0.f2.f2, "g_815.f0.f2.f2", print_hash_value);
    transparent_crc(g_815.f0.f2.f3, "g_815.f0.f2.f3", print_hash_value);
    transparent_crc(g_815.f0.f2.f4, "g_815.f0.f2.f4", print_hash_value);
    transparent_crc(g_815.f0.f2.f5, "g_815.f0.f2.f5", print_hash_value);
    transparent_crc(g_815.f0.f2.f6, "g_815.f0.f2.f6", print_hash_value);
    transparent_crc(g_815.f0.f2.f7, "g_815.f0.f2.f7", print_hash_value);
    transparent_crc(g_815.f0.f3, "g_815.f0.f3", print_hash_value);
    transparent_crc(g_815.f1, "g_815.f1", print_hash_value);
    transparent_crc(g_815.f2, "g_815.f2", print_hash_value);
    transparent_crc(g_815.f3, "g_815.f3", print_hash_value);
    transparent_crc(g_815.f4, "g_815.f4", print_hash_value);
    transparent_crc(g_939, "g_939", print_hash_value);
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_1076, "g_1076", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    transparent_crc(g_1086, "g_1086", print_hash_value);
    transparent_crc(g_1113.f0, "g_1113.f0", print_hash_value);
    transparent_crc(g_1199, "g_1199", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1236[i][j], "g_1236[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1266.f0, "g_1266.f0", print_hash_value);
    transparent_crc(g_1266.f1, "g_1266.f1", print_hash_value);
    transparent_crc(g_1266.f2, "g_1266.f2", print_hash_value);
    transparent_crc(g_1266.f3.f0, "g_1266.f3.f0", print_hash_value);
    transparent_crc(g_1266.f3.f1, "g_1266.f3.f1", print_hash_value);
    transparent_crc(g_1266.f3.f2, "g_1266.f3.f2", print_hash_value);
    transparent_crc(g_1266.f3.f3, "g_1266.f3.f3", print_hash_value);
    transparent_crc(g_1266.f3.f4, "g_1266.f3.f4", print_hash_value);
    transparent_crc(g_1266.f3.f5, "g_1266.f3.f5", print_hash_value);
    transparent_crc(g_1266.f3.f6, "g_1266.f3.f6", print_hash_value);
    transparent_crc(g_1266.f3.f7, "g_1266.f3.f7", print_hash_value);
    transparent_crc(g_1266.f4.f0, "g_1266.f4.f0", print_hash_value);
    transparent_crc(g_1266.f4.f1, "g_1266.f4.f1", print_hash_value);
    transparent_crc(g_1266.f4.f2.f0, "g_1266.f4.f2.f0", print_hash_value);
    transparent_crc(g_1266.f4.f2.f1, "g_1266.f4.f2.f1", print_hash_value);
    transparent_crc(g_1266.f4.f2.f2, "g_1266.f4.f2.f2", print_hash_value);
    transparent_crc(g_1266.f4.f2.f3, "g_1266.f4.f2.f3", print_hash_value);
    transparent_crc(g_1266.f4.f2.f4, "g_1266.f4.f2.f4", print_hash_value);
    transparent_crc(g_1266.f4.f2.f5, "g_1266.f4.f2.f5", print_hash_value);
    transparent_crc(g_1266.f4.f2.f6, "g_1266.f4.f2.f6", print_hash_value);
    transparent_crc(g_1266.f4.f2.f7, "g_1266.f4.f2.f7", print_hash_value);
    transparent_crc(g_1266.f4.f3, "g_1266.f4.f3", print_hash_value);
    transparent_crc(g_1266.f5, "g_1266.f5", print_hash_value);
    transparent_crc(g_1266.f6, "g_1266.f6", print_hash_value);
    transparent_crc(g_1333.f0, "g_1333.f0", print_hash_value);
    transparent_crc(g_1333.f1, "g_1333.f1", print_hash_value);
    transparent_crc(g_1333.f2.f0, "g_1333.f2.f0", print_hash_value);
    transparent_crc(g_1333.f2.f1, "g_1333.f2.f1", print_hash_value);
    transparent_crc(g_1333.f2.f2, "g_1333.f2.f2", print_hash_value);
    transparent_crc(g_1333.f2.f3, "g_1333.f2.f3", print_hash_value);
    transparent_crc(g_1333.f2.f4, "g_1333.f2.f4", print_hash_value);
    transparent_crc(g_1333.f2.f5, "g_1333.f2.f5", print_hash_value);
    transparent_crc(g_1333.f2.f6, "g_1333.f2.f6", print_hash_value);
    transparent_crc(g_1333.f2.f7, "g_1333.f2.f7", print_hash_value);
    transparent_crc(g_1333.f3, "g_1333.f3", print_hash_value);
    transparent_crc(g_1380, "g_1380", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
