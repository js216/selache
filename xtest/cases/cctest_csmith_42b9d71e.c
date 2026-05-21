// SPDX-License-Identifier: MIT
// cctest_csmith_42b9d71e.c --- cctest case csmith_42b9d71e (csmith seed 1119475486)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc8526b4f */

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

// Options:   -s 1119475486 -o /tmp/csmith_gen_p2yrav_7/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   int64_t  f3;
   int8_t  f4;
   int32_t  f5;
   int8_t  f6;
   int8_t  f7;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint64_t  f0;
   int16_t  f1;
   int32_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

union U3 {
   uint32_t  f0;
   int8_t * f1;
};


static uint64_t g_4 = 0UL;
static int32_t g_7 = 0x583DC0E3L;
static int32_t *g_8[6][4][1] = {{{&g_7},{&g_7},{&g_7},{&g_7}},{{&g_7},{&g_7},{&g_7},{&g_7}},{{&g_7},{&g_7},{&g_7},{&g_7}},{{&g_7},{&g_7},{&g_7},{&g_7}},{{&g_7},{&g_7},{&g_7},{&g_7}},{{&g_7},{&g_7},{&g_7},{&g_7}}};
static uint8_t g_88 = 6UL;
static uint8_t g_90[4][3] = {{0x42L,1UL,0x42L},{0x42L,1UL,0x42L},{0x42L,1UL,0x42L},{0x42L,1UL,0x42L}};
static uint16_t g_100 = 0UL;
static uint16_t g_103 = 0x85ECL;
static uint32_t g_115 = 0x066FE94EL;
static int32_t g_133 = (-5L);
static struct S2 g_152[1] = {{1UL,0xD412L,0xDA18C3DDL,0xE6EDD9AEL}};
static struct S0 g_166[3] = {{18446744073709551607UL,0x67336551L,0UL,0x2B85DA368D0BCE42LL,1L,-9L,0x10L,0x9EL},{18446744073709551607UL,0x67336551L,0UL,0x2B85DA368D0BCE42LL,1L,-9L,0x10L,0x9EL},{18446744073709551607UL,0x67336551L,0UL,0x2B85DA368D0BCE42LL,1L,-9L,0x10L,0x9EL}};
static int16_t g_167 = 0xB0F9L;
static struct S1 *g_169 = (void*)0;
static union U3 g_184 = {2UL};
static uint32_t *g_188 = &g_115;
static uint32_t **g_187 = &g_188;
static struct S1 g_216 = {1UL};
static uint32_t ***g_254[7] = {&g_187,&g_187,&g_187,&g_187,&g_187,&g_187,&g_187};
static uint32_t ****g_253 = &g_254[3];
static uint32_t *****g_252 = &g_253;
static struct S0 *g_275 = &g_166[0];
static uint64_t g_348 = 18446744073709551610UL;
static union U3 **g_360 = (void*)0;
static int32_t **g_362[3] = {&g_8[4][2][0],&g_8[4][2][0],&g_8[4][2][0]};
static int32_t ***g_361[1][2] = {{&g_362[2],&g_362[2]}};
static struct S2 *g_377 = &g_152[0];
static struct S2 **g_376[1][5] = {{&g_377,&g_377,&g_377,&g_377,&g_377}};
static const struct S2 g_384 = {0xC14887EBCF771EE4LL,-9L,-6L,18446744073709551611UL};
static uint16_t *g_556 = &g_100;
static int32_t g_588 = 0x97DD5C21L;
static int8_t *g_589 = (void*)0;
static struct S0 g_611[5] = {{0x2817B907L,0xB1CED363L,0xB3CE59AD53B0B7C5LL,1L,0xDDL,0L,9L,0x5AL},{0x2817B907L,0xB1CED363L,0xB3CE59AD53B0B7C5LL,1L,0xDDL,0L,9L,0x5AL},{0x2817B907L,0xB1CED363L,0xB3CE59AD53B0B7C5LL,1L,0xDDL,0L,9L,0x5AL},{0x2817B907L,0xB1CED363L,0xB3CE59AD53B0B7C5LL,1L,0xDDL,0L,9L,0x5AL},{0x2817B907L,0xB1CED363L,0xB3CE59AD53B0B7C5LL,1L,0xDDL,0L,9L,0x5AL}};
static const uint16_t g_622 = 65532UL;
static struct S2 ***g_708 = &g_376[0][0];
static struct S2 ***g_709 = &g_376[0][4];
static int32_t *** const *g_749 = (void*)0;
static int32_t *** const **g_748 = &g_749;
static struct S1 * const *g_797 = &g_169;
static int16_t g_851 = 0xF8F9L;
static int8_t g_927 = (-1L);
static union U3 g_1084 = {4294967295UL};
static int32_t *g_1097[1] = {(void*)0};
static int32_t **g_1096 = &g_1097[0];
static const struct S0 g_1113 = {3UL,0x48DA5711L,0x5D5AFAD79D5D11B9LL,-8L,4L,-1L,0x62L,0L};
static uint64_t g_1189 = 0x78E68CFB25697230LL;
static struct S0 **g_1195[2] = {&g_275,&g_275};
static struct S0 ***g_1194 = &g_1195[0];
static struct S0 ***g_1198 = (void*)0;
static int64_t *g_1227 = &g_611[2].f3;
static int8_t g_1335 = (-1L);
static int16_t g_1336 = 0L;
static int32_t **g_1362[1] = {(void*)0};
static int8_t g_1394[6] = {0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L};
static union U3 ***g_1464 = &g_360;
static union U3 ****g_1463 = &g_1464;
static union U3 *****g_1462 = &g_1463;
static uint64_t g_1468 = 1UL;
static int64_t g_1484[2] = {0L,0L};
static int32_t ** const **g_1513 = (void*)0;
static const int32_t *g_1524 = &g_166[1].f5;
static const int32_t **g_1523 = &g_1524;
static const int32_t ***g_1522 = &g_1523;
static int64_t g_1576 = (-5L);
static uint64_t *g_1581 = (void*)0;
static uint64_t * const *g_1580 = &g_1581;
static uint64_t * const **g_1579 = &g_1580;
static uint64_t * const ***g_1578 = &g_1579;
static struct S1 ****g_1588 = (void*)0;
static int64_t g_1725 = 4L;
static uint16_t g_1727[3][3][2] = {{{8UL,0xD711L},{8UL,8UL},{0xD711L,8UL}},{{8UL,0xD711L},{8UL,8UL},{0xD711L,8UL}},{{8UL,0xD711L},{8UL,8UL},{0xD711L,8UL}}};
static uint64_t **g_1750 = (void*)0;
static uint64_t ***g_1749 = &g_1750;
static const struct S1 *****g_1766 = (void*)0;
static uint32_t g_1856 = 0x3434EBC8L;
static union U3 * const g_1865[5][1] = {{&g_1084},{&g_1084},{&g_1084},{&g_1084},{&g_1084}};
static const struct S0 *g_1910 = &g_166[1];
static const struct S0 **g_1909 = &g_1910;
static uint32_t g_2003 = 0x8597EB5FL;
static struct S1 ***g_2051 = (void*)0;
static uint16_t **g_2055 = (void*)0;
static uint16_t ***g_2054 = &g_2055;
static int64_t g_2147[6][3][6] = {{{1L,0x5837069AAEB0C8D9LL,0x8936BB2FC288D6F1LL,0x5837069AAEB0C8D9LL,1L,0L},{7L,0x5947182C73545BE4LL,(-1L),0L,1L,0x5837069AAEB0C8D9LL},{0x12C03D8830F48775LL,0x5837069AAEB0C8D9LL,1L,0x5947182C73545BE4LL,1L,0x5837069AAEB0C8D9LL}},{{1L,0x25B7F87256FF6ADFLL,(-1L),0x98B977632338F477LL,0x8936BB2FC288D6F1LL,0L},{1L,0x47E80D5247F44F2ELL,0x8936BB2FC288D6F1LL,0x5947182C73545BE4LL,(-1L),0x5947182C73545BE4LL},{0x12C03D8830F48775LL,0x47E80D5247F44F2ELL,0x12C03D8830F48775LL,0L,0x8936BB2FC288D6F1LL,0x98B977632338F477LL}},{{7L,0x25B7F87256FF6ADFLL,0x12C03D8830F48775LL,0x5837069AAEB0C8D9LL,1L,0x5947182C73545BE4LL},{1L,0x5837069AAEB0C8D9LL,0x8936BB2FC288D6F1LL,0x5837069AAEB0C8D9LL,1L,0L},{7L,0x5947182C73545BE4LL,(-1L),0L,1L,0x5837069AAEB0C8D9LL}},{{0x12C03D8830F48775LL,0x5837069AAEB0C8D9LL,1L,0x5947182C73545BE4LL,1L,0x5837069AAEB0C8D9LL},{1L,0x25B7F87256FF6ADFLL,(-1L),0x98B977632338F477LL,0x8936BB2FC288D6F1LL,0L},{1L,0x47E80D5247F44F2ELL,0x8936BB2FC288D6F1LL,0x5947182C73545BE4LL,(-1L),0x5947182C73545BE4LL}},{{0x12C03D8830F48775LL,0x47E80D5247F44F2ELL,0x12C03D8830F48775LL,0L,0x8936BB2FC288D6F1LL,0x98B977632338F477LL},{7L,0x25B7F87256FF6ADFLL,0x12C03D8830F48775LL,0x5837069AAEB0C8D9LL,1L,0x5947182C73545BE4LL},{1L,0x5837069AAEB0C8D9LL,0x8936BB2FC288D6F1LL,0x5837069AAEB0C8D9LL,1L,0L}},{{7L,0x5947182C73545BE4LL,(-1L),0L,1L,0x5837069AAEB0C8D9LL},{0x12C03D8830F48775LL,0x5837069AAEB0C8D9LL,1L,0x5947182C73545BE4LL,1L,0x5837069AAEB0C8D9LL},{1L,0x25B7F87256FF6ADFLL,(-1L),0x98B977632338F477LL,0x8936BB2FC288D6F1LL,0L}}};
static uint32_t * const *g_2205 = (void*)0;
static uint32_t * const **g_2204 = &g_2205;
static uint32_t g_2224 = 4294967288UL;
static uint64_t ***g_2422 = &g_1750;
static struct S1 **g_2492 = &g_169;
static struct S1 *** const g_2491[6][1] = {{&g_2492},{&g_2492},{&g_2492},{&g_2492},{&g_2492},{&g_2492}};
static struct S1 *** const *g_2490 = &g_2491[1][0];
static uint64_t g_2569 = 18446744073709551613UL;
static int32_t ***g_2573 = &g_1096;
static uint8_t g_2652 = 0x36L;
static int16_t g_2660 = 1L;



static struct S0  func_1(void);
static int8_t  func_39(int32_t  p_40, int32_t ** p_41, struct S0  p_42);
static int32_t ** func_44(union U3  p_45);
static union U3  func_46(int16_t  p_47);
static const int32_t  func_48(const int32_t * p_49, const struct S0  p_50, uint32_t  p_51, int8_t * p_52);
static struct S0  func_53(int32_t ** p_54, const union U3  p_55, int32_t * p_56, int8_t * p_57);
static struct S0  func_58(int32_t  p_59, const uint32_t  p_60);
static int32_t ** func_71(uint32_t  p_72, uint16_t  p_73, int32_t ** p_74, uint64_t  p_75);




static struct S0  func_1(void)
{ 
    int64_t l_16 = 0L;
    int32_t l_17 = (-1L);
    int16_t l_18 = 0L;
    int32_t l_19 = 0L;
    int32_t l_20 = 0L;
    int32_t l_21 = 0x4648A574L;
    int32_t l_22 = 0xC85691F3L;
    struct S0 l_26 = {0UL,7UL,0x93D0AE446F941663LL,-1L,0xB8L,0L,0x3AL,4L};
    int32_t *l_27 = (void*)0;
    int32_t *l_28 = &l_17;
    int32_t *l_29 = &l_22;
    int32_t *l_30[7][2][4] = {{{&l_21,(void*)0,(void*)0,&l_21},{(void*)0,&g_7,&l_22,(void*)0}},{{&l_19,&l_20,(void*)0,(void*)0},{(void*)0,(void*)0,&l_17,(void*)0}},{{(void*)0,&l_20,&l_22,(void*)0},{&l_26.f5,&g_7,(void*)0,&l_21}},{{&l_22,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_19,&g_7}},{{(void*)0,(void*)0,(void*)0,&l_20},{&l_21,(void*)0,&l_26.f5,(void*)0}},{{&l_20,(void*)0,&l_20,&l_20},{(void*)0,(void*)0,&l_17,&g_7}},{{&g_7,(void*)0,&l_21,(void*)0},{&l_22,&l_21,&l_21,&l_22}}};
    int8_t l_31 = 0L;
    int16_t l_32 = 0xAC45L;
    int32_t l_33 = 0L;
    uint32_t l_34 = 4294967294UL;
    struct S0 l_1363 = {0xC6DEEBBCL,4UL,18446744073709551615UL,0L,0xCAL,0L,0x3AL,2L};
    int32_t l_2524 = 0xF6F20B18L;
    int16_t l_2544[2];
    int32_t **l_2566 = &l_30[2][0][2];
    int32_t **l_2567 = &l_30[2][0][2];
    uint16_t l_2588[4];
    struct S1 l_2599 = {0xFE418969L};
    uint64_t **l_2606 = &g_1581;
    struct S1 **l_2630[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_2675 = 0x7EL;
    int64_t l_2681 = 0x7C452E077054584DLL;
    uint32_t l_2692 = 0xEEC9429BL;
    uint16_t l_2713 = 5UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2544[i] = 0x1885L;
    for (i = 0; i < 4; i++)
        l_2588[i] = 65532UL;
    if ((safe_sub_func_int16_t_s_s((9L <= g_4), 6L)))
    { 
        int32_t *l_6 = &g_7;
        int32_t **l_5[6][5];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 5; j++)
                l_5[i][j] = &l_6;
        }
        g_8[5][0][0] = (void*)0;
    }
    else
    { 
        int32_t *l_9 = &g_7;
        int32_t *l_10 = &g_7;
        int32_t *l_11 = &g_7;
        int32_t *l_12 = &g_7;
        int32_t *l_13 = (void*)0;
        int32_t *l_14 = &g_7;
        int32_t *l_15[5] = {&g_7,&g_7,&g_7,&g_7,&g_7};
        uint32_t l_23 = 2UL;
        int i;
        l_23++;
        return l_26;
    }
    ++l_34;
    for (g_4 = 0; (g_4 < 2); g_4++)
    { 
        uint16_t l_2496 = 65535UL;
        int32_t l_2499[4] = {0x7C8C4BF8L,0x7C8C4BF8L,0x7C8C4BF8L,0x7C8C4BF8L};
        uint8_t l_2505 = 0xABL;
        uint16_t l_2511 = 0xB6CDL;
        int32_t l_2543 = (-5L);
        const int8_t l_2607 = 1L;
        uint32_t l_2632 = 0x1B1DD8FFL;
        struct S0 **l_2640 = &g_275;
        struct S2 ****l_2653 = &g_708;
        struct S1 l_2708[4] = {{0x6418E0A8L},{0x6418E0A8L},{0x6418E0A8L},{0x6418E0A8L}};
        const union U3 *l_2709 = &g_184;
        int i;
        for (l_26.f7 = 1; (l_26.f7 >= 0); l_26.f7 -= 1)
        { 
            int32_t l_43 = 0xF56D68B9L;
            union U3 *l_1208 = &g_1084;
            uint64_t l_2500 = 0x672F5479ED89CD05LL;
            uint16_t *l_2514[2][7][5] = {{{&l_2511,&g_103,&l_2496,&g_103,(void*)0},{&g_1727[2][2][0],&g_103,&g_1727[2][2][0],&g_1727[0][2][1],(void*)0},{&l_2511,&l_2511,&g_100,&g_1727[2][2][0],&g_1727[0][2][1]},{&g_1727[2][2][0],&l_2511,&g_100,&g_103,&g_1727[2][2][0]},{&g_100,(void*)0,&g_100,&g_100,&g_1727[2][2][0]},{&g_103,&g_1727[2][2][0],&g_1727[2][2][0],&g_103,&g_1727[0][2][1]},{(void*)0,&g_103,&g_103,&g_1727[2][2][0],(void*)0}},{{&g_1727[2][2][0],&l_2511,&g_1727[0][2][1],&g_100,(void*)0},{&g_103,&g_100,&g_100,&g_1727[2][2][0],&g_1727[2][2][0]},{(void*)0,&g_100,&l_2496,&g_103,&g_100},{&g_1727[0][2][1],&l_2511,&g_1727[2][2][0],&g_100,&g_103},{&l_2511,&g_1727[2][2][0],&g_1727[2][2][0],&g_103,&g_1727[2][2][0]},{&g_103,&g_103,&l_2496,&g_1727[2][2][0],(void*)0},{&g_100,(void*)0,&g_100,&g_1727[0][2][1],&g_1727[2][2][0]}}};
            uint32_t **l_2522[5][7][7] = {{{&g_188,(void*)0,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,(void*)0,(void*)0,&g_188,&g_188,&g_188,&g_188},{(void*)0,&g_188,&g_188,(void*)0,&g_188,&g_188,&g_188},{&g_188,(void*)0,&g_188,&g_188,(void*)0,&g_188,&g_188},{(void*)0,&g_188,&g_188,&g_188,&g_188,(void*)0,&g_188},{&g_188,&g_188,(void*)0,&g_188,&g_188,&g_188,&g_188}},{{&g_188,(void*)0,&g_188,&g_188,&g_188,&g_188,&g_188},{(void*)0,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,(void*)0},{&g_188,&g_188,&g_188,&g_188,&g_188,(void*)0,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,(void*)0,&g_188,(void*)0,&g_188}},{{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,(void*)0,&g_188},{(void*)0,&g_188,&g_188,&g_188,&g_188,&g_188,(void*)0},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,(void*)0,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,(void*)0,&g_188}},{{&g_188,&g_188,(void*)0,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,(void*)0,&g_188,&g_188,&g_188,(void*)0},{&g_188,&g_188,&g_188,(void*)0,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,(void*)0,&g_188,(void*)0,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,(void*)0}},{{(void*)0,&g_188,&g_188,&g_188,&g_188,&g_188,(void*)0},{(void*)0,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{(void*)0,(void*)0,&g_188,&g_188,&g_188,&g_188,&g_188},{(void*)0,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,(void*)0,&g_188},{&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188}}};
            int i, j, k;
            (*l_28) ^= 0x9F716667L;
        }
        (*l_29) ^= 1L;
        for (l_1363.f5 = 0; (l_1363.f5 >= (-22)); --l_1363.f5)
        { 
            uint32_t **l_2540 = &g_188;
            uint8_t *l_2541 = &g_90[1][1];
            int32_t l_2542 = 0x45A41277L;
            int32_t l_2545 = 1L;
            int8_t l_2546 = (-1L);
            l_2546 &= ((*l_29) = (((l_2544[1] = ((l_2542 = ((safe_add_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((((*g_1524) , (safe_add_func_int32_t_s_s(0xEEAE8AB7L, ((*g_188) = (safe_lshift_func_int16_t_s_s(g_2147[4][1][1], ((safe_sub_func_uint32_t_u_u((*****g_252), (safe_unary_minus_func_uint8_t_u(((*l_2541) ^= ((l_2540 = l_2540) == (void*)0)))))) || ((((*l_2541) = l_2542) | l_2542) < (*l_29))))))))) , 4UL), 0x894CFB14L)), l_2542)) != l_2543), (*l_28))) <= (-1L))) | 0x3D94586DL)) > l_2545) < l_2545));
            (**g_1522) = (*g_1523);
            return (*g_1910);
        }
        if ((**g_1523))
            continue;
        for (l_20 = 4; (l_20 > (-13)); --l_20)
        { 
            uint8_t l_2552 = 0x67L;
            struct S1 l_2596[3] = {{0x7D7595F9L},{0x7D7595F9L},{0x7D7595F9L}};
            int32_t l_2604 = 0x063734AEL;
            const uint64_t **l_2605[1];
            uint16_t l_2665 = 0x1746L;
            int32_t l_2677[5] = {0L,0L,0L,0L,0L};
            int32_t l_2680 = 0x792B01C7L;
            uint8_t l_2682 = 8UL;
            int32_t l_2685 = (-1L);
            int32_t **l_2689[2][7][6] = {{{&l_30[5][0][3],&l_30[2][1][0],(void*)0,&l_28,&l_30[2][0][2],&g_8[5][0][0]},{&l_30[2][0][2],&l_28,&l_29,&l_27,(void*)0,&l_28},{(void*)0,&l_27,&l_30[2][0][1],&l_28,&g_8[5][0][0],(void*)0},{(void*)0,&l_27,(void*)0,&g_8[2][0][0],(void*)0,(void*)0},{&l_27,&g_8[5][0][0],&l_29,&l_29,&l_29,&l_29},{(void*)0,(void*)0,&l_29,(void*)0,&l_30[6][0][3],&g_8[5][0][0]},{&l_28,(void*)0,(void*)0,&l_30[2][0][1],(void*)0,&l_29}},{{(void*)0,&l_28,(void*)0,&l_27,(void*)0,&g_8[5][0][0]},{&g_8[2][0][0],&l_27,&l_29,(void*)0,(void*)0,&l_29},{(void*)0,(void*)0,&l_29,&l_28,&l_27,(void*)0},{&l_30[2][0][2],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_8[5][0][0],&l_30[2][0][1],&l_29,(void*)0,&l_28},{(void*)0,(void*)0,&l_29,&l_27,(void*)0,&g_8[5][0][0]},{(void*)0,(void*)0,&l_28,&l_29,(void*)0,&l_30[2][0][2]}}};
            int8_t l_2690 = 1L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2605[i] = (void*)0;
            (**g_1522) = &l_19;
        }
    }
    (**g_1522) = (*l_2567);
    l_2713--;
    return (**g_1909);
}



static int8_t  func_39(int32_t  p_40, int32_t ** p_41, struct S0  p_42)
{ 
    uint16_t l_1364 = 0xE854L;
    int32_t *l_1365[4];
    struct S2 l_1385 = {1UL,-1L,0x796FADB1L,5UL};
    int32_t l_1415 = 0xB18D4E26L;
    union U3 *****l_1465[7][1][4] = {{{&g_1463,&g_1463,&g_1463,&g_1463}},{{&g_1463,&g_1463,&g_1463,&g_1463}},{{&g_1463,&g_1463,&g_1463,&g_1463}},{{&g_1463,&g_1463,&g_1463,&g_1463}},{{&g_1463,&g_1463,&g_1463,&g_1463}},{{&g_1463,&g_1463,&g_1463,&g_1463}},{{&g_1463,&g_1463,&g_1463,&g_1463}}};
    struct S1 *l_1486 = (void*)0;
    int32_t **l_1553 = &g_8[5][0][0];
    uint32_t ****l_1574 = (void*)0;
    const struct S0 *l_1611 = &g_166[1];
    const struct S0 **l_1610 = &l_1611;
    const struct S0 ***l_1609[6] = {(void*)0,(void*)0,&l_1610,(void*)0,(void*)0,&l_1610};
    int32_t l_1652 = 0x637A69FBL;
    int16_t l_1694 = 7L;
    int16_t l_1709 = 0x3C2BL;
    int16_t l_1726 = (-1L);
    const struct S1 *l_1771 = (void*)0;
    const struct S1 **l_1770 = &l_1771;
    const struct S1 ***l_1769 = &l_1770;
    const struct S1 ****l_1768 = &l_1769;
    const struct S1 *****l_1767 = &l_1768;
    int64_t *l_1800[1];
    uint16_t l_1816 = 0xAB7FL;
    struct S2 **l_1827 = &g_377;
    uint32_t l_1862[2];
    uint64_t l_1888 = 18446744073709551615UL;
    struct S0 l_1918 = {0xB22E2350L,1UL,0xFFD406BEAB4562AALL,0xE7CA86EFFF359D5BLL,0xE5L,-1L,1L,4L};
    uint16_t **l_1931 = &g_556;
    struct S2 l_1941 = {0xF18768A36C646321LL,0x237CL,0x89DC726EL,0x68766B50L};
    uint32_t l_1944 = 0x0325CB09L;
    int64_t l_2014 = 0xD9AC6119D6846CD5LL;
    int32_t l_2052 = 0x0BA43090L;
    int32_t *l_2073[4][3][2] = {{{&g_588,&l_2052},{&g_7,&g_588},{&g_588,&g_7}},{{&l_2052,&g_588},{&l_2052,&g_7},{&g_588,&g_588}},{{&g_7,&l_2052},{&g_588,&l_2052},{&g_7,&g_588}},{{&g_588,&g_7},{&l_2052,&g_588},{&l_2052,&g_7}}};
    uint32_t l_2114 = 0x9573BD0DL;
    struct S1 l_2276 = {0x2C08AB6BL};
    int8_t l_2297 = 6L;
    uint8_t l_2311 = 0UL;
    uint8_t l_2316 = 0xE8L;
    int8_t l_2319 = 0x3FL;
    int16_t l_2402 = (-1L);
    uint32_t l_2452 = 0x8DAC04D5L;
    uint64_t * const ****l_2458[6][4] = {{&g_1578,(void*)0,&g_1578,(void*)0},{&g_1578,&g_1578,&g_1578,(void*)0},{&g_1578,(void*)0,&g_1578,&g_1578},{&g_1578,(void*)0,&g_1578,(void*)0},{&g_1578,&g_1578,&g_1578,(void*)0},{&g_1578,(void*)0,&g_1578,&g_1578}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1365[i] = &g_611[2].f5;
    for (i = 0; i < 1; i++)
        l_1800[i] = &g_1576;
    for (i = 0; i < 2; i++)
        l_1862[i] = 0x988F20A8L;
lbl_1908:
    if (((func_58((p_42.f5 &= l_1364), p_42.f3) , &g_169) == &g_169))
    { 
        uint8_t l_1373[5] = {0xE6L,0xE6L,0xE6L,0xE6L,0xE6L};
        int32_t l_1380 = (-3L);
        struct S2 l_1386 = {0xB89917DD74B6A6CDLL,-4L,5L,0x84EB9789L};
        int32_t l_1395 = 0x87C0523BL;
        uint64_t l_1399 = 0xF8F6984A0E4B2A43LL;
        int32_t l_1416 = 0x9085F39AL;
        int32_t l_1417[2][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L}};
        uint64_t *l_1479 = &g_1468;
        uint64_t **l_1478 = &l_1479;
        uint32_t l_1489 = 0xC36ED050L;
        int32_t ***l_1519 = &g_1362[0];
        const struct S2 *l_1550[6][6][2] = {{{(void*)0,&g_384},{&g_384,&g_384},{&g_384,&g_384},{&g_384,&g_384},{&g_384,&g_384},{&g_384,(void*)0}},{{&g_384,&g_384},{(void*)0,&g_384},{&g_384,&g_384},{(void*)0,&g_384},{&g_384,&g_384},{(void*)0,(void*)0}},{{&g_384,&g_384},{(void*)0,(void*)0},{&g_384,&g_384},{(void*)0,(void*)0},{&g_384,(void*)0},{&g_384,&g_384}},{{&g_384,&g_384},{&g_384,&g_384},{&g_384,(void*)0},{&g_384,(void*)0},{(void*)0,&g_384},{&g_384,(void*)0}},{{(void*)0,&g_384},{&g_384,(void*)0},{(void*)0,&g_384},{(void*)0,&g_384},{&g_384,&g_384},{&g_384,&g_384}},{{&g_384,&g_384},{(void*)0,&g_384},{(void*)0,(void*)0},{&g_384,&g_384},{(void*)0,(void*)0},{&g_384,&g_384}}};
        const struct S2 **l_1549[5] = {&l_1550[0][3][1],&l_1550[0][3][1],&l_1550[0][3][1],&l_1550[0][3][1],&l_1550[0][3][1]};
        const struct S2 ***l_1548 = &l_1549[4];
        const struct S2 ****l_1547 = &l_1548;
        int64_t l_1558[6] = {0x77679A86C6ADECC6LL,0x77679A86C6ADECC6LL,0x77679A86C6ADECC6LL,0x77679A86C6ADECC6LL,0x77679A86C6ADECC6LL,0x77679A86C6ADECC6LL};
        int32_t l_1575 = 0x2254FF2EL;
        int i, j, k;
lbl_1485:
        for (p_42.f2 = 0; (p_42.f2 != 32); ++p_42.f2)
        { 
            uint32_t *l_1372[7][3] = {{&g_1084.f0,&g_1084.f0,&g_1084.f0},{&g_1084.f0,&g_1084.f0,&g_1084.f0},{&g_1084.f0,&g_1084.f0,&g_1084.f0},{&g_1084.f0,&g_1084.f0,&g_1084.f0},{&g_1084.f0,&g_1084.f0,&g_1084.f0},{&g_1084.f0,&g_1084.f0,&g_1084.f0},{&g_1084.f0,&g_1084.f0,&g_1084.f0}};
            int32_t l_1381[7];
            int16_t l_1382 = 0L;
            int i, j;
            for (i = 0; i < 7; i++)
                l_1381[i] = 0xAB0567DCL;
            p_40 = (safe_div_func_uint16_t_u_u(0xB9FDL, (safe_sub_func_uint32_t_u_u((l_1373[1] |= 0x2199EF6DL), (safe_add_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(l_1380, (*g_556))) == 0x56L), 2)) || (l_1381[1] & l_1380)), g_1336))))));
            l_1381[5] = (p_42.f4 != l_1382);
        }
        for (g_216.f0 = 0; (g_216.f0 <= 46); ++g_216.f0)
        { 
            uint8_t *l_1393[4][1][6] = {{{&g_90[0][2],&l_1373[1],&l_1373[1],&g_90[0][2],&g_88,&g_90[0][2]}},{{&g_90[0][2],&g_88,&g_90[0][2],&l_1373[1],&l_1373[1],&g_90[0][2]}},{{&g_90[1][1],&g_90[1][1],&l_1373[1],&l_1373[1],&l_1373[1],&g_90[1][1]}},{{&l_1373[1],&g_88,&l_1373[1],&l_1373[1],&g_88,&l_1373[1]}}};
            int32_t l_1406 = 0x0C519440L;
            int32_t *l_1407 = &l_1406;
            int32_t l_1412 = 0xB6D8BDBAL;
            int32_t l_1414 = 1L;
            int32_t l_1420 = 0x638AF56EL;
            int32_t l_1423 = (-5L);
            int32_t l_1425 = 0L;
            int32_t l_1426 = 0x4E84056AL;
            int32_t l_1427 = 1L;
            uint32_t l_1428 = 0x8FF6897CL;
            union U3 *****l_1466 = &g_1463;
            struct S1 l_1471 = {4294967292UL};
            const struct S0 ***l_1483 = (void*)0;
            int i, j, k;
            (***g_709) = (l_1386 = l_1385);
            l_1395 ^= (g_1394[4] = (safe_mul_func_uint16_t_u_u(((*g_556) & (safe_mod_func_int32_t_s_s((p_40 = ((((p_42.f0 > ((g_90[1][1] = (p_42.f3 && (l_1386.f2 , (((p_42 , (safe_mul_func_uint16_t_u_u(((*g_797) == (void*)0), g_1113.f2))) == l_1386.f0) < g_100)))) < p_42.f0)) , l_1380) , 0x5A32303A429FCCCALL) > g_1113.f4)), 4294967295UL))), g_1084.f0)));
            l_1365[3] = &l_1380;
            for (g_1335 = 0; (g_1335 > (-7)); g_1335 = safe_sub_func_uint32_t_u_u(g_1335, 3))
            { 
                int64_t l_1398 = 0x4B945B9A9F59FC22LL;
                int32_t *l_1403 = &g_7;
                int32_t l_1408 = (-1L);
                int32_t l_1410 = 0xB761FE49L;
                int32_t l_1413 = 1L;
                int32_t l_1419[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1419[i] = 0xF52DF7D8L;
                ++l_1399;
                for (g_348 = 0; (g_348 <= 0); g_348 += 1)
                { 
                    int8_t l_1402 = 0x22L;
                    int32_t **l_1404 = (void*)0;
                    int32_t **l_1405 = &l_1365[1];
                    p_40 ^= l_1402;
                    (*l_1405) = l_1403;
                    p_40 ^= (65535UL || (**l_1405));
                    if (l_1406)
                        continue;
                }
                for (g_348 = 0; (g_348 <= 0); g_348 += 1)
                { 
                    int32_t l_1409 = 0x52235D96L;
                    int32_t l_1411 = (-1L);
                    int32_t l_1418 = 2L;
                    int32_t l_1421 = 0x31DEB4A4L;
                    int32_t l_1422 = 0L;
                    int32_t l_1424 = 0x86424DC1L;
                    int i;
                    l_1407 = g_1097[g_348];
                    l_1428--;
                }
            }
            for (p_42.f2 = 0; (p_42.f2 > 40); p_42.f2 = safe_add_func_int8_t_s_s(p_42.f2, 5))
            { 
                int16_t *l_1437[5];
                int32_t l_1438 = (-6L);
                int32_t l_1447 = 1L;
                int32_t l_1448 = 1L;
                int32_t l_1450 = 0x646B2007L;
                int32_t l_1452 = 0xCF249950L;
                int32_t l_1458 = 5L;
                struct S1 *l_1472 = &l_1471;
                uint64_t **l_1481 = &l_1479;
                uint64_t ***l_1480 = &l_1481;
                union U3 ***l_1487 = &g_360;
                uint32_t l_1488 = 0x78D5FAE0L;
                int i;
                for (i = 0; i < 5; i++)
                    l_1437[i] = &l_1385.f1;
                if ((((safe_mod_func_int32_t_s_s(l_1417[0][0], p_42.f0)) >= ((p_42.f5 = (func_58(p_42.f6, (safe_mul_func_int16_t_s_s((g_1336 = g_384.f1), (((g_88 = ((l_1380 |= (l_1416 = ((void*)0 == &g_1097[0]))) & (-7L))) <= g_622) && 0xDD8502D8L)))) , l_1438)) && l_1386.f3)) ^ (-1L)))
                { 
                    uint32_t l_1439 = 18446744073709551615UL;
                    l_1439++;
                    return l_1439;
                }
                else
                { 
                    uint32_t l_1442 = 0x867DA9BCL;
                    int32_t l_1445 = 0x3D6E88AFL;
                    int16_t l_1446 = 0x17C5L;
                    int32_t l_1449 = (-7L);
                    int32_t l_1451 = 8L;
                    int32_t l_1453 = (-1L);
                    int32_t l_1454 = 0L;
                    int32_t l_1455 = 0x3C884B25L;
                    int32_t l_1456 = 0x3117FECDL;
                    int32_t l_1457[6];
                    uint64_t l_1459[2][1][5] = {{{18446744073709551611UL,0UL,18446744073709551615UL,0UL,18446744073709551611UL}},{{18446744073709551611UL,0UL,18446744073709551615UL,0UL,18446744073709551611UL}}};
                    union U3 *****l_1467[4];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1457[i] = 0x35F219E1L;
                    for (i = 0; i < 4; i++)
                        l_1467[i] = (void*)0;
                    --l_1442;
                    l_1459[0][0][4]++;
                    l_1467[1] = (g_1462 = (l_1466 = (l_1465[6][0][1] = g_1462)));
                }
                ++g_1468;
                (*l_1472) = l_1471;
                if ((safe_lshift_func_uint8_t_u_u((l_1417[0][0] = l_1448), ((l_1452 = (safe_unary_minus_func_uint8_t_u(((l_1386.f3 > (((l_1478 == ((*l_1480) = &l_1479)) != (g_90[3][1] = (!p_42.f3))) & 18446744073709551612UL)) ^ (((l_1483 != &g_1195[0]) ^ 4UL) < g_1484[1]))))) < p_42.f7))))
                { 
                    if (l_1385.f3)
                        goto lbl_1485;
                    l_1486 = (*g_797);
                    l_1488 ^= ((void*)0 != l_1487);
                }
                else
                { 
                    --l_1489;
                    return p_42.f2;
                }
            }
        }
        for (l_1386.f2 = 0; (l_1386.f2 >= (-5)); l_1386.f2--)
        { 
            uint8_t l_1505 = 0xB4L;
            uint16_t l_1530 = 0x62BAL;
            const union U3 l_1537[4] = {{0xE418360DL},{0xE418360DL},{0xE418360DL},{0xE418360DL}};
            const struct S2 *l_1545 = (void*)0;
            const struct S2 **l_1544 = &l_1545;
            const struct S2 ***l_1543 = &l_1544;
            const struct S2 ****l_1542 = &l_1543;
            int i;
            for (l_1386.f0 = 8; (l_1386.f0 > 41); l_1386.f0 = safe_add_func_int16_t_s_s(l_1386.f0, 2))
            { 
                uint32_t l_1501 = 0xA56073E3L;
                int32_t l_1508 = 0xDCFA991CL;
                int8_t l_1514[5][3] = {{(-2L),(-2L),(-2L)},{0xC1L,5L,0xC1L},{(-2L),(-2L),(-2L)},{0xC1L,5L,0xC1L},{(-2L),(-2L),(-2L)}};
                union U3 l_1521 = {0x57D1DC96L};
                int i, j;
                for (g_1189 = 0; (g_1189 <= 2); g_1189 += 1)
                { 
                    uint32_t *l_1500[6][4] = {{&g_184.f0,&g_115,&g_184.f0,&g_115},{&g_184.f0,&g_115,&g_184.f0,&g_115},{&g_184.f0,&g_115,&g_184.f0,&g_115},{&g_184.f0,&g_115,&g_184.f0,&g_115},{&g_184.f0,&g_115,&g_184.f0,&g_115},{&g_184.f0,&g_115,&g_184.f0,&g_115}};
                    int16_t *l_1502 = &l_1386.f1;
                    int32_t ** const ***l_1509 = (void*)0;
                    int32_t ** const ***l_1510 = (void*)0;
                    int32_t ** const **l_1512 = (void*)0;
                    int32_t ** const ***l_1511[4] = {&l_1512,&l_1512,&l_1512,&l_1512};
                    int i, j;
                    l_1514[0][0] ^= ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((*l_1502) = (8UL == (l_1501 ^= g_90[g_1189][g_1189]))) == ((safe_rshift_func_int8_t_s_u(g_90[g_1189][g_1189], 6)) >= ((l_1505 ^ (l_1395 = 0xBE2D2EB2L)) < 0L))), ((g_1513 = ((safe_mul_func_uint8_t_u_u(p_42.f3, l_1508)) , (void*)0)) != (*g_748)))) < 65533UL), p_42.f5)) && l_1399);
                }
                if (p_42.f1)
                    continue;
                for (p_42.f6 = 0; (p_42.f6 <= 3); p_42.f6 += 1)
                { 
                    int32_t l_1517 = 0x2EC2EAE0L;
                    uint8_t *l_1518 = &g_88;
                    union U3 l_1520[4][3][5] = {{{{0x7127A6DCL},{2UL},{0x7127A6DCL},{2UL},{0x7127A6DCL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{0x7127A6DCL},{2UL},{0x7127A6DCL},{2UL},{0x7127A6DCL}}},{{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{0x7127A6DCL},{2UL},{0x7127A6DCL},{2UL},{0x7127A6DCL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}}},{{{0x7127A6DCL},{2UL},{0x7127A6DCL},{2UL},{0x7127A6DCL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{0x7127A6DCL},{2UL},{0x7127A6DCL},{2UL},{0x7127A6DCL}}},{{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{0x7127A6DCL},{2UL},{0x7127A6DCL},{2UL},{0x7127A6DCL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}}}};
                    const int32_t ****l_1525 = &g_1522;
                    int i, j, k;
                    l_1365[p_42.f6] = l_1365[p_42.f6];
                    l_1365[p_42.f6] = l_1365[p_42.f6];
                    p_40 = (((*l_1518) &= l_1517) >= ((*g_556) == (l_1519 == ((*l_1525) = ((l_1521 = l_1520[3][1][3]) , g_1522)))));
                    return l_1505;
                }
                l_1365[1] = l_1365[0];
            }
            for (l_1364 = 22; (l_1364 > 19); l_1364 = safe_sub_func_int16_t_s_s(l_1364, 6))
            { 
                for (g_1189 = 0; (g_1189 > 6); ++g_1189)
                { 
                    ++l_1530;
                }
            }
            for (p_42.f3 = (-12); (p_42.f3 <= (-24)); --p_42.f3)
            { 
                const struct S2 *****l_1546[5] = {&l_1542,&l_1542,&l_1542,&l_1542,&l_1542};
                int i;
                (*g_252) = (void*)0;
                p_40 |= (safe_rshift_func_uint16_t_u_s(0x1D6FL, (l_1537[3] , (0UL | (p_42.f2 >= ((-1L) || (safe_rshift_func_int16_t_s_u((((safe_mul_func_uint16_t_u_u(((l_1547 = l_1542) != &l_1543), g_166[1].f6)) > p_42.f3) , 0x58F0L), 4))))))));
                for (g_216.f0 = 22; (g_216.f0 == 2); --g_216.f0)
                { 
                    return p_42.f7;
                }
            }
            (*l_1519) = (*l_1519);
            if (l_1558[2])
            { 
                int32_t *l_1559 = (void*)0;
                (*l_1553) = l_1559;
            }
            else
            { 
                uint8_t *l_1564 = (void*)0;
                int32_t l_1566 = 0L;
                int32_t l_1573 = (-1L);
                uint32_t l_1577 = 4UL;
                l_1577 = ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((g_90[1][1] &= p_42.f2), (l_1566 = ((+1L) <= p_42.f2)))), (((safe_add_func_uint8_t_u_u(7UL, ((safe_div_func_uint64_t_u_u((((**l_1478) = ((((((((0x30F2L | 0xA854L) ^ ((safe_mul_func_uint16_t_u_u((0L < l_1573), g_133)) >= g_1336)) , (*g_252)) == l_1574) , (void*)0) == (void*)0) <= l_1575) & (*g_556))) > g_384.f3), (*g_1227))) | l_1573))) <= 0xA3CD172414E7A6CBLL) ^ 0xB3BCCD50L))) & g_1576);
            }
        }
    }
    else
    { 
        struct S1 **l_1586 = (void*)0;
        struct S1 ***l_1585[6] = {&l_1586,&l_1586,&l_1586,&l_1586,&l_1586,&l_1586};
        struct S1 ****l_1584 = &l_1585[2];
        int8_t l_1616 = (-6L);
        struct S0 l_1643 = {5UL,0x01280449L,1UL,-1L,0xC8L,-1L,-1L,0x89L};
        int32_t l_1647 = 9L;
        union U3 *l_1666 = &g_1084;
        uint32_t ****l_1680 = &g_254[1];
        int8_t l_1693 = 0x96L;
        int32_t l_1696[1][5][1];
        uint64_t **l_1747 = &g_1581;
        uint64_t ***l_1746 = &l_1747;
        int32_t *l_1820 = &g_588;
        int32_t *l_1821[6][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        struct S2 *l_1840 = (void*)0;
        struct S0 ****l_1855 = (void*)0;
        int32_t l_1860[6][3][4] = {{{1L,0xE14F035AL,8L,0L},{0xE14F035AL,9L,0x0DBA2C60L,(-6L)},{0xB412E27AL,1L,0L,(-6L)}},{{(-1L),9L,(-1L),0L},{0x7B868147L,0xE14F035AL,0x667DED7FL,0x7B868147L},{0xB412E27AL,0L,8L,0xE14F035AL}},{{0L,9L,8L,8L},{0xB412E27AL,0xB412E27AL,0x667DED7FL,(-6L)},{0x7B868147L,0x6386655CL,(-1L),0xE14F035AL}},{{(-1L),0xE14F035AL,0L,(-1L)},{0xB412E27AL,0xE14F035AL,0x0DBA2C60L,0xE14F035AL},{0xE14F035AL,0x6386655CL,8L,(-6L)}},{{1L,0xB412E27AL,0L,8L},{0x7B868147L,9L,(-1L),0xE14F035AL},{0x7B868147L,0L,0L,0x7B868147L}},{{1L,0xE14F035AL,8L,0L},{0xE14F035AL,9L,0x0DBA2C60L,(-6L)},{0xB412E27AL,1L,0L,(-6L)}}};
        union U3 **l_1866[5][7] = {{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666},{&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666,&l_1666}};
        union U3 **l_1867 = &l_1666;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1696[i][j][k] = 1L;
            }
        }
        if ((l_1385 , (-5L)))
        { 
            uint64_t * const ***l_1583[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1589 = 0x170B4601L;
            struct S1 l_1595 = {0UL};
            union U3 l_1600 = {4294967295UL};
            struct S0 * const *l_1608[7][1] = {{&g_275},{(void*)0},{&g_275},{(void*)0},{&g_275},{(void*)0},{&g_275}};
            struct S0 * const **l_1607 = &l_1608[4][0];
            int i, j;
lbl_1590:
            (*g_1523) = &p_40;
            for (p_42.f2 = 0; (p_42.f2 <= 1); p_42.f2 += 1)
            { 
                uint64_t * const ****l_1582 = &g_1578;
                int32_t l_1601 = 0x80E0C34CL;
                uint16_t l_1602 = 0UL;
                uint32_t ** const *l_1606 = &g_187;
                uint32_t ** const **l_1605 = &l_1606;
                uint32_t *l_1644[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint16_t *l_1645 = &g_103;
                struct S1 l_1646[3] = {{0xE53BD22AL},{0xE53BD22AL},{0xE53BD22AL}};
                int i;
                l_1583[1] = ((*l_1582) = g_1578);
                for (p_42.f3 = 0; (p_42.f3 >= 0); p_42.f3 -= 1)
                { 
                    struct S1 *****l_1587[6][5] = {{(void*)0,&l_1584,(void*)0,(void*)0,&l_1584},{&l_1584,(void*)0,(void*)0,&l_1584,(void*)0},{&l_1584,&l_1584,&l_1584,&l_1584,&l_1584},{(void*)0,&l_1584,(void*)0,(void*)0,&l_1584},{&l_1584,(void*)0,(void*)0,&l_1584,(void*)0},{&l_1584,&l_1584,&l_1584,&l_1584,&l_1584}};
                    int i, j;
                    g_1588 = l_1584;
                    p_40 = l_1589;
                    (*l_1553) = (*l_1553);
                    if (g_1576)
                        goto lbl_1590;
                    p_40 |= (safe_div_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((l_1595 , ((*g_1227) = ((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((p_42.f5 ^ (g_152[p_42.f3] , (((((l_1600 , l_1601) || l_1602) | p_42.f3) & p_42.f7) < 0x2EA10E33F8422200LL))), p_42.f3)), 1UL)) < 0xB04CD0C9374CCA5ALL))), (-2L))) , 0x7EL), g_611[2].f0));
                }
                for (g_88 = 1; (g_88 <= 6); g_88 += 1)
                { 
                    uint8_t *l_1617 = (void*)0;
                    uint8_t *l_1618 = (void*)0;
                    uint8_t *l_1619 = &g_90[0][2];
                    int16_t l_1620 = 0xC44AL;
                    l_1620 = (safe_rshift_func_uint16_t_u_s(((((*g_252) != l_1605) , ((*g_556) = (((l_1607 == l_1609[4]) == ((*l_1619) ^= (safe_lshift_func_uint8_t_u_s((l_1602 | (l_1589 ^= (safe_lshift_func_uint16_t_u_u(4UL, 4)))), (4294967287UL | l_1616))))) > 0L))) >= p_42.f1), g_384.f3));
                    if (p_42.f0)
                        continue;
                }
                for (l_1385.f3 = 0; (l_1385.f3 <= 6); l_1385.f3 += 1)
                { 
                    return p_42.f2;
                }
            }
        }
        else
        { 
            const uint8_t l_1651 = 4UL;
            union U3 *l_1663 = &g_1084;
            int32_t l_1667 = 0x8CCEB620L;
            int32_t l_1668 = 0x2198D0DFL;
            uint32_t l_1669 = 0x30A986B8L;
            int32_t l_1697 = 0xD5009E71L;
            uint16_t l_1698 = 9UL;
            int32_t l_1705 = 0x4F50B82DL;
            int32_t l_1707 = (-6L);
            int32_t l_1708 = 1L;
            int32_t l_1710 = 0x05C7CE1BL;
            int32_t l_1711[5][1][4] = {{{0xF317D3BAL,0xA22B6421L,0xA732CD0BL,0xA22B6421L}},{{(-1L),0x5EC79E51L,0xBC9BAA8FL,0xA732CD0BL}},{{0xA22B6421L,0x5EC79E51L,0x5EC79E51L,0xA22B6421L}},{{0x5EC79E51L,0xA22B6421L,(-1L),0xF317D3BAL}},{{0x5EC79E51L,(-1L),0x5EC79E51L,0xBC9BAA8FL}}};
            int64_t l_1723[3][2][1];
            int8_t l_1724 = 0x7CL;
            uint64_t *l_1738 = &l_1643.f2;
            struct S0 l_1739 = {0UL,0x78DABBA8L,0x4D0A570A9D5F80E8LL,-1L,0L,0L,1L,-7L};
            int32_t l_1801 = (-3L);
            struct S1 **l_1802 = &g_169;
            uint16_t l_1817[5];
            uint32_t *l_1836 = &g_184.f0;
            uint16_t *l_1837[4];
            int32_t l_1859 = 0x8021E8C8L;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1723[i][j][k] = 0xBECF68F5D26AA9DELL;
                }
            }
            for (i = 0; i < 5; i++)
                l_1817[i] = 0x8C04L;
            for (i = 0; i < 4; i++)
                l_1837[i] = &g_1727[2][2][0];
            for (l_1643.f7 = 1; (l_1643.f7 >= 0); l_1643.f7 -= 1)
            { 
                union U3 *l_1658 = &g_184;
                uint32_t ****l_1679[7][4][1] = {{{&g_254[6]},{&g_254[5]},{&g_254[6]},{&g_254[5]}},{{&g_254[6]},{&g_254[5]},{&g_254[6]},{&g_254[5]}},{{&g_254[6]},{&g_254[5]},{&g_254[6]},{&g_254[5]}},{{&g_254[6]},{&g_254[5]},{&g_254[6]},{&g_254[5]}},{{&g_254[6]},{&g_254[5]},{&g_254[6]},{&g_254[5]}},{{&g_254[6]},{&g_254[5]},{&g_254[6]},{&g_254[5]}},{{&g_254[6]},{&g_254[5]},{&g_254[6]},{&g_254[5]}}};
                uint64_t *l_1681 = &l_1643.f2;
                int32_t l_1687 = 5L;
                int32_t l_1688 = 0x0CE053F3L;
                int8_t l_1712 = 0L;
                int32_t l_1713 = 4L;
                int32_t l_1714 = 1L;
                int32_t l_1715 = 9L;
                int32_t l_1716 = 0xB89FF0FBL;
                int32_t l_1717 = 0x6A271572L;
                int32_t l_1718 = 1L;
                int32_t l_1719 = 0x65DDDA75L;
                int32_t l_1720 = 0x1818257AL;
                int32_t l_1721 = (-1L);
                int32_t l_1722[1][2][1];
                int16_t *l_1772 = &l_1726;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1722[i][j][k] = 1L;
                    }
                }
                if ((l_1651 , (***g_1522)))
                { 
                    (*g_1523) = &p_40;
                    if (l_1652)
                        continue;
                }
                else
                { 
                    uint8_t *l_1664 = &g_90[1][1];
                    int32_t l_1665 = 0xE748687AL;
                    l_1665 |= (safe_mod_func_uint8_t_u_u(((g_88 &= ((*l_1664) = (((!p_42.f1) != ((p_40 < ((safe_mul_func_int16_t_s_s(((void*)0 != l_1658), (safe_div_func_int64_t_s_s(0x7F8D1805966DBD86LL, (safe_rshift_func_uint16_t_u_u(((((l_1385 , (void*)0) != l_1663) , l_1643.f7) && l_1651), 10)))))) < p_42.f3)) ^ p_42.f5)) >= 0x18CCL))) == 0xE0L), p_42.f3));
                    l_1666 = l_1663;
                    return l_1647;
                }
                for (g_588 = 1; (g_588 <= 5); g_588 += 1)
                { 
                    int i;
                    l_1667 &= (**g_1523);
                    p_42.f5 &= (g_1195[l_1643.f7] != (void*)0);
                    --l_1669;
                }
                if ((safe_rshift_func_uint16_t_u_s(((*g_556) = (*g_556)), (safe_div_func_uint8_t_u_u((+(((safe_mod_func_int64_t_s_s((l_1651 != (l_1679[0][3][0] != l_1680)), ((*l_1681)--))) >= ((safe_sub_func_int32_t_s_s(0xE07F5CEBL, ((p_42.f7 = p_42.f4) == ((0xC319457F6F70CF56LL | 18446744073709551607UL) < g_1484[1])))) , p_42.f7)) , 6L)), l_1669)))))
                { 
                    int64_t l_1686 = 0xF28EDCC922B3A17ELL;
                    int32_t l_1689 = 0x51E07918L;
                    uint16_t l_1690 = 1UL;
                    int32_t l_1695[5][5][4] = {{{1L,0xF02C9B79L,0x56F36B05L,0L},{5L,0x1B758C4CL,0L,0x56F36B05L},{(-1L),0x1B758C4CL,(-1L),0L},{0x1B758C4CL,0xF02C9B79L,0xFE11F22EL,(-9L)},{1L,0L,(-1L),(-10L)}},{{0x56F36B05L,(-1L),0x56F36B05L,0x1B758C4CL},{(-8L),0L,(-5L),0x56F36B05L},{(-1L),(-5L),0x31E2EF5AL,0L},{0x1B758C4CL,0x5E6BB3DBL,0x31E2EF5AL,(-1L)},{(-1L),0L,(-5L),0xFE11F22EL}},{{(-8L),0x5A0BEB42L,0x56F36B05L,(-1L)},{0x56F36B05L,(-1L),(-1L),0x56F36B05L},{1L,0L,0xFE11F22EL,(-5L)},{0x1B758C4CL,0x67E98677L,(-1L),0x31E2EF5AL},{(-1L),0L,0L,0x31E2EF5AL}},{{5L,0x67E98677L,0x56F36B05L,(-5L)},{1L,0L,0x1B758C4CL,0x56F36B05L},{0L,(-1L),(-10L),(-1L)},{0x1B758C4CL,0x5A0BEB42L,(-9L),0xFE11F22EL},{(-1L),0L,0L,(-1L)}},{{0x3F01B03DL,0x5E6BB3DBL,0x56F36B05L,0L},{0x3F01B03DL,(-5L),0L,0x56F36B05L},{(-1L),1L,0x67E98677L,0x3F01B03DL},{0x3F01B03DL,0L,(-1L),(-1L)},{0x1B758C4CL,0x1B758C4CL,0x3F01B03DL,0x67E98677L}}};
                    int i, j, k;
                    ++l_1690;
                    if (l_1385.f1)
                        goto lbl_1908;
                    if (g_100)
                        goto lbl_1822;
                    ++l_1698;
                }
                else
                { 
                    int64_t l_1701 = 1L;
                    int32_t l_1702 = 0xAFF187F6L;
                    int32_t l_1703 = 0L;
                    int32_t l_1704 = 0x80D9C46CL;
                    int32_t l_1706[5];
                    uint64_t ****l_1748[7][7][4] = {{{(void*)0,(void*)0,(void*)0,&l_1746},{(void*)0,&l_1746,&l_1746,(void*)0},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,(void*)0,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,(void*)0,&l_1746,&l_1746},{(void*)0,&l_1746,&l_1746,(void*)0}},{{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,(void*)0,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746},{(void*)0,&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746}},{{&l_1746,&l_1746,&l_1746,&l_1746},{(void*)0,(void*)0,(void*)0,&l_1746},{(void*)0,&l_1746,&l_1746,(void*)0},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,(void*)0,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,(void*)0,&l_1746,&l_1746}},{{(void*)0,&l_1746,&l_1746,(void*)0},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,(void*)0,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746},{(void*)0,&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746}},{{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746},{(void*)0,(void*)0,(void*)0,&l_1746},{(void*)0,&l_1746,&l_1746,(void*)0},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,(void*)0,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746}},{{&l_1746,(void*)0,&l_1746,&l_1746},{(void*)0,&l_1746,&l_1746,(void*)0},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,(void*)0,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746},{(void*)0,&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746}},{{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,&l_1746,&l_1746,&l_1746},{&l_1746,(void*)0,(void*)0,&l_1746},{&l_1746,&l_1746,&l_1746,(void*)0},{&l_1746,&l_1746,(void*)0,&l_1746}}};
                    int16_t *l_1751 = &g_167;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_1706[i] = (-1L);
                    if (l_1701)
                        break;
                    p_42.f5 = 0xC7492313L;
                    g_1727[2][2][0]++;
                    l_1706[0] &= (safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((((*g_556) = (safe_div_func_int8_t_s_s(((0x10L < (g_90[0][1] |= 255UL)) , ((safe_div_func_int64_t_s_s(((l_1738 != (l_1739 , (***g_1578))) > (0x4052347D096CA279LL == (((*l_1751) |= (safe_add_func_uint64_t_u_u(((l_1643.f5 |= (safe_mod_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((g_1749 = l_1746) == (void*)0), 0xA192L)) == p_42.f5) , 0x67BFL), (*g_556)))) != l_1722[0][1][0]), l_1696[0][4][0]))) < (*g_556)))), p_42.f5)) < p_42.f3)), g_348))) | l_1704), 3L)) > 0x88D3L), 1));
                    l_1666 = l_1666;
                }
                p_40 &= ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((*l_1666) , (((safe_unary_minus_func_int8_t_s(l_1717)) <= ((2L > l_1714) ^ (g_1336 = (p_42.f1 <= 247UL)))) || p_42.f3)), 7UL)), l_1643.f6)), p_42.f0)) == l_1643.f4);
                if ((safe_div_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((g_167 = (((l_1767 = g_1766) == (void*)0) , ((*l_1772) = (-6L)))), p_42.f6)) <= 65529UL) | (safe_lshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s((safe_add_func_int8_t_s_s((safe_div_func_uint64_t_u_u(l_1643.f6, (safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((((-3L) < 0UL) ^ l_1721), p_42.f3)), g_611[2].f7)))), l_1643.f1)), 18446744073709551615UL)), 3))), 2)))), l_1616)))
                { 
                    uint16_t l_1786 = 4UL;
                    const uint32_t l_1789 = 0x953F414EL;
                    uint8_t *l_1808 = (void*)0;
                    uint8_t *l_1809 = &g_90[1][1];
                    l_1786 = (safe_unary_minus_func_uint8_t_u(0x22L));
                    p_40 = ((((safe_div_func_int32_t_s_s((l_1789 | (((safe_add_func_uint32_t_u_u(1UL, (p_42.f5 = (l_1786 != (safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_int64_t_s_s(l_1714, l_1739.f1)) <= (&g_1484[1] != l_1800[0])), l_1718)), (*g_556))), (*g_556))))))) >= (***g_1522)) <= l_1801)), (-3L))) != l_1789) , l_1643.f6) < 0x6FEBL);
                    l_1719 = (((((l_1802 == l_1802) && ((l_1739.f0 , p_42.f2) == (((safe_lshift_func_uint8_t_u_u((!(g_1336 &= l_1643.f3)), ((*l_1809) &= (safe_rshift_func_int16_t_s_s(((*l_1772) = l_1693), 10))))) , ((safe_mul_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((*g_1227) &= l_1786), 0xFAABE1AF7C21B64FLL)), l_1643.f2)) , l_1816) , 1UL), p_40)) <= 65528UL)) != g_152[0].f3))) && 4294967295UL) & 0x2C0D02AEC527091DLL) < p_40);
                    l_1658 = l_1658;
                    p_40 ^= l_1696[0][1][0];
                }
                else
                { 
                    l_1817[4]--;
                    (**g_1522) = &l_1667;
                    (*g_275) = (***g_1194);
                }
            }
lbl_1822:
            l_1821[1][1] = (l_1820 = (*l_1553));
            p_42.f5 = (**g_1523);
            if ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((*g_709) == l_1827), (safe_add_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((p_42.f2 < ((g_152[0].f3 , (safe_div_func_uint64_t_u_u((p_42.f7 , (((((l_1711[4][0][2] |= ((*g_556) ^= ((((*l_1836) = (l_1705 = ((g_384.f0 ^ ((g_184 , 0UL) <= p_42.f7)) || p_42.f4))) == l_1739.f1) && (***g_1522)))) > l_1817[4]) || p_42.f0) , (*g_1227)) | l_1697)), 1L))) >= 0xF0L)) | p_42.f2), p_42.f7)) > p_42.f2), 65535UL)))), 0x28ADL)))
            { 
                for (g_1335 = 1; (g_1335 > 29); g_1335++)
                { 
                    int16_t l_1841 = 0xFD9EL;
                    (**g_709) = l_1840;
                    if (l_1841)
                        break;
                }
                return p_40;
            }
            else
            { 
                struct S1 l_1845[7] = {{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL}};
                int32_t l_1861 = 1L;
                int i;
                for (p_42.f3 = 0; (p_42.f3 >= 20); p_42.f3++)
                { 
                    uint16_t l_1844 = 0x0A68L;
                    int8_t *l_1857 = (void*)0;
                    int8_t *l_1858 = &l_1724;
                    if (l_1844)
                        break;
                    p_42.f5 ^= ((((*g_1227) = ((l_1845[6] , 0xC144D810L) > (p_40 = 0xC1400537L))) || (safe_add_func_int8_t_s_s(((*l_1858) = ((safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s(((~(l_1669 < ((void*)0 == l_1855))) && p_42.f2), 0x3227BDF1DD4E1345LL)), l_1844)) , g_1856), 7)) < p_42.f2)), 0x90L))) && 248UL);
                    (**g_1522) = &l_1696[0][4][0];
                }
                --l_1862[1];
            }
            l_1705 = (p_42.f0 && p_42.f0);
        }
        (*l_1867) = g_1865[0][0];
        if ((((*l_1746) = (void*)0) == (void*)0))
        { 
            int32_t l_1871 = 0xD915AFE1L;
            int32_t l_1872 = 0xC18A66FCL;
            int32_t l_1875[1][2];
            uint16_t l_1876 = 9UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1875[i][j] = 0x845D14D9L;
            }
            for (l_1385.f3 = 0; (l_1385.f3 < 35); l_1385.f3++)
            { 
                int32_t l_1870 = 0xB9B521A8L;
                int32_t l_1873 = (-1L);
                int32_t l_1874[2][3][6] = {{{0x99F54C5AL,0x72C73123L,0L,0x66179AC2L,2L,0x99F54C5AL},{1L,0x72C73123L,0x66179AC2L,1L,0xFA9A5829L,1L},{1L,0xFA9A5829L,1L,0x66179AC2L,0x72C73123L,1L}},{{0x99F54C5AL,2L,0x66179AC2L,0L,0x72C73123L,0x99F54C5AL},{0x66179AC2L,0xFA9A5829L,0L,0L,0xFA9A5829L,0x66179AC2L},{0x99F54C5AL,0x72C73123L,0L,0x66179AC2L,2L,0x99F54C5AL}}};
                int32_t *l_1879 = &g_166[1].f5;
                int i, j, k;
                l_1876--;
                l_1879 = (*l_1553);
            }
            (*l_1553) = &l_1875[0][1];
        }
        else
        { 
            uint16_t l_1882[1];
            const union U3 l_1906 = {0UL};
            int32_t l_1907[3];
            int i;
            for (i = 0; i < 1; i++)
                l_1882[i] = 0UL;
            for (i = 0; i < 3; i++)
                l_1907[i] = 2L;
            for (l_1643.f3 = 4; (l_1643.f3 > (-19)); l_1643.f3 = safe_sub_func_int8_t_s_s(l_1643.f3, 5))
            { 
                int16_t l_1885 = 0xCC0EL;
                ++l_1882[0];
                l_1885 = 6L;
            }
            for (l_1643.f6 = 0; (l_1643.f6 < 15); l_1643.f6 = safe_add_func_int8_t_s_s(l_1643.f6, 4))
            { 
                uint32_t l_1901 = 4UL;
                --l_1888;
                l_1907[2] &= (safe_lshift_func_uint8_t_u_s(1UL, (safe_mod_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_1901, (safe_sub_func_uint16_t_u_u(0xB4A9L, (*g_556))))), (p_42.f0 == p_42.f0))), (safe_div_func_int32_t_s_s((l_1906 , 8L), l_1901)))) , &l_1365[1]) == (void*)0), p_42.f3))));
            }
        }
        p_40 = 0x67B0ABE0L;
    }
lbl_2039:
    for (g_133 = 0; g_133 < 6; g_133 += 1)
    {
        l_1609[g_133] = &g_1909;
    }
    for (p_42.f0 = 0; (p_42.f0 > 40); ++p_42.f0)
    { 
        int32_t l_1913 = 3L;
        int32_t l_1914[1];
        const union U3 l_1915 = {0x2FF6147AL};
        union U3 *l_1916 = &g_1084;
        int32_t *l_1917[5] = {&g_7,&g_7,&g_7,&g_7,&g_7};
        int8_t l_1934 = 0x3DL;
        struct S2 l_1942 = {5UL,-1L,0xFFC5E112L,18446744073709551615UL};
        int32_t *l_1949 = &g_611[2].f5;
        struct S1 l_1966 = {4294967295UL};
        uint32_t ***l_1982 = (void*)0;
        uint64_t l_2009 = 1UL;
        struct S1 *l_2020 = &l_1966;
        int i;
        for (i = 0; i < 1; i++)
            l_1914[i] = (-1L);
        l_1914[0] = l_1913;
        l_1918 = ((*g_275) = (**g_1909));
        for (l_1913 = (-30); (l_1913 < 24); l_1913 = safe_add_func_int16_t_s_s(l_1913, 8))
        { 
            struct S1 l_1928[6] = {{4294967292UL},{0x090C9AA5L},{0x090C9AA5L},{4294967292UL},{0x090C9AA5L},{0x090C9AA5L}};
            int32_t l_1935 = 1L;
            struct S0 l_1954 = {18446744073709551610UL,0UL,0x647E47FAACE82799LL,0x51B26A3F535C2663LL,-9L,5L,0xB1L,1L};
            const struct S2 l_1957 = {0x18B472C550651EDFLL,0x8735L,1L,0x1666603EL};
            uint64_t ****l_1958 = (void*)0;
            uint64_t ****l_1960 = &g_1749;
            uint64_t *****l_1959 = &l_1960;
            struct S1 l_1967 = {4294967288UL};
            int32_t l_2008 = 0x809ACD33L;
            int i;
            for (l_1694 = 0; (l_1694 > 14); l_1694 = safe_add_func_int8_t_s_s(l_1694, 9))
            { 
                uint16_t ***l_1932 = &l_1931;
                int8_t *l_1933 = &l_1918.f6;
                int32_t l_1937[7][4][1] = {{{9L},{5L},{(-1L)},{5L}},{{9L},{5L},{(-1L)},{5L}},{{9L},{5L},{(-1L)},{5L}},{{9L},{5L},{(-1L)},{5L}},{{9L},{5L},{(-1L)},{5L}},{{9L},{5L},{(-1L)},{5L}},{{9L},{5L},{(-1L)},{5L}}};
                int32_t **l_1947[7] = {&g_8[1][1][0],(void*)0,&g_8[1][1][0],&g_8[1][1][0],(void*)0,&g_8[1][1][0],&g_8[1][1][0]};
                const union U3 l_1948 = {4294967292UL};
                int i, j, k;
                l_1935 |= ((-1L) && (safe_add_func_int32_t_s_s((p_42.f3 >= (safe_sub_func_uint8_t_u_u(g_611[2].f6, (+(p_42.f3 < (l_1928[2] , (safe_rshift_func_int16_t_s_s(p_42.f5, 1)))))))), (((*l_1933) = (((*l_1932) = l_1931) != &g_556)) >= l_1934))));
                for (g_133 = 5; (g_133 >= 0); g_133 -= 1)
                { 
                    int32_t *l_1936 = &g_133;
                    (*l_1553) = &l_1935;
                    (*l_1553) = l_1936;
                }
                if (l_1937[3][0][0])
                { 
                    uint32_t l_1938 = 4294967288UL;
                    struct S1 *l_1943[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1943[i] = &l_1928[0];
                    l_1938--;
                    l_1942 = l_1941;
                    l_1928[2] = l_1928[1];
                    if (p_42.f2)
                        continue;
                }
                else
                { 
                    l_1944++;
                }
                (*l_1949) &= (l_1954 , 0xD3228766L);
            }
            if ((safe_add_func_uint16_t_u_u(((l_1957 , l_1958) != ((*l_1959) = &g_1749)), (*g_556))))
            { 
                struct S0 **l_1965 = &g_275;
                int32_t l_1972 = 9L;
                uint16_t *l_1974 = (void*)0;
                const int16_t l_1978 = (-7L);
                l_1972 ^= (safe_div_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u((-1L), ((void*)0 == l_1965))) , 0x868E8CE0234050DBLL), ((((((**l_1931) = l_1928[2].f0) <= ((l_1967 = l_1966) , ((safe_mod_func_int64_t_s_s((safe_div_func_int16_t_s_s(p_42.f4, p_40)), (*g_1227))) != p_42.f2))) <= p_42.f0) < l_1928[2].f0) || p_42.f1)));
                for (l_1941.f0 = 0; (l_1941.f0 <= 4); l_1941.f0 += 1)
                { 
                    uint64_t l_1975[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1975[i] = 0UL;
                    (*l_1949) |= ((!((void*)0 != l_1974)) & l_1975[0]);
                    if (p_42.f1)
                        break;
                    (*l_1553) = &l_1914[0];
                    (*l_1949) = (l_1975[0] < (safe_mul_func_uint16_t_u_u((p_42.f3 , (*g_556)), l_1978)));
                }
                for (l_1934 = 0; (l_1934 < (-5)); l_1934--)
                { 
                    if (p_42.f2)
                        break;
                    if (p_40)
                        break;
                    l_1917[3] = &l_1914[0];
                    return l_1954.f5;
                }
            }
            else
            { 
                uint8_t *l_1981[3][4][6] = {{{&g_90[1][1],(void*)0,&g_88,(void*)0,(void*)0,&g_88},{&g_90[3][1],&g_90[1][1],(void*)0,(void*)0,(void*)0,&g_88},{(void*)0,&g_90[3][1],&g_88,&g_90[0][2],&g_90[0][2],&g_88},{(void*)0,(void*)0,&g_88,(void*)0,&g_90[1][1],(void*)0}},{{&g_90[3][1],(void*)0,&g_88,(void*)0,&g_90[0][2],&g_88},{&g_90[1][1],&g_90[3][1],&g_88,&g_90[1][1],(void*)0,(void*)0},{(void*)0,&g_90[1][1],&g_88,&g_90[1][1],(void*)0,&g_88},{&g_90[1][1],(void*)0,&g_88,(void*)0,(void*)0,&g_88}},{{&g_90[3][1],&g_90[1][1],(void*)0,(void*)0,(void*)0,&g_88},{(void*)0,&g_90[3][1],&g_88,&g_90[0][2],&g_90[0][2],&g_88},{(void*)0,(void*)0,&g_88,(void*)0,&g_90[1][1],(void*)0},{&g_90[3][1],(void*)0,&g_88,(void*)0,&g_90[0][2],&g_88}}};
                uint32_t ****l_1983 = &g_254[0];
                struct S1 **l_1984 = (void*)0;
                int16_t *l_1987 = &l_1941.f1;
                int32_t ***l_1994 = (void*)0;
                const uint64_t l_2001 = 1UL;
                uint32_t l_2002 = 1UL;
                int32_t l_2006 = (-1L);
                int32_t l_2007 = 0xA62D7C70L;
                int i, j, k;
                if (((g_90[1][2] ^= 1UL) >= (((*l_1987) |= (((*l_1983) = l_1982) == ((((((l_1984 != (**l_1768)) == 255UL) , g_216.f0) > ((safe_mod_func_int64_t_s_s(p_42.f5, p_42.f0)) | p_42.f0)) <= 0x5ABFL) , l_1982))) == p_42.f3)))
                { 
                    struct S1 l_1990 = {0x07208734L};
                    int32_t ***l_1993[1][3][6] = {{{&l_1553,&l_1553,&g_362[1],&l_1553,&l_1553,&g_362[1]},{&l_1553,&l_1553,&g_362[1],&l_1553,&l_1553,&g_362[1]},{&g_1362[0],&g_1362[0],&l_1553,&g_1362[0],&g_1362[0],&l_1553}}};
                    int32_t ****l_1995 = &g_361[0][0];
                    int i, j, k;
                    (*l_1949) = ((safe_sub_func_int64_t_s_s((l_1990 , ((((-10L) == (0xB7L < ((l_1993[0][2][4] != ((*l_1995) = l_1994)) == (((safe_mul_func_uint8_t_u_u((p_42.f3 < (safe_add_func_int8_t_s_s((+(l_2001 , p_42.f2)), 0x77L))), (*l_1949))) < 0x67D790EBB4614116LL) , (*l_1949))))) > p_42.f6) , l_2002)), g_2003)) <= p_42.f4);
                }
                else
                { 
                    int16_t l_2004 = 0x2940L;
                    int32_t l_2005 = 0xDD835E83L;
                    l_2009++;
                    (*l_1949) = (((safe_rshift_func_uint16_t_u_s(((5L || (l_2014 > ((p_42.f4 != 0x36C7L) != (((~((2UL == ((((safe_sub_func_uint64_t_u_u(p_42.f3, ((safe_div_func_uint8_t_u_u((0UL >= l_1954.f7), p_40)) >= l_1954.f4))) <= 0x4C5DL) <= l_1954.f5) | (*g_556))) >= (-4L))) >= 18446744073709551609UL) && l_2005)))) == g_1113.f7), 12)) > 0x6C25L) | (*g_1227));
                    return (*l_1949);
                }
                if (p_42.f5)
                    break;
            }
            return p_42.f6;
        }
        (*l_2020) = l_1966;
    }
    for (g_1335 = 0; (g_1335 <= 0); g_1335 += 1)
    { 
        int8_t l_2021 = (-1L);
        int32_t l_2023 = 0L;
        uint16_t l_2026 = 0xDAF8L;
        int16_t l_2029 = 0x60B4L;
        int32_t l_2030 = 0xF5401249L;
        int32_t l_2032 = 5L;
        if (l_2021)
            break;
        for (g_1468 = 0; (g_1468 <= 0); g_1468 += 1)
        { 
            int32_t l_2022 = 0x67F6366DL;
            int32_t l_2024 = 8L;
            int32_t l_2025 = 0L;
            int32_t l_2033 = 0L;
            int32_t l_2034 = 0xD769E6C4L;
            int32_t l_2035 = 0xEE87F6FBL;
            --l_2026;
            if (p_42.f1)
                continue;
            for (l_1694 = 2; (l_1694 >= 0); l_1694 -= 1)
            { 
                uint8_t l_2036[6][1] = {{2UL},{2UL},{251UL},{2UL},{2UL},{251UL}};
                uint32_t l_2042 = 1UL;
                int i, j;
                for (l_1918.f2 = 0; (l_1918.f2 <= 0); l_1918.f2 += 1)
                { 
                    int32_t l_2031[7][5][4] = {{{(-1L),(-1L),0x70D38A26L,(-1L)},{3L,0x6DB6E845L,0x062E0D40L,0L},{9L,(-1L),0L,0x062E0D40L},{0xCE5C76F4L,(-1L),0x1C1A1965L,0L},{(-1L),0x6DB6E845L,(-4L),(-1L)}},{{0x39B91385L,(-1L),0x6DB6E845L,(-1L)},{0x189443FDL,0xCE5C76F4L,0x1C1A1965L,0xCE5C76F4L},{(-6L),0L,0x39B91385L,0x175A9967L},{9L,(-6L),0L,(-1L)},{0L,3L,0x70D38A26L,0x3F7DF936L}},{{0L,0x6DB6E845L,0L,(-1L)},{9L,0x3F7DF936L,0x39B91385L,0x062E0D40L},{(-6L),0x189443FDL,0x1C1A1965L,3L},{0x189443FDL,0x6DB6E845L,0x6DB6E845L,0x189443FDL},{0x39B91385L,0L,(-4L),(-1L)}},{{(-1L),0x175A9967L,0x1C1A1965L,(-6L)},{0xCE5C76F4L,0L,0L,(-6L)},{9L,0x175A9967L,0x062E0D40L,(-1L)},{3L,0L,0x70D38A26L,0x189443FDL},{(-1L),0x6DB6E845L,(-1L),3L}},{{9L,0x189443FDL,9L,0x062E0D40L},{0x175A9967L,0x3F7DF936L,0x1C1A1965L,(-1L)},{0x3F7DF936L,0x6DB6E845L,0L,0x3F7DF936L},{0x39B91385L,3L,0L,(-1L)},{0x3F7DF936L,(-6L),0x1C1A1965L,0x175A9967L}},{{0x175A9967L,0L,9L,0xCE5C76F4L},{9L,0xCE5C76F4L,(-1L),(-1L)},{(-1L),(-1L),0x70D38A26L,(-1L)},{3L,0x6DB6E845L,0x062E0D40L,0L},{9L,(-1L),0L,0x062E0D40L}},{{0xCE5C76F4L,(-1L),0x1C1A1965L,0L},{(-1L),0x6DB6E845L,(-4L),(-1L)},{0x39B91385L,(-1L),0x6DB6E845L,(-1L)},{0x189443FDL,0xCE5C76F4L,0x1C1A1965L,0xCE5C76F4L},{(-6L),0L,0x39B91385L,0x175A9967L}}};
                    int i, j, k;
                    l_2036[0][0]++;
                    (*g_1523) = g_1097[g_1468];
                }
                if (g_1576)
                    goto lbl_2039;
                for (l_2026 = 0; (l_2026 <= 0); l_2026 += 1)
                { 
                    struct S2 *l_2040[1];
                    uint8_t *l_2041 = &l_2036[2][0];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_2040[i] = (void*)0;
                    if (l_2021)
                        break;
                    l_2042 = (((**l_1931) &= p_42.f0) ^ ((l_2040[0] == (void*)0) ^ ((*l_2041) = (g_90[l_1694][(g_1335 + 2)] ^= (g_1097[g_1468] != &p_40)))));
                }
            }
            (**g_1522) = (void*)0;
        }
    }
    for (l_2014 = (-10); (l_2014 == (-9)); ++l_2014)
    { 
        struct S2 l_2045 = {9UL,0L,-1L,0x9AE65C34L};
        struct S1 **l_2050 = &g_169;
        struct S1 ***l_2049 = &l_2050;
        struct S1 l_2053 = {0UL};
        int32_t *l_2080 = &g_133;
        int64_t *l_2100 = (void*)0;
        const int32_t *l_2193 = &g_1113.f5;
        uint64_t **l_2197 = &g_1581;
        uint32_t * const **l_2207 = &g_2205;
        union U3 l_2210[4] = {{0UL},{0UL},{0UL},{0UL}};
        int32_t l_2230 = 1L;
        int32_t l_2247 = (-1L);
        uint64_t l_2258 = 0x0A9DAF5CFC6F7FA2LL;
        uint32_t l_2296[2];
        uint32_t l_2341 = 0xBB88B1FAL;
        struct S0 *l_2343[3][1];
        int32_t ***l_2379 = &g_1096;
        int32_t l_2390 = 0xF309C8CCL;
        int32_t l_2391 = 0xBC1CEFA7L;
        int32_t l_2392 = 0L;
        int32_t l_2393 = 0x7A99ABB8L;
        int32_t l_2394 = 5L;
        int32_t l_2395 = 0xD195E66BL;
        int32_t l_2396 = 1L;
        int32_t l_2397 = 1L;
        int32_t l_2398 = 0xA4032D07L;
        int32_t l_2399 = 0x9AAFA952L;
        int32_t l_2400[4][6][1] = {{{0x7DE44398L},{1L},{0L},{0L},{1L},{0x7DE44398L}},{{0xCDE192ADL},{0x7DE44398L},{1L},{0L},{0L},{1L}},{{0x7DE44398L},{0xCDE192ADL},{0x7DE44398L},{1L},{0L},{0L}},{{1L},{0x7DE44398L},{0xCDE192ADL},{0x7DE44398L},{1L},{0L}}};
        int16_t l_2401 = 0x284FL;
        int32_t l_2403[7][6][1] = {{{0xF64A9B02L},{0L},{0x4710967BL},{0x318274D2L},{0xB03185F2L},{0xB03185F2L}},{{0x318274D2L},{0x4710967BL},{0L},{0xF64A9B02L},{(-7L)},{1L}},{{(-7L)},{0x318274D2L},{0xF64A9B02L},{(-2L)},{(-2L)},{0xF64A9B02L}},{{0x318274D2L},{(-7L)},{1L},{(-1L)},{1L},{(-7L)}},{{0x318274D2L},{0xF64A9B02L},{(-2L)},{(-2L)},{0xF64A9B02L},{0x318274D2L}},{{(-7L)},{1L},{(-1L)},{1L},{(-7L)},{0x318274D2L}},{{0xF64A9B02L},{(-2L)},{(-2L)},{0xF64A9B02L},{0x318274D2L},{(-7L)}}};
        int8_t l_2404[2];
        int32_t l_2405 = (-5L);
        int32_t l_2406[4][4][2] = {{{0x66C0AD49L,0x66C0AD49L},{0x66C0AD49L,0L},{(-9L),1L},{0L,1L}},{{(-9L),0L},{0x66C0AD49L,0x66C0AD49L},{0x66C0AD49L,0L},{(-9L),1L}},{{0L,1L},{(-9L),0L},{0x66C0AD49L,0x66C0AD49L},{0x66C0AD49L,0L}},{{(-9L),1L},{0L,1L},{(-9L),0L},{0x66C0AD49L,0x66C0AD49L}}};
        uint16_t l_2407[5][2][6] = {{{0UL,0xBB2CL,0xBB2CL,0UL,0UL,0xBB2CL},{0UL,0UL,0xBB2CL,0xBB2CL,0UL,0UL}},{{0UL,0xBB2CL,0xBB2CL,0UL,0UL,0xBB2CL},{0UL,0UL,0xBB2CL,0xBB2CL,0UL,0UL}},{{0UL,0xBB2CL,0xBB2CL,0UL,0UL,0xBB2CL},{0UL,0UL,0xBB2CL,0xBB2CL,0UL,0UL}},{{0UL,0xBB2CL,0xBB2CL,0UL,0UL,0xBB2CL},{0UL,0UL,0xBB2CL,0xBB2CL,0UL,0UL}},{{0UL,0xBB2CL,0xBB2CL,0UL,0UL,0xBB2CL},{0UL,0UL,0xBB2CL,0xBB2CL,0UL,0UL}}};
        int32_t l_2455 = 0x28AD4E2CL;
        const struct S2 l_2460 = {18446744073709551615UL,0x51F9L,0x4840B431L,1UL};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2296[i] = 9UL;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_2343[i][j] = &g_611[2];
        }
        for (i = 0; i < 2; i++)
            l_2404[i] = 0x99L;
    }
    return p_42.f7;
}



static int32_t ** func_44(union U3  p_45)
{ 
    const uint32_t l_1209 = 0xDF8766DAL;
    struct S2 l_1217[6][2][2] = {{{{0x5EB5FE5F617C887DLL,1L,1L,0UL},{0x5EB5FE5F617C887DLL,1L,1L,0UL}},{{0x5EB5FE5F617C887DLL,1L,1L,0UL},{0x5EB5FE5F617C887DLL,1L,1L,0UL}}},{{{0x5EB5FE5F617C887DLL,1L,1L,0UL},{0x5EB5FE5F617C887DLL,1L,1L,0UL}},{{0x5EB5FE5F617C887DLL,1L,1L,0UL},{0x5EB5FE5F617C887DLL,1L,1L,0UL}}},{{{0x5EB5FE5F617C887DLL,1L,1L,0UL},{0x5EB5FE5F617C887DLL,1L,1L,0UL}},{{0x5EB5FE5F617C887DLL,1L,1L,0UL},{0x5EB5FE5F617C887DLL,1L,1L,0UL}}},{{{0x5EB5FE5F617C887DLL,1L,1L,0UL},{0x5EB5FE5F617C887DLL,1L,1L,0UL}},{{0x5EB5FE5F617C887DLL,1L,1L,0UL},{0x5EB5FE5F617C887DLL,1L,1L,0UL}}},{{{0x5EB5FE5F617C887DLL,1L,1L,0UL},{0x5EB5FE5F617C887DLL,1L,1L,0UL}},{{0x5EB5FE5F617C887DLL,1L,1L,0UL},{0x5EB5FE5F617C887DLL,1L,1L,0UL}}},{{{0x5EB5FE5F617C887DLL,1L,1L,0UL},{0x5EB5FE5F617C887DLL,1L,1L,0UL}},{{0x5EB5FE5F617C887DLL,1L,1L,0UL},{0x5EB5FE5F617C887DLL,1L,1L,0UL}}}};
    struct S2 *l_1265 = &l_1217[3][1][1];
    int32_t l_1277 = 1L;
    int32_t l_1280 = 1L;
    int32_t l_1284 = 1L;
    int32_t *l_1291[5];
    int32_t *l_1292 = &g_7;
    struct S0 *l_1340 = &g_166[1];
    int32_t **l_1355 = &g_8[5][0][0];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1291[i] = &g_611[2].f5;
    if (l_1209)
    { 
        uint32_t l_1212[6] = {0x0E70C675L,0UL,0x0E70C675L,0x0E70C675L,0UL,0x0E70C675L};
        int32_t l_1218[4];
        int64_t *l_1226 = &g_166[1].f3;
        struct S0 l_1235 = {0UL,3UL,1UL,0xB650D08E21C02F6BLL,0x25L,0x90B253B1L,0x9DL,0x17L};
        int32_t *l_1309 = &g_133;
        int32_t l_1325[5] = {0L,0L,0L,0L,0L};
        uint16_t l_1337 = 0x32F3L;
        uint64_t l_1349 = 0xFA8BF67AAEA15066LL;
        int i;
        for (i = 0; i < 4; i++)
            l_1218[i] = 0x17544E5EL;
        for (g_348 = 29; (g_348 < 7); g_348--)
        { 
            uint32_t l_1215 = 0x13BAE3BCL;
            int32_t *l_1231 = &g_133;
            int32_t l_1278 = 0x812902BEL;
            int32_t l_1281 = 0L;
            int32_t l_1282[2][1];
            struct S2 l_1289 = {1UL,0x070BL,0x1A756126L,1UL};
            const struct S1 l_1290[5] = {{0xBEA814A4L},{0xBEA814A4L},{0xBEA814A4L},{0xBEA814A4L},{0xBEA814A4L}};
            struct S1 l_1295 = {0x247D56FAL};
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1282[i][j] = 8L;
            }
            if (l_1212[2])
            { 
                uint32_t l_1221 = 1UL;
                uint64_t *l_1232 = &g_1189;
                struct S0 ***l_1255 = &g_1195[0];
                int32_t l_1276 = 0xA45E0529L;
                int32_t l_1279 = 8L;
                int32_t l_1283 = (-1L);
                int32_t l_1285[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1285[i] = 1L;
                for (g_100 = 0; (g_100 >= 24); g_100 = safe_add_func_uint8_t_u_u(g_100, 8))
                { 
                    struct S0 l_1216 = {0xBEA8C70BL,3UL,18446744073709551615UL,0x770FEF256DBF1744LL,0x32L,-4L,0x5AL,0x7BL};
                    if (l_1215)
                        break;
                    (*g_275) = l_1216;
                }
                if (p_45.f0)
                { 
                    uint8_t *l_1228 = &g_90[3][1];
                    int32_t l_1229 = 0xD78CE705L;
                    uint32_t l_1230 = 0x5D8572A0L;
                    (*g_377) = l_1217[1][1][0];
                    l_1218[2] &= p_45.f0;
                    l_1230 ^= (safe_rshift_func_uint16_t_u_s(((((*g_556) = l_1221) , (p_45.f0 && (((p_45.f0 || (safe_div_func_uint16_t_u_u(0x2572L, (255UL & ((*l_1228) = ((((safe_sub_func_uint16_t_u_u(((g_90[2][0] || (l_1226 != g_1227)) < (*g_556)), 1UL)) != l_1212[5]) >= p_45.f0) != (*g_1227))))))) | l_1229) == 1UL))) | l_1209), 6));
                }
                else
                { 
                    l_1231 = (void*)0;
                }
                if ((0UL && ((*l_1232)--)))
                { 
                    struct S1 **l_1236 = &g_169;
                    struct S1 *l_1238[5][3] = {{&g_216,&g_216,(void*)0},{&g_216,&g_216,(void*)0},{&g_216,&g_216,(void*)0},{&g_216,&g_216,(void*)0},{&g_216,&g_216,(void*)0}};
                    struct S1 **l_1237 = &l_1238[0][1];
                    int32_t l_1256 = 1L;
                    int32_t l_1257 = 0x1C75370EL;
                    uint16_t *l_1258 = &g_103;
                    uint32_t *l_1259 = (void*)0;
                    uint32_t *l_1260 = &l_1215;
                    int32_t *l_1268 = &l_1235.f5;
                    int i, j;
                    (*g_709) = (*g_709);
                    l_1235.f5 = ((l_1235 , (((*l_1236) = &g_216) != ((*l_1237) = &g_216))) < (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((*l_1232) |= (safe_mod_func_uint32_t_u_u(((*l_1260) ^= ((((safe_lshift_func_int8_t_s_s((-2L), 6)) | (safe_rshift_func_uint16_t_u_u((*g_556), ((*l_1258) &= ((l_1257 |= (safe_div_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s((l_1235.f0 > (((((l_1217[1][1][0].f0 > p_45.f0) && p_45.f0) , (void*)0) == l_1255) ^ l_1256)), l_1256)) != 0x1E79C717F91F6023LL) < 0xC2CCD9EBL), p_45.f0))) >= p_45.f0))))) < g_384.f0) && 246UL)), 9L))), p_45.f0)), 0x48FE3576L)), g_166[1].f0)));
                    l_1218[2] ^= l_1217[1][1][0].f2;
                    (*l_1268) = (safe_mul_func_uint16_t_u_u(p_45.f0, (((*g_169) , (((((++(*l_1260)) <= ((l_1265 = &l_1217[3][0][1]) != &l_1217[3][0][0])) > p_45.f0) != (safe_lshift_func_int8_t_s_u(l_1217[1][1][0].f1, (((**g_709) == (void*)0) < p_45.f0)))) <= p_45.f0)) || 0UL)));
                }
                else
                { 
                    int32_t *l_1269 = (void*)0;
                    int32_t **l_1270 = &g_8[0][3][0];
                    int32_t *l_1271 = &l_1218[0];
                    int32_t *l_1272 = &g_588;
                    int32_t *l_1273 = (void*)0;
                    int32_t *l_1274 = &g_7;
                    int32_t *l_1275[3];
                    uint16_t l_1286[7][5][1] = {{{0x428AL},{0UL},{65533UL},{65533UL},{0UL}},{{0x428AL},{4UL},{65535UL},{0x5D81L},{65535UL}},{{4UL},{0x428AL},{0UL},{1UL},{1UL}},{{65535UL},{0UL},{0x5D81L},{9UL},{0x50D7L}},{{9UL},{0x5D81L},{0UL},{65535UL},{1UL}},{{1UL},{65535UL},{0UL},{0x5D81L},{9UL}},{{0x50D7L},{9UL},{0x5D81L},{0UL},{65535UL}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1275[i] = &l_1218[3];
                    (*l_1270) = l_1269;
                    l_1286[3][3][0]++;
                    g_216 = (l_1289 , l_1290[3]);
                }
                for (l_1215 = 0; (l_1215 <= 0); l_1215 += 1)
                { 
                    int32_t **l_1293 = &l_1291[2];
                    int i, j;
                    l_1291[2] = &l_1282[(l_1215 + 1)][l_1215];
                    l_1285[0] &= p_45.f0;
                    (*l_1293) = l_1292;
                }
            }
            else
            { 
                struct S1 *l_1294[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1294[i] = &g_216;
                l_1295 = g_216;
            }
        }
        if (p_45.f0)
        { 
            int32_t **l_1296[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1296[i] = &g_8[5][0][0];
            return l_1296[3];
        }
        else
        { 
            struct S2 **l_1302[2];
            int32_t *l_1306 = &g_133;
            int32_t l_1326 = 0x43F38A95L;
            int32_t l_1327 = (-1L);
            int32_t l_1328 = 0x8B4DE282L;
            int32_t l_1329 = 0x370D8A83L;
            int32_t l_1332[1];
            int32_t **l_1350 = &g_8[5][0][0];
            int i;
            for (i = 0; i < 2; i++)
                l_1302[i] = &g_377;
            for (i = 0; i < 1; i++)
                l_1332[i] = 0L;
            for (g_167 = 3; (g_167 >= 0); g_167 -= 1)
            { 
                uint32_t ** const *l_1312[4] = {&g_187,&g_187,&g_187,&g_187};
                uint16_t *l_1322 = &g_103;
                int32_t l_1323 = 0x106902FDL;
                uint32_t l_1324 = 0xC7D184FCL;
                int32_t l_1330 = 0x28202409L;
                int32_t l_1331 = 0xC84C24BCL;
                int32_t l_1333 = (-1L);
                int32_t l_1334[7][7] = {{(-1L),(-1L),0x0CD99438L,5L,0L,0x0CD99438L,0L},{7L,(-1L),(-1L),7L,0x8F907A5CL,0x8A0191C5L,7L},{(-6L),0L,1L,1L,0L,(-6L),(-8L)},{0x43FA9EC1L,7L,0L,(-1L),(-1L),0L,7L},{0L,(-8L),(-6L),0L,1L,1L,0L},{0x8A0191C5L,7L,0x8A0191C5L,0x8F907A5CL,7L,(-1L),(-1L)},{5L,0L,0x0CD99438L,0L,5L,0x0CD99438L,(-1L)}};
                struct S1 **l_1348 = &g_169;
                struct S1 ***l_1347 = &l_1348;
                int i, j;
                if (p_45.f0)
                { 
                    uint32_t l_1301 = 0x4C6F20FFL;
                    struct S2 **l_1303 = &g_377;
                    struct S1 **l_1304 = &g_169;
                    int i;
                    (*l_1292) &= (g_4 ^ (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(l_1301, 12)), p_45.f0)));
                    (*l_1292) = (((*g_709) = l_1302[0]) == l_1303);
                    l_1291[g_167] = (void*)0;
                    (*l_1304) = (p_45.f0 , (*g_797));
                }
                else
                { 
                    int32_t *l_1305[4][4][5] = {{{&l_1218[2],&l_1280,&l_1280,&l_1218[2],&l_1280},{&g_133,&g_133,&l_1218[0],&g_133,&g_133},{&l_1280,&l_1218[2],&l_1280,&l_1280,&l_1218[2]},{&g_133,&l_1218[3],&l_1218[3],&g_133,&l_1218[3]}},{{&l_1218[2],&l_1218[2],&l_1235.f5,&l_1218[2],&l_1218[2]},{&l_1218[3],&g_133,&l_1218[3],&l_1218[3],&g_133},{&l_1218[2],&l_1280,&l_1280,&l_1218[2],&l_1280},{&g_133,&g_133,&l_1218[0],&g_133,&g_133}},{{&l_1280,&l_1218[2],&l_1280,&l_1280,&l_1218[2]},{&g_133,&l_1218[3],&l_1218[3],&g_133,&l_1218[3]},{&l_1218[2],&l_1218[2],&l_1235.f5,&l_1218[2],&l_1218[2]},{&l_1218[3],&g_133,&l_1218[3],&l_1218[3],&g_133}},{{&l_1218[2],&l_1280,&l_1280,&l_1218[2],&l_1280},{&g_133,&g_133,&l_1218[0],&g_133,&g_133},{&l_1280,&l_1218[2],&l_1280,&l_1280,&l_1218[2]},{&g_133,&l_1218[3],&l_1218[3],&g_133,&l_1218[3]}}};
                    int i, j, k;
                    l_1306 = l_1305[1][0][0];
                }
                (*l_1292) |= ((!18446744073709551610UL) >= ((void*)0 != (***g_252)));
                for (g_1189 = 0; (g_1189 <= 6); g_1189 += 1)
                { 
                    int32_t **l_1308[4][6][2] = {{{&g_8[5][0][0],(void*)0},{&g_8[5][0][0],(void*)0},{&g_8[5][0][0],&l_1291[(g_167 + 1)]},{&g_8[5][0][0],(void*)0},{&g_8[5][0][0],(void*)0},{&g_8[5][0][0],&l_1291[(g_167 + 1)]}},{{&g_8[5][0][0],(void*)0},{&g_8[5][0][0],(void*)0},{&g_8[5][0][0],&l_1291[(g_167 + 1)]},{&g_8[5][0][0],(void*)0},{&g_8[5][0][0],(void*)0},{&g_8[5][0][0],&l_1291[(g_167 + 1)]}},{{&g_8[5][0][0],(void*)0},{&g_8[5][0][0],(void*)0},{&g_8[5][0][0],&l_1291[(g_167 + 1)]},{&g_8[5][0][0],(void*)0},{&g_8[5][0][0],(void*)0},{&g_8[5][0][0],&l_1291[2]}},{{&g_8[5][0][0],&l_1291[(g_167 + 1)]},{&l_1291[2],&l_1291[(g_167 + 1)]},{&g_8[5][0][0],&l_1291[2]},{&g_8[5][0][0],&l_1291[(g_167 + 1)]},{&l_1291[2],&l_1291[(g_167 + 1)]},{&g_8[5][0][0],&l_1291[2]}}};
                    struct S0 l_1315[1][3] = {{{0xBDA35D0CL,0x87A1ED75L,0xBCE19665E6A8061ELL,1L,-3L,0xEB455972L,0xF7L,9L},{0xBDA35D0CL,0x87A1ED75L,0xBCE19665E6A8061ELL,1L,-3L,0xEB455972L,0xF7L,9L},{0xBDA35D0CL,0x87A1ED75L,0xBCE19665E6A8061ELL,1L,-3L,0xEB455972L,0xF7L,9L}}};
                    int i, j, k;
                    l_1309 = &l_1218[g_167];
                    (*l_1306) = (-1L);
                    l_1325[4] &= ((*l_1292) = ((safe_rshift_func_uint16_t_u_u(((((((*g_253) != l_1312[0]) || (*g_1227)) | ((g_166[1].f3 = (safe_lshift_func_uint16_t_u_s((*l_1306), (l_1315[0][2] , (safe_div_func_int64_t_s_s(0L, (safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(((l_1322 != (void*)0) & g_152[0].f1), l_1323)) >= (*l_1292)), 0xD0D3D10DC7BAD562LL)))))))) || p_45.f0)) || l_1324) || 0x58L), 13)) > (*l_1306)));
                    --l_1337;
                    l_1349 &= ((((void*)0 == l_1340) == (g_611[2].f7 & ((safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((*l_1309), p_45.f0)), ((void*)0 != l_1347))) || g_1113.f4), p_45.f0)) == 8L))) > p_45.f0);
                }
            }
            return l_1350;
        }
    }
    else
    { 
        int32_t **l_1353[6];
        int32_t ***l_1354[7][3][7] = {{{&l_1353[3],&g_362[2],(void*)0,&l_1353[3],(void*)0,&l_1353[3],(void*)0},{&l_1353[3],&l_1353[3],&l_1353[3],&l_1353[3],&l_1353[3],&l_1353[2],&g_362[2]},{&g_362[2],(void*)0,&l_1353[3],(void*)0,&l_1353[4],&g_362[1],(void*)0}},{{&l_1353[0],&l_1353[3],&g_362[2],&l_1353[3],&g_362[2],&l_1353[3],&g_362[2]},{&g_362[2],(void*)0,&g_362[2],&l_1353[3],&l_1353[3],&g_362[0],(void*)0},{&l_1353[3],&l_1353[0],&l_1353[3],&l_1353[5],&g_362[2],&l_1353[3],(void*)0}},{{&l_1353[3],&l_1353[3],&l_1353[3],&g_362[2],&l_1353[0],&g_362[2],&l_1353[3]},{&g_362[1],(void*)0,&l_1353[3],&l_1353[0],&l_1353[3],&g_362[1],&g_362[0]},{&l_1353[3],&l_1353[3],&l_1353[3],&g_362[1],(void*)0,(void*)0,&g_362[1]}},{{&g_362[2],&g_362[1],&g_362[2],&g_362[2],&g_362[1],&g_362[2],(void*)0},{&l_1353[3],&l_1353[3],&g_362[2],&l_1353[3],&l_1353[2],&l_1353[3],(void*)0},{&l_1353[3],&l_1353[3],&l_1353[3],&g_362[2],(void*)0,&g_362[2],&l_1353[3]}},{{&g_362[2],&g_362[2],&l_1353[3],&l_1353[0],&l_1353[4],(void*)0,&l_1353[3]},{&g_362[2],(void*)0,(void*)0,&l_1353[4],&l_1353[0],&g_362[1],(void*)0},{&g_362[2],(void*)0,&g_362[2],&l_1353[3],&l_1353[3],&g_362[2],&l_1353[3]}},{{&l_1353[3],(void*)0,(void*)0,&l_1353[3],&l_1353[2],&l_1353[3],(void*)0},{&l_1353[3],(void*)0,&l_1353[3],&g_362[0],&g_362[2],&g_362[0],&l_1353[3]},{&g_362[2],&g_362[2],&l_1353[3],(void*)0,(void*)0,&l_1353[3],&g_362[1]}},{{&g_362[1],&l_1353[3],&l_1353[0],&l_1353[3],(void*)0,&g_362[1],&g_362[1]},{&g_362[2],&l_1353[3],(void*)0,&g_362[1],(void*)0,&l_1353[2],&g_362[2]},{&l_1353[4],&g_362[1],(void*)0,&l_1353[3],&g_362[2],&l_1353[3],(void*)0}}};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1353[i] = (void*)0;
        for (g_88 = 0; (g_88 == 25); g_88++)
        { 
            return l_1353[3];
        }
        l_1355 = &l_1292;
        for (g_1189 = 0; (g_1189 < 54); g_1189 = safe_add_func_uint16_t_u_u(g_1189, 1))
        { 
            struct S1 l_1358 = {1UL};
            struct S1 *l_1359 = (void*)0;
            struct S1 *l_1360 = (void*)0;
            struct S1 *l_1361 = &l_1358;
            (*l_1361) = l_1358;
        }
        (**l_1355) &= p_45.f0;
    }
    return g_1362[0];
}



static union U3  func_46(int16_t  p_47)
{ 
    int32_t **l_76 = &g_8[5][0][0];
    const union U3 l_586 = {1UL};
    int32_t *l_587 = &g_588;
    int8_t *l_1114 = &g_927;
    int32_t l_1118 = 0x94DCAC4DL;
    struct S0 ***l_1196[4][1][7] = {{{&g_1195[1],&g_1195[1],&g_1195[1],&g_1195[1],&g_1195[1],&g_1195[1],&g_1195[1]}},{{&g_1195[0],&g_1195[0],&g_1195[0],&g_1195[0],&g_1195[0],&g_1195[0],&g_1195[0]}},{{&g_1195[1],&g_1195[1],&g_1195[1],&g_1195[1],&g_1195[1],&g_1195[1],&g_1195[1]}},{{&g_1195[0],&g_1195[0],&g_1195[0],&g_1195[0],&g_1195[0],&g_1195[0],&g_1195[0]}}};
    int i, j, k;
    l_1118 ^= func_48((func_53((func_58(p_47, p_47) , func_71(p_47, g_4, l_76, ((p_47 && 0x2E268365L) == p_47))), l_586, l_587, g_589) , (*l_76)), g_1113, g_4, l_1114);
    for (g_588 = 23; (g_588 > (-7)); g_588 = safe_sub_func_uint64_t_u_u(g_588, 9))
    { 
        struct S1 l_1121 = {0xB8A93A26L};
        int16_t *l_1136 = &g_152[0].f1;
        int32_t *l_1137 = &g_611[2].f5;
        union U3 *l_1138 = (void*)0;
        int8_t l_1162[1][7][3];
        struct S2 l_1165 = {0UL,0x896FL,7L,0UL};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 3; k++)
                    l_1162[i][j][k] = 0L;
            }
        }
        if ((l_1121 , ((*l_1137) = ((safe_lshift_func_int8_t_s_u(((((*l_1136) = (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_1113.f5, ((safe_add_func_int16_t_s_s(0x81EFL, (p_47 != (safe_mod_func_uint8_t_u_u((0x04L == (safe_mod_func_int8_t_s_s(l_1121.f0, p_47))), l_1121.f0))))) || 1UL))), p_47)), 3UL))) >= g_384.f3) , 0L), 0)) , p_47))))
        { 
            uint16_t l_1176 = 1UL;
            uint64_t * const l_1188 = &g_1189;
            uint64_t * const *l_1187 = &l_1188;
            int32_t l_1199 = 0L;
            union U3 l_1206 = {6UL};
            l_1138 = l_1138;
            for (g_927 = 0; g_927 < 3; g_927 += 1)
            {
                g_362[g_927] = &g_8[2][2][0];
            }
            for (g_851 = 14; (g_851 >= (-9)); --g_851)
            { 
                int64_t *l_1143 = &g_166[1].f3;
                int32_t l_1150 = 0x72ED8AE0L;
                uint16_t *l_1151[1][1];
                int16_t l_1152[1][5] = {{6L,6L,6L,6L,6L}};
                const int64_t l_1172 = 0L;
                uint64_t *l_1186 = (void*)0;
                uint64_t * const *l_1185[7][3][5] = {{{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186},{(void*)0,&l_1186,(void*)0,&l_1186,(void*)0},{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186}},{{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186},{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186},{(void*)0,&l_1186,(void*)0,&l_1186,(void*)0}},{{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186},{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186},{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186}},{{(void*)0,&l_1186,(void*)0,&l_1186,(void*)0},{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186},{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186}},{{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186},{(void*)0,&l_1186,(void*)0,&l_1186,(void*)0},{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186}},{{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186},{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186},{(void*)0,&l_1186,(void*)0,&l_1186,(void*)0}},{{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186},{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186},{&l_1186,&l_1186,&l_1186,&l_1186,&l_1186}}};
                struct S2 l_1200[6][1][4] = {{{{0x556E48EE6CBA4C0CLL,0x354DL,0x8BDCD243L,18446744073709551614UL},{0x556E48EE6CBA4C0CLL,0x354DL,0x8BDCD243L,18446744073709551614UL},{0xE2CC02B65FE89CDBLL,0xB23BL,0x99D443E6L,0x220F7E5FL},{0x556E48EE6CBA4C0CLL,0x354DL,0x8BDCD243L,18446744073709551614UL}}},{{{0x556E48EE6CBA4C0CLL,0x354DL,0x8BDCD243L,18446744073709551614UL},{0x4FE289A8F46F6BC5LL,1L,-1L,0xBFACB796L},{0x4FE289A8F46F6BC5LL,1L,-1L,0xBFACB796L},{0x556E48EE6CBA4C0CLL,0x354DL,0x8BDCD243L,18446744073709551614UL}}},{{{0x4FE289A8F46F6BC5LL,1L,-1L,0xBFACB796L},{0x556E48EE6CBA4C0CLL,0x354DL,0x8BDCD243L,18446744073709551614UL},{0x4FE289A8F46F6BC5LL,1L,-1L,0xBFACB796L},{0x4FE289A8F46F6BC5LL,1L,-1L,0xBFACB796L}}},{{{0x556E48EE6CBA4C0CLL,0x354DL,0x8BDCD243L,18446744073709551614UL},{0x556E48EE6CBA4C0CLL,0x354DL,0x8BDCD243L,18446744073709551614UL},{0xE2CC02B65FE89CDBLL,0xB23BL,0x99D443E6L,0x220F7E5FL},{0x556E48EE6CBA4C0CLL,0x354DL,0x8BDCD243L,18446744073709551614UL}}},{{{0x556E48EE6CBA4C0CLL,0x354DL,0x8BDCD243L,18446744073709551614UL},{0x4FE289A8F46F6BC5LL,1L,-1L,0xBFACB796L},{0x4FE289A8F46F6BC5LL,1L,-1L,0xBFACB796L},{0x556E48EE6CBA4C0CLL,0x354DL,0x8BDCD243L,18446744073709551614UL}}},{{{0x4FE289A8F46F6BC5LL,1L,-1L,0xBFACB796L},{0x556E48EE6CBA4C0CLL,0x354DL,0x8BDCD243L,18446744073709551614UL},{0x4FE289A8F46F6BC5LL,1L,-1L,0xBFACB796L},{0x4FE289A8F46F6BC5LL,1L,-1L,0xBFACB796L}}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1151[i][j] = &g_103;
                }
                if ((safe_add_func_int16_t_s_s(((0xE6945A4A44DE2385LL > ((*l_1143) = 7L)) == 0x3EABBF6AAA27B314LL), (((*g_556) = p_47) == (safe_rshift_func_int16_t_s_s((g_152[0].f1 = ((safe_mod_func_uint64_t_u_u(p_47, ((safe_mod_func_uint16_t_u_u((l_1150 , (g_103 = (p_47 , 0xE8CDL))), (-3L))) ^ g_166[1].f7))) >= l_1152[0][3])), 14))))))
                { 
                    uint32_t l_1153 = 0x6FC5B820L;
                    l_1153--;
                }
                else
                { 
                    union U3 l_1161 = {1UL};
                    int32_t *l_1173 = (void*)0;
                    int32_t *l_1174 = &g_152[0].f2;
                    int32_t *l_1175 = &l_1118;
                    uint64_t **l_1190 = &l_1186;
                    uint64_t ***l_1191 = &l_1190;
                    struct S0 ****l_1197[5][7] = {{(void*)0,&l_1196[3][0][0],(void*)0,&l_1196[3][0][1],&l_1196[3][0][1],(void*)0,&l_1196[3][0][0]},{(void*)0,&l_1196[3][0][1],&l_1196[1][0][6],(void*)0,&l_1196[3][0][1],&l_1196[3][0][1],(void*)0},{&l_1196[1][0][6],&l_1196[3][0][0],&l_1196[1][0][6],&l_1196[3][0][1],&l_1196[3][0][0],&l_1196[3][0][1],&l_1196[3][0][1]},{&l_1196[3][0][0],(void*)0,(void*)0,(void*)0,&l_1196[3][0][0],(void*)0,&l_1196[3][0][1]},{&l_1196[3][0][1],&l_1196[3][0][1],&l_1196[3][0][1],&l_1196[3][0][1],&l_1196[3][0][1],&l_1196[3][0][1],&l_1196[3][0][1]}};
                    int i, j;
                    l_1176 |= ((*l_1175) &= (g_166[1].f5 , ((safe_add_func_int64_t_s_s((~(safe_div_func_int16_t_s_s(((*l_1137) ^= (g_167 &= ((*l_1136) = (l_1161 , ((l_1162[0][2][0] > ((safe_lshift_func_int16_t_s_u(((((*l_1174) &= (((l_1165 , (safe_lshift_func_uint16_t_u_u(((*g_556) |= (safe_mul_func_uint8_t_u_u(0x55L, (safe_rshift_func_int16_t_s_s(g_1113.f1, l_1172))))), 8))) >= p_47) <= 0xAE17FAD466390E5ALL)) , 0x5CL) || l_1152[0][3]), p_47)) != l_1152[0][4])) , g_588))))), g_348))), 0UL)) || g_166[1].f6)));
                    l_1199 = ((safe_add_func_uint16_t_u_u(((*g_556) = (safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s(0xEB0FBB534EC045F3LL, ((*l_1188) = (safe_sub_func_uint16_t_u_u(0xD426L, (((l_1187 = l_1185[2][0][0]) == ((*l_1191) = l_1190)) <= ((safe_rshift_func_uint16_t_u_u(((0xB3C0E323L <= (g_1194 != (g_1198 = l_1196[3][0][1]))) , (*g_556)), p_47)) ^ (*l_1137)))))))), (*g_556)))), p_47)) == 0UL);
                    l_1199 = (p_47 & (p_47 <= (l_1200[2][0][2] , ((l_1121 , (safe_rshift_func_int16_t_s_u(((g_216 , ((safe_unary_minus_func_int8_t_s(p_47)) != ((void*)0 != &g_348))) , 0x64BEL), 12))) && l_1199))));
                    (*l_1137) &= (safe_add_func_int8_t_s_s((*l_1175), g_184.f0));
                }
                return l_1206;
            }
        }
        else
        { 
            union U3 l_1207 = {0UL};
            return l_1207;
        }
        (*l_1137) |= 0x1176F00BL;
        if ((*l_587))
            continue;
    }
    return l_586;
}



static const int32_t  func_48(const int32_t * p_49, const struct S0  p_50, uint32_t  p_51, int8_t * p_52)
{ 
    const uint32_t l_1117 = 0xF294988EL;
    for (g_348 = 25; (g_348 > 51); g_348 = safe_add_func_uint16_t_u_u(g_348, 3))
    { 
        return p_50.f1;
    }
    return l_1117;
}



static struct S0  func_53(int32_t ** p_54, const union U3  p_55, int32_t * p_56, int8_t * p_57)
{ 
    struct S0 **l_590[3][6][5] = {{{&g_275,&g_275,(void*)0,(void*)0,(void*)0},{&g_275,&g_275,(void*)0,&g_275,(void*)0},{(void*)0,&g_275,&g_275,&g_275,(void*)0},{&g_275,&g_275,&g_275,(void*)0,&g_275},{(void*)0,&g_275,(void*)0,&g_275,(void*)0},{&g_275,&g_275,&g_275,&g_275,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_275,&g_275,&g_275,(void*)0,(void*)0},{(void*)0,(void*)0,&g_275,(void*)0,&g_275},{&g_275,&g_275,&g_275,(void*)0,&g_275},{(void*)0,&g_275,&g_275,(void*)0,&g_275},{(void*)0,(void*)0,&g_275,&g_275,&g_275}},{{(void*)0,&g_275,&g_275,&g_275,(void*)0},{&g_275,&g_275,(void*)0,&g_275,(void*)0},{&g_275,&g_275,&g_275,(void*)0,&g_275},{(void*)0,&g_275,(void*)0,(void*)0,&g_275},{(void*)0,&g_275,&g_275,(void*)0,(void*)0},{&g_275,(void*)0,&g_275,(void*)0,(void*)0}}};
    struct S0 ***l_591 = &l_590[0][1][4];
    int32_t l_594 = 6L;
    int64_t l_649 = 0xBC6F05A37115FCBALL;
    const int16_t *l_676 = &g_152[0].f1;
    struct S1 l_689 = {1UL};
    struct S2 ***l_706[5][5] = {{&g_376[0][4],&g_376[0][0],&g_376[0][4],&g_376[0][4],&g_376[0][0]},{&g_376[0][0],&g_376[0][4],&g_376[0][1],&g_376[0][0],&g_376[0][1]},{&g_376[0][0],&g_376[0][0],(void*)0,&g_376[0][0],&g_376[0][0]},{&g_376[0][1],&g_376[0][0],&g_376[0][1],&g_376[0][4],&g_376[0][0]},{&g_376[0][0],&g_376[0][4],&g_376[0][4],&g_376[0][0],&g_376[0][4]}};
    struct S2 ****l_707[4] = {&l_706[3][3],&l_706[3][3],&l_706[3][3],&l_706[3][3]};
    uint32_t *****l_710 = &g_253;
    uint16_t l_720 = 65533UL;
    uint8_t l_727 = 0xF7L;
    const int32_t *l_755 = &g_611[2].f5;
    const int32_t **l_754 = &l_755;
    const int32_t ***l_753 = &l_754;
    const int32_t ****l_752 = &l_753;
    const int32_t *****l_751 = &l_752;
    struct S1 * const *l_791 = &g_169;
    uint32_t l_839 = 0UL;
    int32_t l_920 = 0x222AA457L;
    int32_t l_921 = 0x2ED103F1L;
    int32_t l_922 = 0xECC33D06L;
    int32_t l_923 = (-5L);
    int32_t l_924 = 0L;
    int32_t l_929 = 0x7CA832E1L;
    int32_t l_930 = 0x52225616L;
    uint32_t **l_989 = (void*)0;
    struct S0 l_991 = {1UL,0UL,0x853AEE5432165F79LL,0xC51C32F29819FC4ELL,0xAAL,7L,0xFCL,0x35L};
    uint16_t l_1004 = 0UL;
    union U3 *l_1025 = &g_184;
    const int64_t l_1033 = (-8L);
    uint64_t *l_1054 = &g_4;
    uint64_t **l_1053 = &l_1054;
    int32_t **l_1099 = &g_1097[0];
    const struct S2 l_1110 = {18446744073709551615UL,0x5C26L,0x6D4D7C19L,18446744073709551608UL};
    int i, j, k;
lbl_684:
    (*l_591) = l_590[0][1][4];
    for (g_133 = 0; (g_133 <= 2); g_133 += 1)
    { 
        uint32_t l_609 = 0xABA647EBL;
        int8_t *l_610 = &g_166[1].f4;
        int16_t *l_612[5] = {&g_167,&g_167,&g_167,&g_167,&g_167};
        struct S1 *l_615 = &g_216;
        int32_t *l_633 = &g_7;
        uint64_t l_641 = 18446744073709551608UL;
        uint32_t l_648 = 4294967295UL;
        uint8_t l_680 = 0x70L;
        struct S0 l_686 = {0xA5294696L,18446744073709551610UL,0UL,-4L,0xC8L,0x14D5E266L,1L,0L};
        int i;
        if (((safe_sub_func_uint64_t_u_u((l_594 <= (g_166[1].f5 || (g_152[0].f1 = (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((((l_594 || ((safe_div_func_int32_t_s_s((g_90[0][2] , (safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_594 >= ((g_611[2] = ((safe_mul_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((((*l_610) = l_609) != ((void*)0 == &g_376[0][0])), (*g_556))) & g_166[1].f3), l_594)) , (*g_275))) , 0x961FL)), p_55.f0)), 0x54L))), l_594)) , g_152[0].f2)) >= (-6L)) || l_609), g_216.f0)), p_55.f0))))), 0xB45C6E0DD2C72504LL)) | (****g_253)))
        { 
            struct S1 **l_614 = (void*)0;
            struct S1 ***l_613 = &l_614;
            int32_t l_630[2];
            int32_t l_678[6];
            int i;
            for (i = 0; i < 2; i++)
                l_630[i] = 0L;
            for (i = 0; i < 6; i++)
                l_678[i] = (-1L);
            (*l_613) = &g_169;
            if ((*p_56))
                continue;
            l_615 = &g_216;
            for (g_216.f0 = 0; (g_216.f0 <= 0); g_216.f0 += 1)
            { 
                uint16_t *l_627 = &g_103;
                int32_t *l_631[1][5][3] = {{{&g_152[0].f2,&g_152[0].f2,&g_152[0].f2},{&g_152[0].f2,&g_152[0].f2,&g_152[0].f2},{&g_152[0].f2,&g_152[0].f2,(void*)0},{&g_152[0].f2,&g_152[0].f2,&g_152[0].f2},{&g_152[0].f2,&g_152[0].f2,&g_152[0].f2}}};
                int32_t *l_632 = &l_630[0];
                int64_t * const l_634[5] = {&g_166[1].f3,&g_166[1].f3,&g_166[1].f3,&g_166[1].f3,&g_166[1].f3};
                int i, j, k;
                (*l_632) = (safe_lshift_func_uint8_t_u_u((g_100 < (0x67L == g_100)), ((g_152[0].f2 = (((*p_56) = ((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s(l_609, (g_622 > (((safe_rshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((255UL | (((*l_627)--) ^ (1L ^ l_609))), p_55.f0)) <= g_611[2].f6), l_594)) && l_609) | p_55.f0)))) ^ 0x98F1L), p_55.f0)) ^ l_630[0])) | p_55.f0)) , l_594)));
                (*p_54) = (*p_54);
                for (g_588 = 0; (g_588 <= 2); g_588 += 1)
                { 
                    (*p_54) = (l_633 = (*p_54));
                }
                for (g_348 = 0; (g_348 <= 2); g_348 += 1)
                { 
                    int32_t *l_642 = (void*)0;
                    int32_t *l_643 = &g_611[2].f5;
                    int i;
                    (*l_643) &= ((((void*)0 == l_634[4]) ^ (18446744073709551615UL >= (safe_add_func_int64_t_s_s(((((*p_56) | (safe_lshift_func_uint8_t_u_u((0x9A55BD974A46C9C6LL | ((((g_611[2].f3 &= (safe_mul_func_uint16_t_u_u(0xE91CL, p_55.f0))) < g_152[0].f1) != (*l_632)) > 253UL)), p_55.f0))) != 1UL) != l_641), p_55.f0)))) , 0xE0ED0518L);
                    (*l_643) = (safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(l_648, 1L)) , ((p_55.f0 , ((void*)0 != l_612[3])) ^ 0xB8L)), ((*g_556) > (-1L))));
                }
            }
            for (g_7 = 2; (g_7 >= 0); g_7 -= 1)
            { 
                uint64_t l_663 = 0x43E1AFE79A91AAF5LL;
                uint8_t l_666 = 1UL;
                uint8_t *l_667 = &g_90[1][1];
                uint16_t l_677[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_677[i] = 1UL;
                (*p_56) &= (l_649 || (safe_lshift_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s((&g_611[0] != &g_166[1]), (safe_sub_func_uint8_t_u_u(((*l_667) = ((g_103 = ((*g_556) ^= (safe_unary_minus_func_uint32_t_u((l_594 = 4294967287UL))))) & ((safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_663, 0x1AD4C7EBL)), (safe_rshift_func_uint8_t_u_s(((**g_187) && 4294967288UL), l_630[1])))) , l_666))), 0x41L)))), 1UL)) == g_384.f0) < 1L), 0)));
                for (g_348 = 0; (g_348 <= 2); g_348 += 1)
                { 
                    int16_t l_679 = 1L;
                    struct S0 l_683 = {1UL,0xBD62E39DL,0xC8ADDB1118B1F16CLL,4L,0x3BL,0xB6427FC8L,1L,1L};
                    l_678[3] |= ((*p_56) = ((0x2F07324EL < (safe_mod_func_int32_t_s_s(((g_216 , ((safe_add_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((g_166[1].f7 || (0x42F66282L && ((((safe_sub_func_int64_t_s_s(g_384.f3, ((*g_275) , (((void*)0 != l_676) == p_55.f0)))) , p_55.f0) , l_666) < l_630[0]))), l_666)), l_666)) < 0UL)) || 0UL), l_677[0]))) != 0L));
                    l_680++;
                    return l_683;
                }
            }
        }
        else
        { 
            for (l_648 = 0; (l_648 <= 2); l_648 += 1)
            { 
                return (*g_275);
            }
            if (p_55.f0)
                goto lbl_684;
        }
        if (l_609)
            continue;
        for (g_115 = 0; (g_115 <= 2); g_115 += 1)
        { 
            uint32_t l_685 = 1UL;
            if (l_685)
                break;
            for (g_216.f0 = 0; (g_216.f0 <= 2); g_216.f0 += 1)
            { 
                return l_686;
            }
        }
    }
    if ((safe_sub_func_uint64_t_u_u((l_689 , (safe_lshift_func_uint8_t_u_s(0xB8L, 5))), (safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((((safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s((l_649 & ((safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((g_708 = l_706[1][2]) != (g_709 = &g_376[0][0])), ((l_710 = &g_253) == (void*)0))), p_55.f0)) ^ 0xE2C867E5L)), 0x4FCAL)), (*g_556))), p_55.f0)) , 0x91L) > g_152[0].f3), 1UL)), g_611[2].f2)))))
    { 
        int32_t l_711[5][5][6] = {{{0x8F56B229L,0L,0x8F56B229L,0x3FEC750EL,0xCC4F82CAL,0x8F56B229L},{1L,0L,0x3FEC750EL,0L,0xCC4F82CAL,1L},{0x3FEC750EL,0L,0L,0L,0L,0x3FEC750EL},{1L,0xCC4F82CAL,0L,0x3FEC750EL,0L,1L},{0x8F56B229L,0xCC4F82CAL,0x3FEC750EL,0x8F56B229L,0L,0x8F56B229L}},{{0x8F56B229L,0L,0x8F56B229L,0x3FEC750EL,0xCC4F82CAL,0x8F56B229L},{1L,0L,0x3FEC750EL,0L,0xCC4F82CAL,1L},{0x3FEC750EL,0L,0L,0L,0L,0x3FEC750EL},{1L,0xCC4F82CAL,0L,0x3FEC750EL,0L,1L},{0x8F56B229L,0xCC4F82CAL,0x3FEC750EL,0x8F56B229L,0L,0x8F56B229L}},{{0x8F56B229L,0L,0x8F56B229L,0x3FEC750EL,0xCC4F82CAL,0x8F56B229L},{1L,0L,0x3FEC750EL,0L,0x8F56B229L,0L},{0x99BDB643L,1L,0L,0L,1L,0x99BDB643L},{0L,0x8F56B229L,0L,0x99BDB643L,0x3FEC750EL,0L},{0xB9AE0C88L,0x8F56B229L,0x99BDB643L,0xB9AE0C88L,1L,0xB9AE0C88L}},{{0xB9AE0C88L,1L,0xB9AE0C88L,0x99BDB643L,0x8F56B229L,0xB9AE0C88L},{0L,0x3FEC750EL,0x99BDB643L,0L,0x8F56B229L,0L},{0x99BDB643L,1L,0L,0L,1L,0x99BDB643L},{0L,0x8F56B229L,0L,0x99BDB643L,0x3FEC750EL,0L},{0xB9AE0C88L,0x8F56B229L,0x99BDB643L,0xB9AE0C88L,1L,0xB9AE0C88L}},{{0xB9AE0C88L,1L,0xB9AE0C88L,0x99BDB643L,0x8F56B229L,0xB9AE0C88L},{0L,0x3FEC750EL,0x99BDB643L,0L,0x8F56B229L,0L},{0x99BDB643L,1L,0L,0L,1L,0x99BDB643L},{0L,0x8F56B229L,0L,0x99BDB643L,0x3FEC750EL,0L},{0xB9AE0C88L,0x8F56B229L,0x99BDB643L,0xB9AE0C88L,1L,0xB9AE0C88L}}};
        int i, j, k;
        l_594 = l_711[0][4][2];
    }
    else
    { 
        uint64_t l_717 = 0x84FCF67CCE2951B9LL;
        int32_t l_776 = 1L;
        struct S0 l_798 = {18446744073709551615UL,0x79F09377L,1UL,0xC9C8A6BFD7E7EF57LL,0x92L,0L,0xA6L,-3L};
        struct S2 * const l_810 = &g_152[0];
        union U3 *l_811 = &g_184;
        const struct S1 *l_812 = &l_689;
        uint64_t *l_840[5];
        struct S0 **l_872 = &g_275;
        uint32_t *l_906 = &l_839;
        int32_t l_926[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int32_t l_928 = (-1L);
        int32_t l_973 = 5L;
        uint32_t *****l_985 = &g_253;
        struct S1 **l_1019 = &g_169;
        struct S1 ***l_1018 = &l_1019;
        uint16_t l_1024[5];
        uint32_t l_1057[2];
        uint32_t l_1111[7][1][1] = {{{0x2031F4F7L}},{{0UL}},{{0x2031F4F7L}},{{0UL}},{{0x2031F4F7L}},{{0UL}},{{0x2031F4F7L}}};
        int32_t *l_1112 = &l_922;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_840[i] = &l_717;
        for (i = 0; i < 5; i++)
            l_1024[i] = 0x0904L;
        for (i = 0; i < 2; i++)
            l_1057[i] = 0xD1596D32L;
        for (g_216.f0 = 0; (g_216.f0 <= 0); g_216.f0 += 1)
        { 
            uint32_t l_725 = 0xB59E5522L;
            struct S0 l_728 = {0UL,0x9E6E0272L,0x4610773E006351BBLL,1L,0x7AL,0x471DFB28L,-1L,0x1FL};
            const struct S2 l_756 = {0xFFAE1F4E2AACC8D6LL,0x09BBL,0xFAD2EA65L,0x04CF082FL};
            struct S1 l_760 = {0UL};
            const uint32_t * const l_773 = &l_689.f0;
            const uint32_t * const *l_772 = &l_773;
            const uint32_t * const **l_771 = &l_772;
            const uint32_t * const ***l_770 = &l_771;
            int32_t *l_778 = &l_776;
            const struct S1 **l_813 = &l_812;
        }
lbl_912:
        if (((l_594 &= (((l_776 = l_839) ^ ((safe_mod_func_int8_t_s_s(((g_152[0].f1 = (((safe_rshift_func_uint16_t_u_u((((&g_376[0][4] == (void*)0) && 0UL) , (safe_sub_func_uint64_t_u_u(((0xD169A2B9BDB716B2LL < ((-1L) ^ (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((((*l_812) , (void*)0) != (void*)0) > 1UL), 2)), l_798.f7)))) , 3UL), g_166[1].f7))), 3)) == g_851) > 1UL)) != g_622), (*****l_751))) >= (*g_556))) < l_798.f1)) > g_384.f2))
        { 
            uint32_t l_857[5][6] = {{0x40A43D46L,0x7A96798FL,7UL,7UL,0x7A96798FL,0x40A43D46L},{0xC890005CL,0x40A43D46L,0xDA1AD82FL,0x7A96798FL,0xDA1AD82FL,0x40A43D46L},{0xDA1AD82FL,0xC890005CL,7UL,18446744073709551609UL,18446744073709551609UL,7UL},{0xDA1AD82FL,0xDA1AD82FL,18446744073709551609UL,0x7A96798FL,0x0B02A446L,0x7A96798FL},{0xC890005CL,0xDA1AD82FL,0xC890005CL,7UL,18446744073709551609UL,18446744073709551609UL}};
            int i, j;
            for (l_798.f1 = 1; (l_798.f1 <= 4); l_798.f1 += 1)
            { 
                uint16_t l_858 = 1UL;
                int32_t l_859 = (-1L);
                union U3 l_874[5][7][4] = {{{{4294967289UL},{1UL},{0x607B13E5L},{0x50924064L}},{{1UL},{2UL},{9UL},{1UL}},{{0x7B6F290BL},{9UL},{0UL},{0x69BE588FL}},{{0x50924064L},{0x7B6F290BL},{9UL},{0x7B6F290BL}},{{0x28BE0000L},{6UL},{0x262600A9L},{2UL}},{{0x893AC9F1L},{4294967290UL},{2UL},{0x677C00B4L}},{{0x0E588CF9L},{9UL},{0x785DDE36L},{0x46093698L}}},{{{0x0E588CF9L},{0x4FFFC1FBL},{2UL},{8UL}},{{0x893AC9F1L},{0x46093698L},{0x262600A9L},{4294967286UL}},{{0x28BE0000L},{0xDD6C8DD5L},{9UL},{0x48E94BE2L}},{{0x50924064L},{4294967291UL},{0UL},{0UL}},{{0x7B6F290BL},{6UL},{9UL},{0x262600A9L}},{{1UL},{0xE835A9E0L},{0x607B13E5L},{0xCAE66FCFL}},{{4294967289UL},{3UL},{0xCAE66FCFL},{4294967294UL}}},{{{4294967295UL},{0x785DDE36L},{8UL},{8UL}},{{0x607B13E5L},{0x5A57BFAAL},{8UL},{4294967291UL}},{{0x48E94BE2L},{0x209B6867L},{0x46093698L},{9UL}},{{0x7B6F290BL},{1UL},{0x0E588CF9L},{2UL}},{{4294967289UL},{4294967295UL},{0x48E94BE2L},{0x3C2EBF09L}},{{1UL},{1UL},{6UL},{4294967291UL}},{{0x3FF65DCBL},{0x63C2A6D5L},{0x63C2A6D5L},{0x3FF65DCBL}}},{{{4294967294UL},{0UL},{2UL},{1UL}},{{0xBCAA1858L},{0x0E588CF9L},{0x2077015AL},{0x5A57BFAAL}},{{6UL},{1UL},{0UL},{0x5A57BFAAL}},{{1UL},{0x0E588CF9L},{0x893AC9F1L},{1UL}},{{4294967286UL},{0UL},{0x3C2EBF09L},{0x3FF65DCBL}},{{4294967290UL},{0x63C2A6D5L},{4294967290UL},{4294967291UL}},{{1UL},{1UL},{0UL},{0x3C2EBF09L}}},{{{2UL},{4294967295UL},{1UL},{2UL}},{{8UL},{1UL},{0x28BE0000L},{9UL}},{{0x69BE588FL},{6UL},{4294967294UL},{0x63C2A6D5L}},{{4294967287UL},{0x769471E5L},{1UL},{4294967295UL}},{{4294967295UL},{0x677C00B4L},{0x5A57BFAAL},{4294967289UL}},{{0xE835A9E0L},{6UL},{0x607B13E5L},{1UL}},{{0x769471E5L},{4294967294UL},{0x69BE588FL},{0xDD6C8DD5L}}}};
                struct S0 l_878 = {18446744073709551615UL,0xB506FCD4L,18446744073709551615UL,0L,0L,0xBD554A01L,0x4DL,0xB6L};
                int i, j, k;
                if ((+((safe_sub_func_uint32_t_u_u(0x70525644L, (l_798.f4 || ((((l_857[2][2] == l_858) >= (l_859 = 0UL)) && ((+0x3955L) , ((safe_add_func_uint32_t_u_u((((*p_56) != (*p_56)) != (*****l_751)), 0xA5B76A4CL)) <= g_588))) || 0x4ACA6C6BL)))) || l_858)))
                { 
                    uint16_t l_866 = 0x8FFFL;
                    int32_t l_871 = 0xB1E774ECL;
                    l_859 &= ((safe_rshift_func_int16_t_s_u((((18446744073709551615UL < (0x8EL ^ (+l_866))) ^ (safe_lshift_func_int16_t_s_u((0x4F8EC76FL != l_857[4][5]), (l_871 = ((((((p_55.f0 ^ ((safe_sub_func_int32_t_s_s((((*l_811) , 0x2632FAA4CFEE0E8ALL) , (*****l_751)), l_798.f5)) , l_798.f1)) , l_857[2][2]) < 0xDFD4L) || l_866) < 0x57E951CFL) & 4L))))) , p_55.f0), p_55.f0)) > (-1L));
                    if ((*p_56))
                        break;
                }
                else
                { 
                    uint32_t ***l_873 = (void*)0;
                    int32_t l_877 = 0x3DC85F7BL;
                    l_859 |= ((*p_56) ^= ((&g_275 != l_872) , (((p_55.f0 || ((void*)0 != l_873)) & ((((*l_811) = l_874[2][4][0]) , (((safe_lshift_func_uint16_t_u_s((l_798.f0 | 0xC0426DB4L), l_858)) >= l_877) != 65534UL)) || 0xF3853D96L)) <= l_798.f2)));
                }
                if (l_798.f1)
                    goto lbl_1026;
                return l_878;
            }
        }
        else
        { 
            struct S0 l_881 = {18446744073709551609UL,0x1714FA2FL,0xF29F76440E95796CLL,0x86F5BB3F7AF392B4LL,0xB7L,0x688288D5L,0xE0L,1L};
            for (l_798.f2 = (-6); (l_798.f2 > 10); l_798.f2 = safe_add_func_int32_t_s_s(l_798.f2, 3))
            { 
                return l_881;
            }
        }
lbl_1026:
        for (g_348 = 0; (g_348 == 45); ++g_348)
        { 
            struct S0 *l_903 = &g_166[1];
            int32_t l_909[3];
            int32_t ***l_942 = (void*)0;
            uint32_t l_962 = 0xCD8F6D28L;
            uint16_t l_972 = 0xC646L;
            int32_t l_1003 = 1L;
            int i;
            for (i = 0; i < 3; i++)
                l_909[i] = 0xBA8ED124L;
            for (g_115 = 0; (g_115 > 20); g_115++)
            { 
                struct S1 l_891 = {0x054E2FEFL};
                const int32_t **** const *l_900 = &l_752;
                int32_t l_917 = 0x9E1BCA8EL;
                int32_t l_918 = 0L;
                int32_t l_919[5][1] = {{0x2E440FCDL},{0x5E1D69F3L},{0x2E440FCDL},{0x5E1D69F3L},{0x2E440FCDL}};
                int8_t l_931 = (-8L);
                struct S2 * const *l_971 = &l_810;
                int i, j;
                for (g_103 = 23; (g_103 != 23); g_103 = safe_add_func_int64_t_s_s(g_103, 3))
                { 
                    struct S1 l_888 = {0xB512F318L};
                    struct S1 *l_889 = (void*)0;
                    struct S1 *l_890[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t *l_897 = &g_152[0].f2;
                    int32_t **l_896 = &l_897;
                    int32_t *l_899 = &g_152[0].f2;
                    int32_t **l_898 = &l_899;
                    int i, j;
                    l_891 = (g_216 = l_888);
                    (*p_56) = (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((((*l_896) = g_8[0][2][0]) != ((*l_898) = g_8[1][0][0])) > (l_900 == (void*)0)) <= (g_611[2].f5 ^ (safe_rshift_func_uint16_t_u_s(l_888.f0, 7)))), (**l_754))), 247UL));
                    if (l_888.f0)
                        continue;
                    if ((*p_56))
                        continue;
                }
                (*l_872) = l_903;
                if ((safe_div_func_uint16_t_u_u((1UL <= ((((*****l_900) , l_906) != ((*g_187) = (((l_909[0] = ((l_798.f5 = ((*****l_751) == ((((*****l_900) == l_798.f3) && (safe_div_func_int16_t_s_s(g_384.f1, g_611[2].f3))) > (*****l_900)))) | 0x1CEA077EC45A6C1BLL)) , l_891) , (void*)0))) >= p_55.f0)), (*****l_900))))
                { 
                    const uint16_t *l_911 = &l_720;
                    const uint16_t ** const l_910[6][2][6] = {{{(void*)0,&l_911,&l_911,&l_911,(void*)0,(void*)0},{(void*)0,&l_911,&l_911,(void*)0,&l_911,(void*)0}},{{(void*)0,&l_911,(void*)0,&l_911,&l_911,(void*)0},{(void*)0,(void*)0,&l_911,&l_911,&l_911,(void*)0}},{{&l_911,&l_911,&l_911,&l_911,&l_911,&l_911},{(void*)0,&l_911,&l_911,&l_911,(void*)0,(void*)0}},{{(void*)0,&l_911,&l_911,(void*)0,&l_911,(void*)0},{(void*)0,&l_911,(void*)0,&l_911,&l_911,(void*)0}},{{(void*)0,(void*)0,&l_911,&l_911,&l_911,(void*)0},{&l_911,&l_911,&l_911,&l_911,&l_911,&l_911}},{{(void*)0,&l_911,&l_911,&l_911,(void*)0,(void*)0},{(void*)0,&l_911,&l_911,(void*)0,&l_911,(void*)0}}};
                    int32_t l_913[1];
                    int32_t *l_914 = &l_798.f5;
                    int32_t *l_915 = &g_166[1].f5;
                    int32_t *l_916[1][1][5];
                    int8_t l_925 = 6L;
                    uint32_t l_932 = 1UL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_913[i] = (-9L);
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 5; k++)
                                l_916[i][j][k] = (void*)0;
                        }
                    }
                    (*p_56) = (l_798.f1 || ((((*g_556) , l_910[3][1][2]) == &g_556) > (l_798.f5 || (g_152[0].f1 = ((-4L) < 0x6CF0L)))));
                    if ((*****l_900))
                        continue;
                    if (g_100)
                        goto lbl_912;
                    if ((*p_56))
                        continue;
                    ++l_932;
                }
                else
                { 
                    int32_t *l_945 = &l_922;
                    int32_t *l_946 = (void*)0;
                    int32_t *l_947 = &l_919[4][0];
                    int32_t *l_948 = &l_926[4];
                    int32_t *l_949 = &l_921;
                    int32_t *l_950 = &l_798.f5;
                    int32_t *l_951 = (void*)0;
                    int32_t l_952 = 9L;
                    int32_t *l_953 = (void*)0;
                    int32_t *l_954 = (void*)0;
                    int32_t *l_955 = &g_588;
                    int32_t *l_956 = (void*)0;
                    int32_t *l_957 = &l_926[1];
                    int32_t *l_958 = &g_166[1].f5;
                    int32_t *l_959 = &l_594;
                    int32_t *l_960 = &l_776;
                    int32_t *l_961[3][5] = {{&g_166[1].f5,&g_166[1].f5,&l_776,&g_166[1].f5,&g_166[1].f5},{(void*)0,&g_166[1].f5,(void*)0,(void*)0,&g_166[1].f5},{&g_166[1].f5,(void*)0,(void*)0,&g_166[1].f5,(void*)0}};
                    int i, j;
                    (*p_56) &= (safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(((l_909[2] = (l_928 > (p_55.f0 > (!(safe_div_func_int8_t_s_s((((l_942 = &g_362[1]) == &p_54) & (((*****l_751) == (safe_mul_func_uint8_t_u_u((l_710 != (func_58((p_55 , l_909[0]), p_55.f0) , (void*)0)), l_928))) && (***l_753))), 1L)))))) || 0x35L), p_55.f0)), g_166[1].f7));
                    (*p_56) = (*p_56);
                    --l_962;
                }
                (*p_56) = (*p_56);
                if (((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(p_55.f0, 0)), p_55.f0)) == ((safe_rshift_func_uint8_t_u_u(g_152[0].f0, ((((*l_811) = (*l_811)) , (((((l_798.f6 & (l_971 != (((*g_275) , 0UL) , (*g_709)))) == (*g_556)) < l_972) || l_926[1]) >= (*****l_900))) <= l_798.f1))) >= l_776)))
                { 
                    (*p_56) = (-6L);
                    l_973 ^= (*p_56);
                }
                else
                { 
                    int32_t *l_974[6] = {&l_776,&l_776,&g_588,&l_776,&l_776,&g_588};
                    uint16_t l_975 = 0x82DAL;
                    int i;
                    if ((*p_56))
                        break;
                    l_975--;
                }
            }
            for (l_798.f2 = 0; (l_798.f2 <= 2); l_798.f2 += 1)
            { 
                struct S1 *l_978 = (void*)0;
                uint8_t *l_981 = (void*)0;
                uint8_t *l_982 = (void*)0;
                uint32_t *l_990 = &g_611[2].f0;
                int64_t *l_992[3];
                int32_t l_993 = 0L;
                int32_t l_994 = (-4L);
                int32_t l_1000 = 0x8A8B82ABL;
                int32_t l_1001 = (-1L);
                int32_t l_1002[7][1] = {{(-10L)},{(-10L)},{0x5692E10EL},{(-10L)},{(-10L)},{0x5692E10EL},{(-10L)}};
                struct S1 l_1017[1][7][1] = {{{{0xA881236AL}},{{0x649F427CL}},{{0xA881236AL}},{{0x649F427CL}},{{0xA881236AL}},{{0x649F427CL}},{{0xA881236AL}}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_992[i] = &g_166[1].f3;
                l_978 = (*l_791);
                if (((*p_56) = (((safe_sub_func_uint8_t_u_u((--g_88), (g_90[l_798.f2][l_798.f2] >= ((l_985 == l_985) <= p_55.f0)))) & (l_798.f2 != (((safe_unary_minus_func_int64_t_s(g_115)) ^ (l_994 = (l_993 = (((((*l_990) = ((safe_sub_func_int16_t_s_s(((((***l_985) = (**g_253)) == l_989) == 0x20162661L), g_851)) > 0x3C5062AAL)) , l_991) , p_55.f0) <= g_103)))) ^ g_851))) == g_927)))
                { 
                    int32_t *l_995 = &l_922;
                    int32_t *l_996 = &l_798.f5;
                    int32_t *l_997 = &l_776;
                    int32_t *l_998 = &l_991.f5;
                    int32_t *l_999[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_999[i] = &g_611[2].f5;
                    l_1004++;
                }
                else
                { 
                    (*p_56) |= (+(l_1002[6][0] = ((*l_812) , (safe_rshift_func_uint16_t_u_u((+(safe_div_func_uint32_t_u_u(((l_993 = 0xB7B38996L) || (safe_div_func_uint64_t_u_u(p_55.f0, g_167))), ((*l_906)--)))), (((((((g_611[2].f3 |= 0xF28851245FA90231LL) , l_1017[0][4][0]) , l_1018) != &g_797) | (-9L)) < (**l_754)) , p_55.f0))))));
                    return (*g_275);
                }
                if (l_1000)
                    break;
                if (l_798.f5)
                    continue;
                (*p_56) ^= (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((l_1024[1] && 0UL), 5)) ^ ((g_167 , &p_55) == ((**l_872) , l_1025))), 5));
            }
        }
        for (l_929 = 0; (l_929 >= 3); l_929 = safe_add_func_int32_t_s_s(l_929, 4))
        { 
            struct S0 l_1032 = {0xFCC6FCECL,0x0CD331E0L,7UL,0x50D246319D8E61C1LL,0x85L,-1L,0xA0L,7L};
            int32_t *l_1056[5][7][5] = {{{&l_926[1],&l_929,&l_923,&l_926[1],&l_930},{(void*)0,&l_929,&l_924,&l_920,&l_926[1]},{&g_588,&l_930,&l_921,&l_930,&g_588},{&l_926[1],&l_991.f5,&g_133,(void*)0,&l_920},{&l_922,&l_926[1],(void*)0,&l_920,(void*)0},{(void*)0,&l_973,&l_776,&l_991.f5,&l_920},{&l_776,&l_920,&l_920,(void*)0,&g_588}},{{&l_920,&l_926[3],&l_926[1],&l_1032.f5,&l_926[1]},{(void*)0,(void*)0,(void*)0,&l_1032.f5,&l_930},{&l_973,&l_923,&l_926[3],&l_973,&l_920},{&g_611[2].f5,&l_776,&l_926[3],&g_588,&l_924},{&g_588,&l_973,(void*)0,(void*)0,&l_923},{&l_922,&g_611[2].f5,&l_926[1],&l_926[1],&g_611[2].f5},{&l_929,&l_926[1],&l_920,&l_922,&l_926[1]}},{{&l_973,&l_930,&l_776,&l_1032.f5,&l_923},{&l_926[1],&l_1032.f5,(void*)0,&l_924,&l_1032.f5},{&l_973,&l_920,&g_133,&l_929,&l_926[0]},{&l_929,&l_929,&l_921,&l_991.f5,&l_930},{&l_922,&l_1032.f5,&l_924,&l_776,&l_929},{&g_588,(void*)0,&l_923,&l_930,&l_926[1]},{&g_611[2].f5,&l_991.f5,&l_923,&l_930,&l_920}},{{&l_973,&g_611[2].f5,(void*)0,&l_776,&l_923},{(void*)0,&g_133,&l_776,&l_991.f5,&l_776},{&l_920,&l_920,&g_611[2].f5,&l_929,&g_588},{&l_776,&l_923,&l_926[1],&l_924,&l_929},{(void*)0,&l_922,(void*)0,&l_1032.f5,(void*)0},{&l_922,&l_923,&l_1032.f5,&l_922,&l_920},{&l_926[1],&l_920,&l_926[3],&l_926[1],&l_1032.f5}},{{&g_588,&g_133,(void*)0,(void*)0,&l_926[3]},{(void*)0,&g_611[2].f5,&l_922,&g_588,&g_611[2].f5},{&l_926[1],&l_991.f5,&l_920,&l_973,&g_611[2].f5},{&l_973,(void*)0,&l_776,&l_1032.f5,&l_926[3]},{&l_991.f5,&l_1032.f5,&l_920,&l_1032.f5,&l_1032.f5},{&g_133,&l_929,&g_133,(void*)0,&l_920},{&l_929,&l_920,&l_923,&l_991.f5,(void*)0}}};
            uint32_t l_1090[6][6][7] = {{{0UL,2UL,0x7C3F3E64L,18446744073709551609UL,0x6240146FL,18446744073709551610UL,0x6240146FL},{18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x887A9257L,0xB082D557L,0x14DF23BBL},{1UL,0x8A4F027FL,0x38992849L,0x07B3B537L,1UL,18446744073709551615UL,8UL},{7UL,0x725F898DL,0x0376CB59L,1UL,18446744073709551615UL,0x69695B5DL,0xFAEAEA3EL},{0xEB5A3509L,18446744073709551615UL,2UL,0UL,18446744073709551615UL,8UL,18446744073709551609UL},{1UL,0UL,0x72C9C037L,0x283752EEL,7UL,18446744073709551615UL,0xEB2E4CC1L}},{{0xA9A3B946L,0x937A318CL,0x1A36C89BL,18446744073709551609UL,0x6F572FDDL,18446744073709551615UL,0xA9A3B946L},{0xB082D557L,0x6C194DB2L,1UL,0xD03CA518L,1UL,0xEB2E4CC1L,0x7F97D868L},{8UL,18446744073709551610UL,0x9B6CD5DAL,0x7C3F3E64L,1UL,0xAB752358L,0xAB752358L},{0x725F898DL,1UL,0xCC8E363AL,1UL,0x725F898DL,0xA1411297L,0UL},{0x81623613L,18446744073709551606UL,18446744073709551615UL,0xA9A3B946L,0x2F0365FDL,18446744073709551615UL,1UL},{0x26CCE978L,0xA9F14759L,0x72C9C037L,0x3FCA9643L,0x76442963L,1UL,0x3FCA9643L}},{{0x81623613L,0xA9A3B946L,0x4F98A5A3L,0x1F0B0DDCL,9UL,18446744073709551609UL,18446744073709551606UL},{0x725F898DL,0xE86E611FL,18446744073709551609UL,8UL,0x3FCA9643L,18446744073709551615UL,0xB082D557L},{8UL,0x81623613L,0x38992849L,0xEE666E1DL,0x937A318CL,0x38992849L,2UL},{0xB082D557L,18446744073709551615UL,0x84D5B378L,18446744073709551611UL,0xF3FA949AL,0xCC8E363AL,7UL},{0xA9A3B946L,0x9B6CD5DAL,18446744073709551615UL,0x6F572FDDL,0x07B3B537L,18446744073709551615UL,18446744073709551606UL},{1UL,0x2D941FCAL,1UL,1UL,0x2D941FCAL,1UL,0x6C194DB2L}},{{0xEB5A3509L,18446744073709551606UL,0x4A26437EL,0x937A318CL,0x1F0B0DDCL,18446744073709551613UL,9UL},{7UL,0x3FCA9643L,1UL,8UL,0x72C9C037L,0xEB2E4CC1L,0xD03CA518L},{18446744073709551611UL,18446744073709551606UL,0x7C3F3E64L,18446744073709551611UL,0xF8D131F8L,0xEE666E1DL,18446744073709551615UL},{0x76442963L,0x2D941FCAL,18446744073709551608UL,0x4878F783L,0xB082D557L,0x91E6B421L,18446744073709551611UL},{0xA0D7E471L,0x9B6CD5DAL,18446744073709551615UL,0xA9A3B946L,18446744073709551615UL,8UL,0x7BA94D26L},{1UL,18446744073709551615UL,18446744073709551615UL,0x26CCE978L,0x887A9257L,0x6C194DB2L,0x72C9C037L}},{{0xEAF267C7L,0x81623613L,0UL,18446744073709551606UL,0xA0D7E471L,0x1A36C89BL,9UL},{1UL,0xE86E611FL,18446744073709551615UL,0xD03CA518L,18446744073709551615UL,0xE86E611FL,1UL},{7UL,0xA9A3B946L,18446744073709551611UL,0x2F0365FDL,0xEB5A3509L,1UL,0x7C3F3E64L},{18446744073709551611UL,0xA9F14759L,0x2D4DE997L,0x7F97D868L,0xB082D557L,0UL,7UL},{0xF8D131F8L,18446744073709551606UL,18446744073709551611UL,0UL,0x9B6CD5DAL,0xA427314EL,0x81623613L},{18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551608UL,1UL,0x69695B5DL,0UL}},{{0x7C3F3E64L,0xA427314EL,1UL,18446744073709551615UL,2UL,0x81623613L,18446744073709551615UL},{0x11346C9BL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,0x14DF23BBL,0xA1411297L,18446744073709551609UL},{18446744073709551606UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL,0x7A0868FBL,18446744073709551615UL},{1UL,0x11346C9BL,8UL,18446744073709551615UL,18446744073709551615UL,8UL,0x11346C9BL},{0xEE666E1DL,18446744073709551613UL,0UL,18446744073709551611UL,0x1A36C89BL,0x4F98A5A3L,18446744073709551610UL},{18446744073709551608UL,0x26CCE978L,0UL,0x2D4DE997L,18446744073709551609UL,0x69695B5DL,0x16DF3246L}}};
            int32_t ***l_1098[3][4][2] = {{{(void*)0,&g_1096},{&g_1096,(void*)0},{&g_1096,&g_1096},{&g_1096,(void*)0}},{{&g_1096,&g_1096},{(void*)0,&g_1096},{&g_1096,(void*)0},{&g_1096,&g_1096}},{{&g_1096,(void*)0},{&g_1096,&g_1096},{(void*)0,&g_1096},{&g_1096,(void*)0}}};
            int8_t *l_1100[1][7] = {{&g_611[2].f4,&g_611[2].f4,&g_611[2].f4,&g_611[2].f4,&g_611[2].f4,&g_611[2].f4,&g_611[2].f4}};
            int8_t l_1101[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1101[i] = (-1L);
        }
        (*l_1112) = ((*p_56) = (safe_mod_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_u(g_384.f0, 0)) ^ (*****l_751)) >= 0UL), (safe_div_func_uint8_t_u_u(0xC5L, ((safe_lshift_func_int8_t_s_s((l_1110 , ((*p_56) > (0xDB17L | g_152[0].f2))), l_1111[1][0][0])) , g_103))))));
    }
    return (*g_275);
}



static struct S0  func_58(int32_t  p_59, const uint32_t  p_60)
{ 
    int32_t *l_61 = (void*)0;
    int32_t *l_62 = &g_7;
    int32_t *l_63 = &g_7;
    int32_t *l_64 = &g_7;
    int32_t *l_65 = &g_7;
    int32_t *l_66[1];
    uint16_t l_67 = 65535UL;
    struct S0 l_70 = {18446744073709551615UL,0xF4707698L,0x8DB1BCEFE97C8AD5LL,0xD9A899DE2363870ELL,-1L,7L,0xACL,1L};
    int i;
    for (i = 0; i < 1; i++)
        l_66[i] = &g_7;
    l_67++;
    return l_70;
}



static int32_t ** func_71(uint32_t  p_72, uint16_t  p_73, int32_t ** p_74, uint64_t  p_75)
{ 
    struct S2 l_77[4][7] = {{{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L},{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L},{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L},{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L},{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L},{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L},{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L}},{{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL},{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL},{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL},{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL},{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL},{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL},{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL}},{{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L},{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L},{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L},{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L},{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L},{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L},{4UL,0xD4A9L,0x1A085592L,0x418FD7A1L}},{{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL},{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL},{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL},{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL},{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL},{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL},{0x802BA47188FCF759LL,-1L,0xFA737C25L,0xAE8D4C1FL}}};
    int32_t l_82 = 0x1805AE8AL;
    int8_t l_83 = (-1L);
    const uint32_t l_86 = 0xEBAD2A39L;
    uint8_t *l_87 = &g_88;
    uint8_t *l_89[2][5][1] = {{{&g_90[1][1]},{&g_90[3][1]},{&g_90[1][1]},{&g_90[3][1]},{&g_90[1][1]}},{{&g_90[3][1]},{&g_90[1][1]},{&g_90[3][1]},{&g_90[1][1]},{&g_90[3][1]}}};
    int32_t *l_130 = (void*)0;
    int32_t *l_132 = &g_133;
    int32_t l_207 = (-8L);
    int32_t l_208 = 5L;
    int32_t l_209 = 1L;
    int32_t l_211 = 0xD468399CL;
    uint32_t l_212 = 0x20001E74L;
    uint32_t l_249[6][5] = {{0x47DF71C4L,0xF88B4421L,3UL,3UL,0xF88B4421L},{0xF88B4421L,0x4B2485EEL,0x47DF71C4L,1UL,0UL},{0x86542614L,0x4B2485EEL,1UL,0xF0FD0DADL,0xCBC5E4B8L},{0xA017D168L,0xF88B4421L,0xF88B4421L,0xA017D168L,0xF0FD0DADL},{0x86542614L,3UL,0UL,0xC6D1B6C7L,0xF0FD0DADL},{0xF88B4421L,0x86542614L,0xCBC5E4B8L,0x47DF71C4L,0xCBC5E4B8L}};
    struct S2 *l_326 = &g_152[0];
    struct S2 **l_325 = &l_326;
    struct S1 l_365[5][2][6] = {{{{4294967295UL},{4294967295UL},{0xA31DF79AL},{0x9E61DB12L},{0xD5DE0121L},{0x90319A3AL}},{{0xA31DF79AL},{0UL},{0xAB93912BL},{6UL},{1UL},{0xA31DF79AL}}},{{{0x11DDC483L},{0xA31DF79AL},{0xAB93912BL},{0x8DAF854EL},{4294967295UL},{0x90319A3AL}},{{0x097CEE04L},{0x8DAF854EL},{0xA31DF79AL},{0x6812D285L},{0x0110AAADL},{0x6812D285L}}},{{{0x6812D285L},{0x0110AAADL},{0x6812D285L},{0xA31DF79AL},{0x8DAF854EL},{0x097CEE04L}},{{0x90319A3AL},{4294967295UL},{0x8DAF854EL},{0xAB93912BL},{0xA31DF79AL},{0x11DDC483L}}},{{{0xA31DF79AL},{1UL},{6UL},{0xAB93912BL},{0UL},{0xA31DF79AL}},{{0x90319A3AL},{0xD5DE0121L},{0x9E61DB12L},{0xA31DF79AL},{0xA31DF79AL},{0xA31DF79AL}}},{{{6UL},{0x6812D285L},{0x6812D285L},{6UL},{4294967295UL},{4294967294UL}},{{0xAB93912BL},{0x90319A3AL},{6UL},{7UL},{0x5DE7FB35L},{0x9E61DB12L}}}};
    union U3 *l_366 = &g_184;
    uint32_t l_390 = 0xCFCCA987L;
    int32_t l_395 = 3L;
    int32_t l_397[7] = {0x35029868L,0x35029868L,0xF1F12033L,0x35029868L,0x35029868L,0xF1F12033L,0x35029868L};
    uint32_t l_404 = 0UL;
    int8_t l_411[4] = {0L,0L,0L,0L};
    uint32_t * const * const l_506 = &g_188;
    uint64_t l_544 = 0x1CBDF713FBC1D3AELL;
    int8_t l_561 = 0xC5L;
    struct S0 l_568 = {18446744073709551612UL,0x88B36A30L,18446744073709551609UL,0x75156FE4E59491E3LL,1L,0xB6E91E09L,0xFAL,0x8BL};
    int32_t l_580 = 0x1ED2E70AL;
    int32_t **l_585 = &g_8[5][0][0];
    int i, j, k;
    if ((((g_90[1][1] ^= ((l_77[2][0] , p_74) != ((((safe_lshift_func_int8_t_s_u(l_77[2][0].f0, 0)) , (safe_lshift_func_uint8_t_u_s(l_82, (g_7 || ((*l_87) = (l_83 <= (safe_mul_func_int16_t_s_s((l_86 | p_72), g_7)))))))) || l_83) , p_74))) , p_73) != p_75))
    { 
        int32_t l_96 = 0x46D446BFL;
        int32_t * const *l_117 = &g_8[5][0][0];
        struct S2 l_119 = {0xB9ADD7577FCF7A0FLL,-4L,-1L,18446744073709551614UL};
        const uint32_t *l_155 = &g_115;
        const uint32_t **l_154 = &l_155;
        const uint32_t ***l_153[2][7] = {{&l_154,&l_154,&l_154,&l_154,&l_154,&l_154,&l_154},{&l_154,&l_154,&l_154,&l_154,&l_154,&l_154,&l_154}};
        int64_t l_193 = (-9L);
        int32_t l_206 = 0xD8667499L;
        int32_t l_210 = 0x0DCBCF7EL;
        int32_t l_247 = 0x50456AD2L;
        int32_t l_248 = 0xEF8C8917L;
        uint16_t l_262 = 0xA8F1L;
        int64_t l_290 = 0x462C7E73476CD3D2LL;
        int8_t l_324 = 0xF1L;
        uint32_t l_351 = 0xEF10296DL;
        const struct S2 *l_383 = &g_384;
        const struct S2 **l_382 = &l_383;
        union U3 l_385 = {0UL};
        int32_t l_399 = 0xBF05DA06L;
        int32_t l_400 = 0xB0DCED31L;
        int32_t l_401 = 0x2EAB432DL;
        int32_t l_402 = 0L;
        int32_t l_403[6][3] = {{7L,0xE01CF631L,0xED3264F6L},{1L,0xE01CF631L,(-1L)},{0L,0xE01CF631L,0xE01CF631L},{7L,0xE01CF631L,0xED3264F6L},{1L,0xE01CF631L,(-1L)},{0L,0xE01CF631L,0xE01CF631L}};
        uint32_t ****l_445 = &g_254[3];
        int i, j;
        if ((l_77[3][5] , (l_89[0][4][0] != (void*)0)))
        { 
            int32_t l_91[6] = {1L,1L,1L,1L,1L,1L};
            const int32_t l_107 = (-3L);
            uint64_t l_136 = 18446744073709551606UL;
            int32_t *l_183 = &l_91[1];
            uint16_t *l_194 = &g_100;
            uint8_t *l_236 = (void*)0;
            uint32_t l_237 = 0x5B3B32C0L;
            uint32_t l_243 = 1UL;
            int32_t *l_263 = &l_207;
            int i;
lbl_261:
            if (l_91[3])
            { 
                uint16_t *l_97 = (void*)0;
                uint16_t *l_98 = (void*)0;
                uint16_t *l_99 = &g_100;
                uint16_t *l_101 = (void*)0;
                uint16_t *l_102[5];
                uint32_t *l_113 = (void*)0;
                uint32_t *l_114 = &g_115;
                uint64_t l_116 = 0x76FC4B737966B248LL;
                int32_t *l_118 = &g_7;
                int32_t **l_131[7][7] = {{&l_130,&l_118,&l_118,&l_130,&l_130,&l_118,&l_118},{&l_130,&l_118,&l_130,&l_130,&l_118,&l_130,&l_118},{&l_130,&l_130,&l_118,&l_130,&l_118,(void*)0,&l_130},{(void*)0,(void*)0,&l_130,(void*)0,&l_130,(void*)0,(void*)0},{(void*)0,&l_130,&l_130,&l_130,(void*)0,(void*)0,&l_130},{&l_130,&l_118,(void*)0,&l_130,&l_130,(void*)0,&l_118},{&l_130,&l_118,&l_130,(void*)0,&l_118,&l_130,&l_118}};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_102[i] = &g_103;
                (*l_118) = ((((((safe_mul_func_uint8_t_u_u(((l_91[0] = ((*l_99) = (((l_96 &= ((*l_87) = p_72)) , &g_8[5][0][0]) != p_74))) || (+g_103)), (safe_rshift_func_int16_t_s_s((p_75 >= l_107), 6)))) || (((*l_114) = (!((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((((void*)0 != &g_103) <= p_75), 7)) <= p_75), 1UL)) ^ g_4))) != 0L)) & l_116) , l_117) == (void*)0) > p_75);
                if ((l_119 , ((0L >= ((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s((p_73 || (safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((((*l_118) <= ((g_90[1][1] < (((((*p_74) = l_130) != (l_132 = &g_7)) , 0L) != l_119.f0)) < p_75)) && 0x4C4BF40DEF69FDC4LL) || 0L), (*l_118))), p_73))), g_4)), p_73)) >= 1L)) == g_90[1][1])))
                { 
                    uint32_t **l_135[4];
                    uint32_t ***l_134 = &l_135[0];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_135[i] = &l_114;
                    l_96 = p_73;
                    (*l_134) = &l_114;
                }
                else
                { 
                    ++l_136;
                }
            }
            else
            { 
                uint16_t l_149[2][5][2] = {{{0x5910L,0x5910L},{0x5910L,0x5910L},{0x5910L,0x5910L},{0x5910L,0x5910L},{0x5910L,0x5910L}},{{0x5910L,0x5910L},{0x5910L,0x5910L},{0x5910L,0x5910L},{0x5910L,0x5910L},{0x5910L,0x5910L}}};
                struct S0 l_164 = {3UL,0xBB8CB34AL,0x73CB27E705506810LL,0L,0xD4L,0x9CA00625L,-4L,1L};
                int32_t **l_171[1];
                struct S1 l_178 = {1UL};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_171[i] = &g_8[5][0][0];
                if (p_75)
                { 
                    int32_t *l_139 = &l_91[0];
                    int32_t *l_140 = &g_133;
                    int32_t *l_141 = (void*)0;
                    int32_t *l_142 = &l_91[2];
                    int32_t *l_143 = &l_96;
                    int32_t *l_144 = &l_96;
                    int32_t *l_145 = &l_91[1];
                    int32_t *l_146 = (void*)0;
                    int32_t *l_147 = (void*)0;
                    int32_t *l_148[1];
                    const uint32_t ****l_156 = &l_153[0][1];
                    uint32_t *l_161 = &g_115;
                    uint32_t **l_160 = &l_161;
                    uint32_t ***l_159 = &l_160;
                    uint16_t *l_162[7][2][3] = {{{&g_100,(void*)0,&l_149[1][1][0]},{&l_149[1][1][1],(void*)0,&g_100}},{{(void*)0,(void*)0,(void*)0},{&g_100,&g_100,(void*)0}},{{&g_100,&g_100,(void*)0},{&g_100,&g_100,(void*)0}},{{&g_100,&g_100,&g_100},{(void*)0,(void*)0,&g_100}},{{&l_149[1][1][1],&g_100,&g_100},{&g_100,(void*)0,(void*)0}},{{(void*)0,&l_149[1][1][0],(void*)0},{&l_149[0][1][0],&l_149[1][1][0],(void*)0}},{{(void*)0,(void*)0,(void*)0},{&l_149[1][1][0],&g_100,&g_100}}};
                    uint32_t *l_163 = &g_115;
                    struct S0 *l_165 = &g_166[1];
                    int32_t l_168 = 0x70DEFB85L;
                    struct S1 **l_170 = &g_169;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_148[i] = &g_133;
                    l_149[1][1][0]++;
                    (*l_165) = (l_164 = func_58((*l_140), ((*l_163) = (((g_152[0] , (p_74 == (void*)0)) , (p_73 = (((*l_156) = l_153[0][5]) != (((safe_mul_func_int8_t_s_s(l_149[0][4][1], p_72)) > p_72) , l_159)))) || p_72))));
                    l_168 = g_167;
                    (*l_170) = g_169;
                }
                else
                { 
                    return l_171[0];
                }
                if ((~(safe_mod_func_uint64_t_u_u((!((safe_div_func_int8_t_s_s(1L, ((*l_87) = ((*l_132) | p_72)))) , 1UL)), 9L))))
                { 
                    struct S1 l_179[5] = {{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL}};
                    struct S2 **l_180 = (void*)0;
                    struct S2 *l_182 = (void*)0;
                    struct S2 **l_181 = &l_182;
                    int i;
                    l_179[0] = l_178;
                    (*l_132) = 0x4271DECCL;
                    (*l_181) = &l_119;
                    l_183 = (void*)0;
                }
                else
                { 
                    return l_171[0];
                }
            }
            if ((g_166[1].f5 <= ((((g_184 , (void*)0) != &p_73) <= (safe_lshift_func_int16_t_s_s(((void*)0 != g_187), 0))) , (safe_sub_func_uint32_t_u_u((((*l_194) = (safe_mod_func_uint32_t_u_u(((*l_117) != (void*)0), l_193))) == g_152[0].f3), p_73)))))
            { 
                return p_74;
            }
            else
            { 
                int32_t *l_195 = &g_133;
                int32_t *l_196 = (void*)0;
                int32_t *l_197 = &g_133;
                int32_t *l_198 = &l_91[0];
                int32_t *l_199 = &g_7;
                int32_t *l_200 = &g_133;
                int32_t *l_201 = &l_91[4];
                int32_t *l_202 = &g_7;
                int32_t *l_203 = &l_91[2];
                int32_t *l_204 = &l_96;
                int32_t *l_205[7] = {&l_91[3],&l_91[3],&l_91[2],&l_91[3],&l_91[3],&l_91[2],&l_91[3]};
                struct S1 *l_215 = &g_216;
                struct S1 **l_217 = (void*)0;
                struct S1 **l_218 = &l_215;
                int8_t *l_238 = &l_83;
                int8_t *l_239 = &g_166[1].f7;
                int i;
                ++l_212;
                (*l_218) = l_215;
                if ((((safe_mul_func_uint8_t_u_u(((~(((safe_lshift_func_uint16_t_u_u(65526UL, (safe_mod_func_uint8_t_u_u((g_90[0][1] = ((((*l_239) = ((*l_238) = ((safe_rshift_func_uint16_t_u_u(((*l_194) |= (safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((&g_8[2][0][0] != ((safe_div_func_int16_t_s_s((-1L), (8L & (safe_mod_func_uint32_t_u_u((&g_88 == l_236), l_237))))) , &g_8[4][2][0])), (*l_132))), 1L))), 8)) | 0x10BBF201L))) & g_103) ^ (*l_132))), 8L)))) != 0x1AL) , 0xC8D7BDB8F3D68C37LL)) || g_133), g_88)) , l_119.f0) < 0UL))
                { 
                    int16_t l_240 = 0xB807L;
                    int32_t l_241[7] = {0L,0L,0L,0L,0L,0L,0L};
                    int32_t l_242 = 0x2536E0C4L;
                    int i;
                    --l_243;
                    (*l_199) = (safe_unary_minus_func_int16_t_s(((*g_187) == (*g_187))));
                    l_249[3][2]--;
                    g_252 = g_252;
                    (*l_198) = ((p_73 < (0x9CA4L > 0xB627L)) != (safe_mod_func_uint64_t_u_u(((l_241[4] = (safe_mul_func_uint16_t_u_u(((l_241[6] , (void*)0) == &g_216), (((safe_sub_func_uint32_t_u_u(p_73, p_73)) , g_184.f0) || g_184.f0)))) ^ p_73), p_73)));
                }
                else
                { 
                    return p_74;
                }
            }
            if (p_75)
                goto lbl_261;
            (*l_263) = ((*l_132) = ((*****g_252) || (l_262 = (6UL > p_73))));
            l_211 |= ((*l_263) = ((*l_132) = p_72));
        }
        else
        { 
            int64_t l_264 = 0xDD4135D0B07067DFLL;
            union U3 *l_281 = &g_184;
            union U3 **l_280 = &l_281;
            int32_t l_287 = 0x58FF53A8L;
            int32_t l_307 = (-5L);
            struct S2 * const l_355 = &l_77[0][4];
            uint16_t *l_359 = &g_100;
            uint32_t *****l_388 = &g_253;
            const int16_t l_393 = 0xB7B7L;
            int32_t *l_394[6][6][1] = {{{&l_307},{&l_210},{&l_247},{&l_96},{&g_133},{&l_209}},{{&l_206},{&l_209},{&g_133},{&l_96},{&l_247},{&l_210}},{{&l_307},{&l_307},{&l_210},{&l_247},{&l_96},{&g_133}},{{&l_209},{&l_206},{&l_209},{&g_133},{&l_96},{&l_247}},{{&l_210},{&l_307},{&l_307},{&l_210},{&l_247},{&l_96}},{{&g_133},{&l_209},{&l_206},{&l_209},{&g_133},{&l_96}}};
            int64_t l_396 = 0x881135BB8A3C5331LL;
            int64_t l_398[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_398[i] = (-1L);
            if ((l_264 != 65535UL))
            { 
                union U3 *l_266 = &g_184;
                union U3 **l_265 = &l_266;
                int32_t **l_267 = &g_8[4][3][0];
                (*l_265) = &g_184;
                return l_267;
            }
            else
            { 
                int8_t l_268 = 0x0DL;
                union U3 **l_284[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_285 = (-1L);
                int64_t l_306 = 0x27BE67DA5BF75F06LL;
                int32_t **l_308 = &g_8[5][0][0];
                int16_t *l_315 = (void*)0;
                int16_t *l_316 = &g_152[0].f1;
                int16_t *l_317 = &l_119.f1;
                uint32_t * const l_320 = &g_184.f0;
                int32_t *l_344 = &l_209;
                int64_t *l_345 = &g_166[1].f3;
                int8_t *l_346 = &l_324;
                uint16_t *l_347[1];
                struct S2 *l_354 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_347[i] = &g_103;
                if (l_264)
                { 
                    const union U3 *l_274 = (void*)0;
                    const union U3 **l_273 = &l_274;
                    int32_t l_276 = (-4L);
                    int32_t *l_277 = &l_207;
                    union U3 **l_283[6][5] = {{&l_281,&l_281,&l_281,&l_281,&l_281},{&l_281,&l_281,&l_281,&l_281,&l_281},{&l_281,&l_281,&l_281,&l_281,&l_281},{&l_281,&l_281,&l_281,&l_281,&l_281},{&l_281,&l_281,&l_281,&l_281,&l_281},{&l_281,&l_281,&l_281,&l_281,&l_281}};
                    union U3 ***l_282[3][2] = {{&l_283[1][3],&l_283[1][3]},{&l_283[3][4],&l_283[1][3]},{&l_283[1][3],&l_283[3][4]}};
                    uint32_t l_286 = 1UL;
                    uint16_t *l_298 = &g_100;
                    int32_t **l_304 = &l_277;
                    int32_t ***l_303 = &l_304;
                    uint32_t *l_305[5];
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_305[i] = &l_249[2][1];
                    (*l_132) |= (l_268 & (safe_div_func_int16_t_s_s((((((((*l_273) = (void*)0) == &g_184) , g_275) != &g_166[0]) == (g_152[0].f3 > l_276)) ^ 0x46L), (-10L))));
                    l_277 = (*p_74);
                    l_287 = (0L != (((((safe_lshift_func_int8_t_s_s(((l_280 != (l_284[1] = &l_281)) , l_268), 2)) || 0x1AB9L) | (l_285 = g_167)) > l_286) | (-1L)));
                    l_307 = (safe_mul_func_uint8_t_u_u(l_290, (g_4 ^ (safe_mul_func_uint8_t_u_u((+((l_264 == ((safe_sub_func_uint64_t_u_u((p_75 = g_166[1].f2), 0x935403E42DC6AE76LL)) , ((l_287 = (((safe_rshift_func_uint16_t_u_s((((*l_298)++) ^ (safe_sub_func_uint64_t_u_u((((*****g_252) ^= p_73) >= (l_306 = (((*l_303) = &g_8[5][0][0]) == (void*)0))), g_166[1].f2))), 8)) , g_115) != g_167)) > g_216.f0))) & p_72)), (*l_132))))));
                }
                else
                { 
                    return l_308;
                }
                l_324 |= (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((*l_317) = ((*l_316) = (safe_lshift_func_uint16_t_u_u(0UL, p_72)))), ((**l_280) , ((((safe_mul_func_uint16_t_u_u((l_320 == (((*l_87) ^= (!(safe_mul_func_uint8_t_u_u(p_72, (((-4L) ^ (0xB686L & 0x1356L)) && 1UL))))) , (****g_252))), g_166[1].f5)) | 1L) == p_75) <= 4294967295UL)))), g_166[1].f4));
                if (((*l_132) = ((l_325 == (((safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(2UL, ((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u((l_96 ^= ((!((*l_346) ^= (((((((((0x67F250ECAABD6020LL != (((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((((*l_87) = p_73) != (*l_132)), ((*l_344) = (safe_rshift_func_uint16_t_u_s(p_73, 1))))) == ((*l_345) = (g_152[0].f2 == p_75))), g_166[1].f1)), p_72)) || p_73) | 0x06L)) || l_264) , l_287) != (*l_132)) , 0x3550L) && 0L) && g_152[0].f1) & 1L) , p_75))) || 0x76BCL)), g_152[0].f2)) == g_348), 15)) | 0L))), 0x1E01C687L)) != 0UL) , &l_326)) < p_72)))
                { 
                    int32_t l_358[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_358[i] = (-1L);
                    (*l_132) &= ((*l_344) >= (((*p_74) != ((safe_mul_func_uint16_t_u_u((l_351++), (((l_354 == l_355) > p_72) <= (((l_358[2] != (((l_359 == &p_73) , g_360) == l_284[3])) && p_75) > l_358[2])))) , &l_211)) & l_358[2]));
                }
                else
                { 
                    g_361[0][0] = g_361[0][0];
                }
                (*l_132) &= l_287;
            }
            l_307 = (l_264 >= (safe_div_func_int8_t_s_s((((((&g_184 != (((*l_355) , l_365[1][0][3]) , l_366)) , l_366) == l_366) == g_90[3][2]) ^ 0xC4L), p_73)));
            for (l_264 = 0; (l_264 <= 19); ++l_264)
            { 
                struct S2 ***l_378 = &g_376[0][0];
                const struct S2 *l_381[2];
                const struct S2 **l_380 = &l_381[0];
                const struct S2 ***l_379 = &l_380;
                int32_t l_389[6][5] = {{1L,0x7BB0E0BCL,1L,0x7BB0E0BCL,1L},{(-3L),(-3L),0x1B6C5DF4L,0x1B6C5DF4L,(-3L)},{(-1L),0x7BB0E0BCL,(-1L),0x7BB0E0BCL,(-1L)},{(-3L),0x1B6C5DF4L,0x1B6C5DF4L,(-3L),(-3L)},{1L,0x7BB0E0BCL,1L,0x7BB0E0BCL,1L},{(-3L),(-3L),0x1B6C5DF4L,0x1B6C5DF4L,(-3L)}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_381[i] = (void*)0;
                for (g_103 = 0; (g_103 != 34); g_103++)
                { 
                    int64_t l_371 = (-3L);
                    if (l_371)
                        break;
                    if (p_72)
                        continue;
                }
                l_389[2][3] = (((l_264 != (((((*l_378) = g_376[0][0]) != (l_382 = ((*l_379) = (void*)0))) == (l_385 , (0x4476L <= (safe_lshift_func_uint16_t_u_u(((((p_75 != (((l_388 == &g_253) < l_389[2][0]) | 7UL)) ^ g_4) == (-9L)) != 0xEDL), 8))))) == l_390)) > p_73) <= 0UL);
                if (p_72)
                    break;
                for (l_96 = 2; (l_96 > (-18)); l_96 = safe_sub_func_int64_t_s_s(l_96, 2))
                { 
                    (*l_132) ^= l_393;
                }
            }
            l_404--;
            if ((7L > (safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s(((l_411[0] | (((*l_132) = p_73) <= p_72)) != (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s((p_73 | (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((l_355 == (void*)0), (-6L))), p_75)))), p_72))), 5)) < 0x79E9AFD7L), g_90[1][1]))), p_75)), p_73))))
            { 
                (*l_132) = p_72;
            }
            else
            { 
                uint8_t l_423 = 0xD1L;
                int16_t *l_439 = &g_167;
                int8_t *l_440[4] = {&l_83,&l_83,&l_83,&l_83};
                int32_t l_441 = (-1L);
                uint64_t l_442 = 0x9563871B06F6FBDCLL;
                int i;
                (*l_132) &= p_75;
                (*l_132) |= (((l_441 = (((*l_366) , l_423) && (((-3L) <= ((((0L >= ((safe_add_func_int16_t_s_s(((*l_439) = (safe_add_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u((l_365[1][0][3] , g_88), (~(safe_mul_func_int16_t_s_s((((--(*****g_252)) || (safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(65526UL, 10)) & g_90[3][1]), 0x1E2BE7F7L))) > 0x58466E0DL), g_167))))) , (void*)0) == (void*)0), g_384.f3))), g_216.f0)) < p_72)) >= l_399) <= g_166[1].f7) < p_72)) , (*****g_252)))) & g_166[1].f4) , 3L);
                ++l_442;
                (*g_252) = l_445;
            }
        }
    }
    else
    { 
        uint32_t l_446 = 0x2AAEB3B4L;
        struct S1 l_471 = {1UL};
        int32_t l_516 = 1L;
        int32_t l_521 = 0x9A744BFCL;
        struct S0 *l_542 = &g_166[2];
        int32_t *l_560 = (void*)0;
        int16_t l_562 = 0x8896L;
        int32_t l_576 = 8L;
        int16_t l_577 = (-7L);
        int32_t l_578 = (-5L);
        int32_t l_579 = 0x105A0B7BL;
        int32_t l_581 = 0xCB2C7D9FL;
        l_446--;
        (*l_132) = ((safe_mul_func_uint16_t_u_u(((65527UL == (safe_rshift_func_uint16_t_u_s(g_166[1].f3, 7))) > (safe_lshift_func_uint16_t_u_s(g_384.f0, 12))), (safe_rshift_func_uint8_t_u_u(g_115, p_75)))) <= 0x49FCEE94L);
        for (g_216.f0 = 0; (g_216.f0 == 11); g_216.f0++)
        { 
            struct S1 l_459 = {0UL};
            uint32_t **l_505[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_518 = 0xD9AFEF23L;
            int32_t l_519 = 0L;
            struct S2 *l_567 = &l_77[1][1];
            int32_t *l_569 = &l_521;
            int32_t *l_570 = &g_133;
            int32_t *l_571 = &g_133;
            int32_t *l_572 = &l_211;
            int32_t *l_573 = &l_211;
            int32_t *l_574 = &l_209;
            int32_t *l_575[4] = {&g_166[1].f5,&g_166[1].f5,&g_166[1].f5,&g_166[1].f5};
            uint16_t l_582[5][7] = {{0x44A7L,0x44A7L,0x44A7L,0x44A7L,0x44A7L,0x44A7L,0x44A7L},{65534UL,65534UL,65534UL,65534UL,65534UL,65534UL,65534UL},{0x44A7L,0x44A7L,0x44A7L,0x44A7L,0x44A7L,0x44A7L,0x44A7L},{65534UL,65534UL,65534UL,65534UL,65534UL,65534UL,65534UL},{0x44A7L,0x44A7L,0x44A7L,0x44A7L,0x44A7L,0x44A7L,0x44A7L}};
            int i, j;
            l_459 = l_459;
            for (g_103 = 0; (g_103 > 52); ++g_103)
            { 
                struct S1 * const l_462 = &l_459;
                int32_t l_466 = 0x7985524BL;
                int32_t l_517 = 0x1FE179EFL;
                int32_t l_520 = 9L;
                struct S0 *l_543 = &g_166[1];
                int8_t *l_545 = &l_83;
                int16_t *l_546 = (void*)0;
                int16_t *l_547 = &g_167;
                if (((*l_132) = 0x398B7322L))
                { 
                    struct S1 **l_463 = &g_169;
                    int32_t ****l_465 = &g_361[0][0];
                    int32_t *****l_464 = &l_465;
                    uint16_t *l_474 = &g_100;
                    (*l_463) = l_462;
                    (*l_464) = &g_361[0][1];
                    (*g_275) = (l_466 , func_58(((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((((l_471 , (safe_div_func_uint16_t_u_u((((*l_463) = &g_216) != &l_459), l_471.f0))) ^ l_459.f0) == ((*l_474) |= 0xCBC5L)), p_72)), l_459.f0)) ^ l_459.f0), l_466));
                    if (p_72)
                        continue;
                }
                else
                { 
                    uint64_t l_477 = 18446744073709551613UL;
                    int16_t *l_484 = &l_77[2][0].f1;
                    int32_t *l_485 = &l_207;
                    int8_t *l_507[3];
                    int32_t *l_508 = &l_397[4];
                    int32_t *l_509 = &l_207;
                    int32_t *l_510 = &l_466;
                    int32_t *l_511 = &g_166[1].f5;
                    int32_t *l_512 = &l_209;
                    int32_t l_513 = (-6L);
                    int32_t *l_514 = (void*)0;
                    int32_t *l_515[2];
                    uint64_t l_522 = 0x4DFC188994A78406LL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_507[i] = &l_83;
                    for (i = 0; i < 2; i++)
                        l_515[i] = &l_209;
                    (*l_132) = ((safe_lshift_func_int16_t_s_u(((*l_484) &= ((((*g_275) = func_58(((*l_132) = l_477), (((((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((p_73 , (p_73 < p_73)), (safe_mul_func_uint8_t_u_u(p_72, ((*g_275) , (l_459.f0 ^ p_73)))))), 3)) < 0x13D8B80ED6A21B39LL) != p_75) <= 0x8B530714826A3796LL) == g_166[1].f2))) , g_100) | p_75)), p_75)) != 0L);
                    l_485 = (*p_74);
                    (*l_132) ^= (safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(p_75, 6)), ((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((*l_484) |= (safe_div_func_uint32_t_u_u(p_75, ((safe_lshift_func_int8_t_s_s((((((safe_div_func_int8_t_s_s((g_166[1].f6 = (+((((l_446 <= p_72) && g_4) || (l_505[0] != l_506)) && l_466))), p_72)) | g_166[1].f2) == l_466) ^ l_446) > p_72), 7)) & 0x64L)))), 14)), 65535UL)) | g_152[0].f2))), 4294967295UL)), p_75));
                    l_522--;
                    if ((*l_508))
                        break;
                }
                (*l_132) = ((g_384.f1 ^ (((safe_rshift_func_uint8_t_u_s(((((safe_mod_func_int64_t_s_s(((safe_unary_minus_func_int16_t_s(p_75)) && ((*l_547) = ((+(((*l_545) = (~((safe_add_func_uint16_t_u_u(((0x3FL > ((((safe_sub_func_int8_t_s_s(((func_58((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((-1L), (((l_542 != l_543) != 4294967295UL) > g_166[1].f3))), 0x9FL)), (**g_187)) , (-1L)) > g_166[1].f5), l_544)) < 0x163CDFEDB5C036F0LL) , 0x40BCL) , (*l_132))) && 1UL), l_471.f0)) | (*l_132)))) || 0x2CL)) < g_166[1].f5))), 0xFBDA3A3E9E86ACDCLL)) >= l_446) <= p_72) && p_75), p_75)) & l_521) || g_152[0].f1)) || 4294967295UL);
                if (l_517)
                    continue;
            }
            for (l_209 = 0; (l_209 <= 1); l_209++)
            { 
                uint16_t *l_557 = &g_100;
                int32_t l_563 = (-1L);
                for (l_516 = 0; (l_516 != 21); l_516++)
                { 
                    uint16_t *l_555[1];
                    uint16_t **l_554 = &l_555[0];
                    int32_t *l_558 = &l_207;
                    int32_t *l_559[7][5][2] = {{{&l_211,&l_516},{(void*)0,(void*)0},{&g_166[1].f5,(void*)0},{(void*)0,(void*)0},{&g_166[1].f5,(void*)0}},{{(void*)0,&l_516},{&l_211,&l_395},{&l_211,&l_516},{(void*)0,(void*)0},{&g_166[1].f5,(void*)0}},{{(void*)0,(void*)0},{&g_166[1].f5,(void*)0},{(void*)0,&l_516},{&l_211,&l_395},{&l_211,&l_516}},{{(void*)0,(void*)0},{&g_166[1].f5,(void*)0},{(void*)0,&l_516},{(void*)0,&l_209},{&g_166[1].f5,&l_395}},{{&g_166[1].f5,&l_521},{&g_166[1].f5,&l_395},{&g_166[1].f5,&l_209},{(void*)0,&l_516},{(void*)0,&l_516}},{{(void*)0,&l_209},{&g_166[1].f5,&l_395},{&g_166[1].f5,&l_521},{&g_166[1].f5,&l_395},{&g_166[1].f5,&l_209}},{{(void*)0,&l_516},{(void*)0,&l_516},{(void*)0,&l_209},{&g_166[1].f5,&l_395},{&g_166[1].f5,&l_521}}};
                    uint16_t l_564 = 0x8A5BL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_555[i] = (void*)0;
                    l_518 |= ((*l_558) = (g_103 < ((0L != 4294967295UL) != (safe_add_func_int16_t_s_s(p_73, (((*l_132) ^= ((g_556 = ((*l_554) = &g_100)) == l_557)) || ((*g_188) = 0UL)))))));
                    (*p_74) = l_560;
                    l_564--;
                    if (p_72)
                        continue;
                }
                (*l_325) = l_567;
                (*l_542) = l_568;
                (*l_326) = (*l_326);
            }
            l_582[2][1]--;
        }
    }
    return l_585;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_90[i][j], "g_90[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_152[i].f0, "g_152[i].f0", print_hash_value);
        transparent_crc(g_152[i].f1, "g_152[i].f1", print_hash_value);
        transparent_crc(g_152[i].f2, "g_152[i].f2", print_hash_value);
        transparent_crc(g_152[i].f3, "g_152[i].f3", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_166[i].f0, "g_166[i].f0", print_hash_value);
        transparent_crc(g_166[i].f1, "g_166[i].f1", print_hash_value);
        transparent_crc(g_166[i].f2, "g_166[i].f2", print_hash_value);
        transparent_crc(g_166[i].f3, "g_166[i].f3", print_hash_value);
        transparent_crc(g_166[i].f4, "g_166[i].f4", print_hash_value);
        transparent_crc(g_166[i].f5, "g_166[i].f5", print_hash_value);
        transparent_crc(g_166[i].f6, "g_166[i].f6", print_hash_value);
        transparent_crc(g_166[i].f7, "g_166[i].f7", print_hash_value);

    }
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_184.f0, "g_184.f0", print_hash_value);
    transparent_crc(g_216.f0, "g_216.f0", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_384.f0, "g_384.f0", print_hash_value);
    transparent_crc(g_384.f1, "g_384.f1", print_hash_value);
    transparent_crc(g_384.f2, "g_384.f2", print_hash_value);
    transparent_crc(g_384.f3, "g_384.f3", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_611[i].f0, "g_611[i].f0", print_hash_value);
        transparent_crc(g_611[i].f1, "g_611[i].f1", print_hash_value);
        transparent_crc(g_611[i].f2, "g_611[i].f2", print_hash_value);
        transparent_crc(g_611[i].f3, "g_611[i].f3", print_hash_value);
        transparent_crc(g_611[i].f4, "g_611[i].f4", print_hash_value);
        transparent_crc(g_611[i].f5, "g_611[i].f5", print_hash_value);
        transparent_crc(g_611[i].f6, "g_611[i].f6", print_hash_value);
        transparent_crc(g_611[i].f7, "g_611[i].f7", print_hash_value);

    }
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_851, "g_851", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_1084.f0, "g_1084.f0", print_hash_value);
    transparent_crc(g_1113.f0, "g_1113.f0", print_hash_value);
    transparent_crc(g_1113.f1, "g_1113.f1", print_hash_value);
    transparent_crc(g_1113.f2, "g_1113.f2", print_hash_value);
    transparent_crc(g_1113.f3, "g_1113.f3", print_hash_value);
    transparent_crc(g_1113.f4, "g_1113.f4", print_hash_value);
    transparent_crc(g_1113.f5, "g_1113.f5", print_hash_value);
    transparent_crc(g_1113.f6, "g_1113.f6", print_hash_value);
    transparent_crc(g_1113.f7, "g_1113.f7", print_hash_value);
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1335, "g_1335", print_hash_value);
    transparent_crc(g_1336, "g_1336", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1394[i], "g_1394[i]", print_hash_value);

    }
    transparent_crc(g_1468, "g_1468", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1484[i], "g_1484[i]", print_hash_value);

    }
    transparent_crc(g_1576, "g_1576", print_hash_value);
    transparent_crc(g_1725, "g_1725", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1727[i][j][k], "g_1727[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1856, "g_1856", print_hash_value);
    transparent_crc(g_2003, "g_2003", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_2147[i][j][k], "g_2147[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2224, "g_2224", print_hash_value);
    transparent_crc(g_2569, "g_2569", print_hash_value);
    transparent_crc(g_2652, "g_2652", print_hash_value);
    transparent_crc(g_2660, "g_2660", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
