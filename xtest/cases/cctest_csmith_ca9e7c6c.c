// SPDX-License-Identifier: MIT
// cctest_csmith_ca9e7c6c.c --- cctest case csmith_ca9e7c6c (csmith seed 3399384172)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xaee2f90b */

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

// Options:   -s 3399384172 -o /tmp/csmith_gen_381muyni/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   int16_t  f3;
   int64_t  f4;
   int16_t  f5;
   int8_t  f6;
};
#pragma pack(pop)

union U1 {
   int8_t * f0;
};

union U2 {
   uint64_t  f0;
};

union U3 {
   int16_t  f0;
};

union U4 {
   const uint32_t  f0;
   const uint8_t  f1;
};

union U5 {
   const int32_t  f0;
   int64_t  f1;
   const int64_t  f2;
   uint32_t  f3;
};


static uint16_t g_10 = 0UL;
static int32_t g_13 = 0x7E3B6F9BL;
static uint32_t g_25 = 18446744073709551607UL;
static int8_t g_39 = (-1L);
static const union U3 g_57 = {0x6EB3L};
static const union U3 *g_56[1] = {&g_57};
static uint8_t g_73[4] = {249UL,249UL,249UL,249UL};
static int16_t g_81 = 0xC7C5L;
static uint32_t g_86 = 0UL;
static union U4 g_99 = {8UL};
static uint64_t g_101 = 18446744073709551611UL;
static uint8_t g_105 = 0x12L;
static int32_t g_108 = 1L;
static int64_t g_116 = (-1L);
static int64_t g_118 = (-5L);
static union U1 g_129[5] = {{0},{0},{0},{0},{0}};
static union U5 g_140 = {0xF50803CBL};
static union U5 *g_139 = &g_140;
static const uint8_t *g_162 = &g_99.f1;
static const uint8_t * const *g_161 = &g_162;
static uint32_t g_174 = 0x01D75DE8L;
static uint32_t g_178 = 0x7BD1CFCEL;
static uint32_t g_190 = 0UL;
static uint16_t g_197 = 0x1D50L;
static union U3 g_230 = {0x527EL};
static struct S0 g_236 = {0UL,4294967295UL,0xAD2F1836L,-1L,3L,3L,-1L};
static uint16_t g_259 = 0xAB75L;
static int16_t g_297[4] = {(-9L),(-9L),(-9L),(-9L)};
static uint64_t g_300 = 18446744073709551615UL;
static uint32_t g_310[3] = {0xF38C47E8L,0xF38C47E8L,0xF38C47E8L};
static union U2 g_336 = {18446744073709551608UL};
static uint64_t **g_351[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static uint8_t **g_367 = (void*)0;
static uint8_t ***g_366[7][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
static uint8_t ****g_365 = &g_366[0][0][0];
static struct S0 *g_378 = &g_236;
static union U4 g_466[3] = {{0xF7561DF3L},{0xF7561DF3L},{0xF7561DF3L}};
static union U4 *g_465 = &g_466[2];
static uint32_t *g_475 = &g_86;
static uint32_t **g_474 = &g_475;
static const uint32_t **g_478 = (void*)0;
static const uint32_t ***g_477 = &g_478;
static const int32_t *g_531 = &g_108;
static const int32_t **g_530 = &g_531;
static const int32_t ***g_529 = &g_530;
static uint16_t g_541 = 0xC28AL;
static int16_t g_571 = (-2L);
static uint32_t g_572 = 18446744073709551615UL;
static union U4 g_578 = {0xD716D0D8L};
static int64_t *g_595[3][1][5] = {{{(void*)0,&g_118,(void*)0,&g_236.f4,&g_236.f4}},{{(void*)0,&g_118,(void*)0,(void*)0,(void*)0}},{{&g_236.f4,&g_236.f4,&g_236.f4,(void*)0,(void*)0}}};
static int64_t **g_594 = &g_595[1][0][1];
static int64_t ***g_593 = &g_594;
static uint64_t g_598 = 0UL;
static int64_t g_624 = 8L;
static int64_t ***g_628 = &g_594;
static const int32_t g_653 = 0xE4DC1ACAL;
static uint32_t g_657 = 18446744073709551613UL;
static union U4 g_710[4] = {{0xAFC40678L},{0xAFC40678L},{0xAFC40678L},{0xAFC40678L}};
static int32_t g_713 = 0xFB5DF2ACL;
static uint32_t g_714 = 4UL;
static int8_t g_727[3] = {1L,1L,1L};
static int16_t g_734 = 0x44EEL;
static struct S0 g_735 = {0xA39C5BF4L,0x43D511CDL,18446744073709551610UL,0x6333L,0xA09D5CAE7325AF52LL,1L,0L};
static int64_t g_790 = 0x4A4F9BC42BCB57FELL;
static uint32_t g_791 = 4294967290UL;
static uint64_t g_808 = 0x2C6CCA28B9F3A0E6LL;
static uint16_t g_824 = 0xA3A7L;
static int32_t g_828[2] = {1L,1L};
static union U4 g_833 = {0x44633669L};
static const union U4 *g_832 = &g_833;
static int8_t *g_849 = &g_727[0];
static uint32_t g_874 = 18446744073709551615UL;
static struct S0 **g_883 = (void*)0;
static struct S0 g_929 = {0x1EBE3A41L,1UL,0x2E11316EL,0xCE9EL,0x4E3BCDA6970686FALL,0L,6L};
static int32_t **g_945[1] = {(void*)0};
static int32_t ***g_944 = &g_945[0];
static uint8_t *****g_998 = &g_365;
static uint8_t *****g_999 = &g_365;
static uint32_t g_1034[1] = {0xF52359B5L};
static union U2 * const g_1064 = &g_336;
static union U2 * const *g_1063 = &g_1064;
static uint8_t g_1169[2][3] = {{0xA6L,0xA6L,0xA6L},{0xA6L,0xA6L,0xA6L}};
static uint64_t g_1170 = 18446744073709551615UL;
static union U4 g_1188 = {6UL};
static union U1 *g_1208[5][2] = {{&g_129[2],(void*)0},{&g_129[3],&g_129[2]},{&g_129[3],&g_129[3]},{&g_129[3],&g_129[2]},{&g_129[3],(void*)0}};
static union U1 **g_1207 = &g_1208[2][0];
static union U1 ***g_1206 = &g_1207;
static union U1 ****g_1205 = &g_1206;
static union U1 *****g_1204 = &g_1205;
static int32_t *g_1226 = &g_108;
static uint16_t g_1273 = 0UL;
static uint32_t *g_1333 = (void*)0;
static union U5 **g_1365[3] = {&g_139,&g_139,&g_139};
static union U5 ***g_1364 = &g_1365[2];
static int8_t g_1405 = 0x26L;
static int64_t g_1485 = 1L;
static uint8_t g_1545[4] = {0x50L,0x50L,0x50L,0x50L};
static union U2 *g_1590 = &g_336;
static union U2 **g_1589 = &g_1590;
static union U2 ***g_1588 = &g_1589;
static union U2 ****g_1587 = &g_1588;
static union U2 *****g_1586[3] = {&g_1587,&g_1587,&g_1587};
static const union U2 ** const *g_1595 = (void*)0;
static const union U2 ** const ** const g_1594 = &g_1595;
static const union U2 ** const ** const *g_1593[7] = {&g_1594,&g_1594,&g_1594,&g_1594,&g_1594,&g_1594,&g_1594};



static uint16_t  func_1(void);
static int32_t  func_2(union U5  p_3, uint16_t  p_4, struct S0  p_5);
static union U5  func_6(uint16_t  p_7, uint32_t  p_8);
static int16_t  func_28(int64_t  p_29, int8_t * p_30);
static int32_t  func_42(union U3  p_43, int32_t * p_44, int32_t * p_45, union U1  p_46);
static union U1  func_51(const union U3 * p_52, union U1  p_53, int16_t  p_54, uint64_t  p_55);
static const uint8_t  func_63(union U5  p_64, union U5  p_65);
static union U5  func_66(uint16_t  p_67);




static uint16_t  func_1(void)
{ 
    int32_t l_9 = (-1L);
    int8_t *l_726 = &g_727[0];
    int8_t l_732 = 2L;
    int16_t *l_733 = &g_734;
    int32_t *l_827 = &g_828[0];
    const struct S0 l_845[7] = {{0x92B3935BL,1UL,18446744073709551615UL,-1L,0L,-9L,0x32L},{0x92B3935BL,1UL,18446744073709551615UL,-1L,0L,-9L,0x32L},{0x92B3935BL,1UL,18446744073709551615UL,-1L,0L,-9L,0x32L},{0x92B3935BL,1UL,18446744073709551615UL,-1L,0L,-9L,0x32L},{0x92B3935BL,1UL,18446744073709551615UL,-1L,0L,-9L,0x32L},{0x92B3935BL,1UL,18446744073709551615UL,-1L,0L,-9L,0x32L},{0x92B3935BL,1UL,18446744073709551615UL,-1L,0L,-9L,0x32L}};
    int32_t l_852 = 0L;
    uint32_t l_863[4] = {3UL,3UL,3UL,3UL};
    union U5 *l_872 = &g_140;
    int32_t l_885 = (-1L);
    int32_t l_886 = (-5L);
    int32_t l_887[4] = {1L,1L,1L,1L};
    int64_t **l_961 = (void*)0;
    union U2 l_1000 = {0xD703A9E512C68E19LL};
    int32_t * const **l_1017 = (void*)0;
    uint8_t *****l_1018 = &g_365;
    int64_t l_1020 = 0x4A05C6570E848E73LL;
    const int64_t l_1058[5][5][6] = {{{(-2L),0L,0L,2L,2L,0L},{2L,2L,0L,0L,(-2L),0L},{0L,(-2L),0L,(-2L),0L,0L},{(-2L),0L,0L,2L,2L,0L},{2L,2L,0L,0L,(-2L),0L}},{{0L,(-2L),0L,(-2L),0L,0L},{(-2L),0L,0L,2L,2L,0L},{2L,2L,0L,0L,(-2L),0L},{0L,(-2L),0L,(-2L),0L,0L},{(-2L),0L,0L,2L,2L,0L}},{{2L,2L,0L,0L,(-2L),0L},{0L,(-2L),0L,(-2L),0L,0L},{(-2L),0L,0L,2L,2L,0L},{2L,2L,0L,0L,(-2L),0L},{0L,(-2L),0L,(-2L),0L,0L}},{{(-2L),0L,0L,2L,2L,0L},{2L,2L,0L,0L,(-2L),0L},{0L,(-2L),0L,(-2L),0L,0L},{(-2L),0L,0L,2L,2L,0L},{2L,2L,0L,0L,(-2L),0L}},{{0L,(-2L),0L,(-2L),0L,2L},{0x2FC78E41D21382F7LL,0xD839D27457968351LL,2L,0L,0L,2L},{0L,0L,2L,0xD839D27457968351LL,0x2FC78E41D21382F7LL,2L},{0xD839D27457968351LL,0x2FC78E41D21382F7LL,2L,0x2FC78E41D21382F7LL,0xD839D27457968351LL,2L},{0x2FC78E41D21382F7LL,0xD839D27457968351LL,2L,0L,0L,2L}}};
    union U2 *l_1067 = &g_336;
    union U2 **l_1066 = &l_1067;
    uint16_t l_1077 = 0xA520L;
    int32_t l_1088 = (-1L);
    int16_t l_1092 = 0x21A1L;
    uint16_t l_1095[6][1][7] = {{{0x2AEFL,1UL,1UL,0x2AEFL,0x43B4L,0x2AEFL,1UL}},{{2UL,2UL,1UL,65533UL,1UL,2UL,2UL}},{{2UL,1UL,65533UL,1UL,2UL,2UL,1UL}},{{0x2AEFL,0x43B4L,0x2AEFL,1UL,1UL,0x2AEFL,0x43B4L}},{{1UL,0x43B4L,65533UL,65533UL,0x43B4L,1UL,0x43B4L}},{{0x2AEFL,1UL,1UL,0x2AEFL,0x43B4L,0x2AEFL,1UL}}};
    uint64_t *l_1109 = &g_300;
    uint64_t **l_1108[5][5][7] = {{{&l_1109,(void*)0,&l_1109,(void*)0,(void*)0,(void*)0,&l_1109},{&l_1109,&l_1109,&l_1109,(void*)0,&l_1109,&l_1109,&l_1109},{&l_1109,(void*)0,&l_1109,&l_1109,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1109,&l_1109,&l_1109,&l_1109,(void*)0},{&l_1109,&l_1109,&l_1109,(void*)0,(void*)0,&l_1109,&l_1109}},{{&l_1109,(void*)0,&l_1109,&l_1109,(void*)0,(void*)0,&l_1109},{&l_1109,&l_1109,&l_1109,&l_1109,(void*)0,&l_1109,&l_1109},{&l_1109,&l_1109,&l_1109,(void*)0,&l_1109,&l_1109,&l_1109},{&l_1109,&l_1109,&l_1109,(void*)0,&l_1109,&l_1109,&l_1109},{&l_1109,&l_1109,&l_1109,&l_1109,(void*)0,&l_1109,&l_1109}},{{&l_1109,(void*)0,&l_1109,&l_1109,&l_1109,&l_1109,&l_1109},{&l_1109,&l_1109,(void*)0,&l_1109,(void*)0,(void*)0,&l_1109},{&l_1109,(void*)0,&l_1109,&l_1109,&l_1109,&l_1109,(void*)0},{&l_1109,(void*)0,&l_1109,&l_1109,&l_1109,&l_1109,&l_1109},{(void*)0,&l_1109,(void*)0,&l_1109,(void*)0,&l_1109,&l_1109}},{{&l_1109,&l_1109,&l_1109,&l_1109,(void*)0,&l_1109,(void*)0},{&l_1109,&l_1109,&l_1109,&l_1109,(void*)0,&l_1109,(void*)0},{&l_1109,(void*)0,&l_1109,&l_1109,&l_1109,(void*)0,&l_1109},{(void*)0,(void*)0,&l_1109,&l_1109,(void*)0,&l_1109,&l_1109},{&l_1109,(void*)0,&l_1109,&l_1109,&l_1109,&l_1109,&l_1109}},{{&l_1109,(void*)0,(void*)0,(void*)0,&l_1109,&l_1109,&l_1109},{&l_1109,&l_1109,(void*)0,&l_1109,&l_1109,&l_1109,&l_1109},{&l_1109,&l_1109,&l_1109,&l_1109,&l_1109,(void*)0,&l_1109},{(void*)0,(void*)0,&l_1109,&l_1109,&l_1109,&l_1109,&l_1109},{(void*)0,&l_1109,&l_1109,&l_1109,&l_1109,&l_1109,(void*)0}}};
    uint32_t l_1159[1][5][6] = {{{18446744073709551606UL,18446744073709551610UL,0x599A9E52L,7UL,0xB187550DL,7UL},{0x599A9E52L,18446744073709551606UL,0x599A9E52L,18446744073709551613UL,0x23DF4B70L,0xA9A73D65L},{0x01BF8714L,18446744073709551613UL,7UL,18446744073709551615UL,0x5F51C307L,0x5F51C307L},{18446744073709551615UL,0x5F51C307L,0x5F51C307L,18446744073709551615UL,7UL,18446744073709551613UL},{0x01BF8714L,0xA9A73D65L,0x23DF4B70L,18446744073709551613UL,0x599A9E52L,18446744073709551606UL}}};
    union U4 *l_1186 = &g_578;
    int16_t l_1218 = 0x78C2L;
    int32_t l_1263[5][1] = {{0x643E7D3BL},{1L},{0x643E7D3BL},{1L},{0x643E7D3BL}};
    int64_t l_1265 = 0L;
    uint32_t l_1266 = 8UL;
    int32_t l_1298 = 0x6EB9468BL;
    uint32_t l_1326 = 0x5A6A9782L;
    struct S0 l_1340 = {4294967295UL,4294967295UL,0xACC39187L,7L,4L,0x456FL,0xA2L};
    union U1 *** const *l_1346 = &g_1206;
    union U1 *** const **l_1345[2][5][3];
    union U1 *****l_1347 = &g_1205;
    int8_t l_1380 = 0x62L;
    int64_t l_1468 = 0L;
    uint32_t l_1540 = 8UL;
    int16_t l_1563 = 0x5728L;
    uint16_t l_1576 = 0x5C30L;
    int8_t l_1585 = 0x4DL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
                l_1345[i][j][k] = &l_1346;
        }
    }
    if (((*l_827) |= func_2(func_6(l_9, g_10), (safe_sub_func_uint32_t_u_u((g_710[1].f1 , (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_571, 2)), ((*l_733) |= (safe_add_func_int32_t_s_s((((*l_726) = g_466[2].f1) , ((((safe_add_func_int64_t_s_s((((safe_mod_func_int8_t_s_s((0xE8L | (*g_162)), l_9)) < g_236.f1) | 0L), g_99.f1)) | l_9) , 0xEFL) , l_732)), 0x74FE6680L)))))), g_57.f0)), g_735)))
    { 
        const union U4 *l_829 = &g_99;
        const union U4 **l_830 = (void*)0;
        const union U4 **l_831[5];
        int32_t l_842[1];
        struct S0 l_843 = {4UL,0x5763638EL,18446744073709551607UL,1L,0x9BA0D2F726079EBALL,-7L,0x93L};
        struct S0 *l_844 = &l_843;
        union U1 l_847 = {0};
        int8_t *l_850 = &g_727[0];
        int8_t l_857 = (-5L);
        int32_t l_865 = (-1L);
        union U5 *l_879 = &g_140;
        uint32_t l_893[5][3] = {{9UL,0x35648917L,0x3CEE6161L},{7UL,5UL,0x9F4F24FAL},{9UL,9UL,0x9F4F24FAL},{5UL,7UL,0x3CEE6161L},{0x35648917L,9UL,0x35648917L}};
        uint32_t *l_1019 = &g_735.f0;
        int8_t l_1045[6][7] = {{(-1L),0xC2L,0x10L,0x70L,0x24L,0x85L,6L},{(-8L),7L,0x30L,6L,(-1L),0L,0L},{0x30L,0x64L,0x10L,0x64L,0x30L,5L,0xBBL},{0xBBL,0x64L,(-1L),0xC2L,0x70L,0L,(-1L)},{0x64L,7L,0x70L,0L,0x10L,0x10L,0L},{0xBBL,0xC2L,0xBBL,0x10L,0x85L,7L,0L}};
        int8_t l_1093[2];
        int64_t **l_1166 = &g_595[2][0][2];
        int32_t l_1184 = (-1L);
        union U4 *l_1187 = &g_1188;
        int32_t ***l_1202 = &g_945[0];
        uint16_t l_1203[4][4] = {{0xD091L,0xD091L,0xD2BBL,0xD091L},{0xD091L,0xFE10L,0xFE10L,0xD091L},{0xFE10L,0xD091L,0xFE10L,0xFE10L},{0xD091L,0xD091L,0xD2BBL,0xD091L}};
        uint8_t *** const l_1293 = (void*)0;
        uint32_t l_1300 = 18446744073709551615UL;
        int16_t l_1325 = (-1L);
        int8_t l_1336 = 0xF5L;
        int32_t l_1342[3];
        union U1 ****l_1348 = &g_1206;
        union U2 l_1349 = {0UL};
        int64_t l_1350 = 0x8FBEA884EFE10558LL;
        union U1 l_1351 = {0};
        union U3 l_1361 = {-1L};
        uint8_t *l_1377 = &g_73[2];
        uint8_t **l_1376 = &l_1377;
        int i, j;
        for (i = 0; i < 5; i++)
            l_831[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_842[i] = (-1L);
        for (i = 0; i < 2; i++)
            l_1093[i] = (-2L);
        for (i = 0; i < 3; i++)
            l_1342[i] = 0xE14851BCL;
        g_832 = l_829;
    }
    else
    { 
        uint16_t l_1408 = 1UL;
        struct S0 l_1409 = {9UL,1UL,9UL,0xF248L,-1L,0x79A6L,0xDFL};
        struct S0 * const l_1425 = &g_236;
        int32_t l_1429 = 0L;
        uint32_t l_1457 = 18446744073709551612UL;
        uint8_t **l_1484 = (void*)0;
        int32_t l_1486 = 7L;
        struct S0 *l_1549 = &g_236;
        union U1 l_1552 = {0};
        union U3 l_1603[5][3] = {{{-10L},{0xBB23L},{0xBB23L}},{{-10L},{0xBB23L},{0xBB23L}},{{-10L},{0xBB23L},{0xBB23L}},{{-10L},{0xBB23L},{0xBB23L}},{{-10L},{0xBB23L},{0xBB23L}}};
        int32_t l_1613 = (-6L);
        int i, j;
        if (l_1408)
        { 
            struct S0 *l_1426 = (void*)0;
            int32_t l_1427[6][5] = {{1L,0L,0L,1L,0L},{7L,(-10L),0xE8C791C9L,(-10L),7L},{0L,1L,0L,0L,1L},{7L,8L,0xE8C791C9L,0L,0xE8C791C9L},{0L,0L,1L,0L,0L},{0xE8C791C9L,0L,0xE8C791C9L,8L,0xB0132ABEL}};
            uint16_t *l_1428 = &g_541;
            int32_t *l_1430 = (void*)0;
            int32_t *l_1431 = &g_713;
            uint32_t *l_1441 = &l_1409.f1;
            int8_t l_1455 = 0xB0L;
            const union U3 l_1456 = {-1L};
            int32_t *l_1458 = &l_1427[5][3];
            int i, j;
            l_1409 = l_845[5];
            (*l_1431) |= (safe_sub_func_int8_t_s_s((*l_827), ((safe_mul_func_int8_t_s_s((((safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((*g_139) , ((*l_1428) &= (~(safe_rshift_func_uint8_t_u_u((((*l_1109) = ((safe_rshift_func_uint16_t_u_u(((((((*l_733) |= ((void*)0 != g_531)) && g_190) , (l_1425 == l_1426)) > l_1409.f6) != (*g_162)), 5)) >= l_1427[5][3])) <= 0x937599B96D333BDBLL), 3))))), g_624)) , l_1409.f0), 1L)), (*l_827))) , 4294967288UL) < (*g_1226)), l_1429)) , 0UL)));
            (*l_1458) &= (safe_rshift_func_int8_t_s_s((g_929.f2 && 0x9876C35BL), (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u((safe_add_func_uint32_t_u_u((++(*l_1441)), (!(safe_div_func_uint32_t_u_u(g_39, (*g_531)))))))) ^ (((((*l_1109) ^= ((*l_1431) , (safe_mod_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(g_297[0], (safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(1UL, l_1455)) < l_1429), 0xA239L)))) & g_57.f0) || (-1L)), (*l_827))))) | 0x57E47C5BE5AFCD53LL) , l_1456) , l_1457)), (*g_849))), (*g_531)))));
        }
        else
        { 
            union U1 l_1463 = {0};
            int32_t l_1464 = 0xD3DA2129L;
            int64_t l_1467 = 0x19F582BF21CC9CA7LL;
            uint32_t l_1501 = 0x607586A3L;
            union U2 *** const ** const l_1506 = (void*)0;
            uint32_t l_1528 = 18446744073709551615UL;
            uint32_t l_1544 = 0x876ED6DFL;
            int32_t l_1565 = 0x9AAA76F3L;
            union U1 l_1567 = {0};
            union U2 **l_1629 = (void*)0;
            union U2 **l_1630 = &g_1590;
            if (((safe_mod_func_uint64_t_u_u(0xB33756B45089B02BLL, ((safe_rshift_func_uint8_t_u_u((((&g_378 == (l_1463 , (void*)0)) ^ l_1464) < ((safe_div_func_int16_t_s_s(((void*)0 != &g_465), g_140.f0)) >= l_1464)), 0)) & (***g_529)))) || l_1467))
            { 
                return g_833.f1;
            }
            else
            { 
                const union U2 *l_1476 = &l_1000;
                const union U2 **l_1475 = &l_1476;
                const union U2 ***l_1474 = &l_1475;
                const union U2 ***l_1480 = &l_1475;
                int32_t l_1483[4][3][6] = {{{(-10L),(-10L),0xB84C734EL,(-10L),3L,3L},{0x8E5BD4BEL,(-10L),(-10L),0x8E5BD4BEL,3L,0xB84C734EL},{6L,(-10L),3L,6L,3L,(-10L)}},{{(-10L),(-10L),0xB84C734EL,(-10L),3L,3L},{0x8E5BD4BEL,(-10L),(-10L),0x8E5BD4BEL,3L,0xB84C734EL},{6L,(-10L),3L,6L,3L,(-10L)}},{{(-10L),(-10L),0xB84C734EL,(-10L),3L,3L},{0x8E5BD4BEL,(-10L),(-10L),0x8E5BD4BEL,3L,0xB84C734EL},{6L,(-10L),3L,6L,3L,(-10L)}},{{(-10L),(-10L),0xB84C734EL,(-10L),3L,3L},{0x8E5BD4BEL,(-10L),(-10L),0x8E5BD4BEL,3L,0xB84C734EL},{6L,(-10L),3L,6L,3L,(-10L)}}};
                uint32_t l_1504 = 0x175A1D91L;
                int16_t *l_1505 = &l_1409.f5;
                union U2 ***l_1509 = &l_1066;
                union U2 *** const *l_1508 = &l_1509;
                union U2 *** const **l_1507 = &l_1508;
                int64_t * const *l_1542 = &g_595[1][0][1];
                int64_t * const **l_1541 = &l_1542;
                int32_t l_1546[3][6] = {{0x21773348L,(-10L),(-10L),0x21773348L,(-10L),(-10L)},{0x21773348L,(-10L),(-10L),0x21773348L,(-10L),(-10L)},{0x21773348L,(-10L),(-10L),0x21773348L,(-10L),(-10L)}};
                struct S0 *l_1548 = &l_1409;
                int8_t l_1564 = (-10L);
                int i, j, k;
                for (g_116 = 0; (g_116 >= 0); g_116 -= 1)
                { 
                    union U2 l_1473 = {0UL};
                    const union U2 ****l_1477 = &l_1474;
                    const union U2 ***l_1479 = &l_1475;
                    const union U2 ****l_1478[4] = {&l_1479,&l_1479,&l_1479,&l_1479};
                    int i;
                    l_1468 ^= l_887[(g_116 + 1)];
                    (*l_1425) = (*l_1425);
                    l_1486 |= (safe_mul_func_uint16_t_u_u((0x9E5C1CE6L < ((safe_lshift_func_int8_t_s_u((l_887[(g_116 + 2)] || ((*l_1109) = ((func_66((l_1473 , ((((l_1480 = ((*l_1477) = l_1474)) == &g_1063) && (safe_add_func_uint64_t_u_u(1UL, (l_887[(g_116 + 2)] , l_1483[1][0][3])))) & g_735.f5))) , l_1484) != l_1484))), 4)) >= g_1485)), 65535UL));
                    if ((**g_530))
                        continue;
                }
                (*l_827) = (safe_lshift_func_int8_t_s_u(((void*)0 != &g_351[1]), 5));
                if (((((***l_1480) , l_1464) > (safe_div_func_int64_t_s_s(l_1467, (safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((*l_1505) = ((*l_733) = (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((*g_1226) |= l_1464), ((((*g_849) = (l_1501 ^ (safe_lshift_func_int16_t_s_u(((void*)0 == &g_1064), l_1409.f5)))) , (*l_827)) > (*l_827)))), l_1504)))), 7)) == (**g_161)), g_833.f1)), (*l_827)))))) & l_1501))
                { 
                    uint32_t *l_1512 = &g_714;
                    uint16_t *l_1539[2][1][7];
                    int64_t * const ***l_1543 = &l_1541;
                    int32_t *l_1547 = &l_887[3];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 7; k++)
                                l_1539[i][j][k] = (void*)0;
                        }
                    }
                    l_1507 = l_1506;
                    (*l_1547) &= (safe_sub_func_uint32_t_u_u((++(*l_1512)), (safe_mul_func_uint16_t_u_u(g_653, (safe_lshift_func_int8_t_s_u((((safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(65535UL, ((++g_1034[0]) == g_710[1].f1))), ((((safe_sub_func_int32_t_s_s((((safe_unary_minus_func_uint32_t_u((l_1528 & (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(l_1409.f1, ((func_66((&g_594 != ((*l_1543) = ((safe_mul_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((l_1540 ^= ((l_1486 != 0x6DL) >= l_1464)), 11)), 0x9DBB1374729F26D8LL)) && 0xE826L) | l_1483[3][1][1]), 8UL)) , l_1541)))) , (*g_139)) , 0x5DL))) > g_236.f1), (-1L)))))) <= l_1544) , l_1528), g_1545[0])) , l_1546[2][5]) > l_1546[2][5]) | g_230.f0))) , &l_1092) == (void*)0), (*l_827)))))));
                    l_1549 = l_1548;
                }
                else
                { 
                    int8_t l_1566[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1566[i] = 0xF1L;
                    (*g_1226) = (safe_add_func_uint16_t_u_u(0UL, ((((l_1567 = func_51(&g_57, l_1552, ((safe_rshift_func_uint16_t_u_s(l_1409.f2, (safe_rshift_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((((safe_add_func_uint64_t_u_u(l_1563, ((((g_883 = &g_378) != (void*)0) , &g_1063) == &g_1063))) ^ 0xEBE162554B98AD3FLL) , 1UL) & l_1409.f6) || l_1564), 18446744073709551615UL)), 255UL)) <= (*g_849)) , (**g_530)) && l_1565), 10)))) && l_1566[1]), l_1528)) , &l_9) != (void*)0) < g_929.f1)));
                    (*l_1549) = l_845[5];
                    (*g_530) = (**g_529);
                }
                (*g_1226) = ((*g_1064) , (*g_531));
            }
            for (g_118 = 0; (g_118 <= (-28)); g_118 = safe_sub_func_uint16_t_u_u(g_118, 9))
            { 
                int8_t l_1574 = 0x86L;
                int32_t l_1575 = 0x65BFF065L;
                const union U2 ** const ** const l_1592 = (void*)0;
                const union U2 ** const ** const *l_1591 = &l_1592;
                uint64_t l_1596 = 0x5FA01E40778BE501LL;
                int8_t *l_1612 = &g_236.f6;
                if ((***g_529))
                    break;
                for (g_714 = (-23); (g_714 < 23); g_714 = safe_add_func_uint32_t_u_u(g_714, 9))
                { 
                    int32_t *l_1572 = (void*)0;
                    int32_t *l_1573[6][4];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1573[i][j] = (void*)0;
                    }
                    l_1576--;
                    (*g_1226) = (*g_1226);
                    l_1565 &= ((safe_mod_func_int32_t_s_s((-2L), (safe_add_func_int8_t_s_s((l_1486 &= ((((((safe_div_func_int8_t_s_s((*l_827), 255UL)) < 18446744073709551615UL) == ((((*g_1226) = ((l_1585 > (g_1586[2] != (g_1593[4] = l_1591))) != l_1464)) , l_1596) > (*l_827))) ^ l_1464) <= g_10) & l_1574)), (*g_849))))) < 0x577CL);
                    (*g_1226) ^= ((*l_827) = 1L);
                }
                (*g_1226) = (safe_rshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((!(!((l_1603[0][0] , (((((((safe_rshift_func_int8_t_s_s((l_1409.f0 || (((*g_944) = (*g_944)) != (void*)0)), (((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_1528, (safe_sub_func_uint8_t_u_u(0xC1L, ((*l_1612) &= (*g_849)))))), l_1528)) < 0x41EE9D0DL) < (*g_849)))) || l_1613) , l_1464) , (*l_827)) <= 0xCBL) != l_1613) , (*l_827))) ^ 0x94060CB2L))), l_1467)), l_1501));
                return l_1575;
            }
            for (g_140.f3 = (-28); (g_140.f3 <= 14); g_140.f3 = safe_add_func_uint16_t_u_u(g_140.f3, 1))
            { 
                uint8_t *****l_1622[2];
                int32_t ***l_1626 = &g_945[0];
                int i;
                for (i = 0; i < 2; i++)
                    l_1622[i] = &g_365;
                l_1340 = l_845[3];
                (*g_1226) |= (safe_unary_minus_func_uint32_t_u(((((*l_1067) , (+(safe_add_func_int64_t_s_s((safe_div_func_int32_t_s_s((l_1622[0] != ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(l_1486)), (-1L))) , l_1018)), 0xB82D5726L)), (&g_945[0] == l_1626))))) > g_1034[0]) , 4294967294UL)));
                (*g_530) = (**g_529);
                for (l_1409.f5 = 19; (l_1409.f5 < 0); l_1409.f5 = safe_sub_func_uint64_t_u_u(l_1409.f5, 1))
                { 
                    return g_73[2];
                }
            }
            (*l_1630) = ((*g_832) , ((*l_872) , (*g_1063)));
        }
    }
    for (l_1020 = 0; (l_1020 <= 0); l_1020 += 1)
    { 
        int32_t l_1631 = 0xC0FF283FL;
        return l_1631;
    }
    for (g_929.f3 = 0; (g_929.f3 <= 2); g_929.f3 += 1)
    { 
        int32_t *l_1632 = (void*)0;
        int32_t *l_1633 = &l_852;
        int32_t *l_1634 = &g_713;
        int32_t l_1635 = 0x9C2CC6ECL;
        uint64_t l_1636 = 1UL;
        uint8_t ***l_1641[5][6][1] = {{{&g_367},{&g_367},{&g_367},{&g_367},{&g_367},{&g_367}},{{&g_367},{&g_367},{(void*)0},{&g_367},{&g_367},{&g_367}},{{&g_367},{&g_367},{&g_367},{&g_367},{&g_367},{&g_367}},{{&g_367},{&g_367},{&g_367},{&g_367},{(void*)0},{&g_367}},{{&g_367},{&g_367},{&g_367},{&g_367},{&g_367},{&g_367}}};
        int i, j, k;
        if (g_310[g_929.f3])
            break;
        --l_1636;
        if ((*l_827))
            continue;
        (*g_1226) = (((***g_529) != (((*l_733) = ((void*)0 == l_1641[2][3][0])) != (&g_378 != &g_378))) >= (((!1L) > ((65535UL < (*l_827)) | 0xEC9DL)) > 3UL));
    }
    return g_833.f0;
}



static int32_t  func_2(union U5  p_3, uint16_t  p_4, struct S0  p_5)
{ 
    uint64_t *l_739[7][6] = {{&g_336.f0,&g_336.f0,&g_101,&g_300,(void*)0,&g_598},{&g_598,&g_300,&g_336.f0,&g_300,&g_300,&g_336.f0},{&g_336.f0,&g_336.f0,&g_598,&g_336.f0,&g_101,(void*)0},{(void*)0,&g_336.f0,&g_336.f0,&g_300,&g_336.f0,&g_598},{&g_336.f0,(void*)0,&g_336.f0,&g_598,&g_336.f0,(void*)0},{(void*)0,&g_598,&g_598,&g_101,&g_598,&g_336.f0},{&g_101,&g_598,&g_336.f0,&g_336.f0,(void*)0,&g_598}};
    int32_t l_740 = 0L;
    int32_t l_741 = (-2L);
    int32_t l_742 = (-1L);
    uint8_t l_743 = 0xA3L;
    int64_t l_750[4][1][6] = {{{1L,0x5057E2BCC1AD29EELL,0x2CFD0A33601DB38DLL,7L,5L,1L}},{{0xF5828B368CA5685CLL,7L,(-10L),(-10L),7L,1L}},{{5L,(-10L),1L,7L,1L,0xF5828B368CA5685CLL}},{{0xF5828B368CA5685CLL,0x6D03424688744FB4LL,7L,0x6D03424688744FB4LL,0xF5828B368CA5685CLL,(-10L)}}};
    uint8_t *l_757 = &g_73[3];
    union U3 l_762 = {0L};
    int32_t *l_764 = &l_741;
    const union U2 *l_772 = &g_336;
    int32_t l_778 = 0x9CEC7F6DL;
    int32_t *l_803[2][1][7] = {{{&g_13,&l_740,&g_13,&g_13,&l_740,&g_13,&g_13}},{{&l_740,&l_740,&g_713,&l_740,&l_740,&g_713,&l_740}}};
    int i, j, k;
lbl_811:
    (*l_764) &= (~((l_743++) ^ (((((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(l_750[2][0][5], ((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((*g_531), (safe_div_func_uint16_t_u_u((((*l_757)--) <= (((l_740 ^= (safe_mod_func_uint16_t_u_u(0UL, p_5.f6))) , l_762) , l_750[0][0][3])), (+p_5.f2))))), l_750[1][0][1])) & 0xAB2E2FA5L))), 4)) | (***g_529)) , 0x266AA91EACD9F30CLL) && p_5.f4) <= 0x0661AF3EL)));
    for (g_735.f0 = 0; (g_735.f0 != 0); g_735.f0 = safe_add_func_uint16_t_u_u(g_735.f0, 9))
    { 
        const uint8_t l_774 = 0xA0L;
        int32_t l_780[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint8_t l_794 = 0xEEL;
        union U2 *l_801 = &g_336;
        union U2 * const *l_800[4][1][7] = {{{&l_801,&l_801,&l_801,&l_801,&l_801,&l_801,&l_801}},{{&l_801,&l_801,&l_801,&l_801,&l_801,&l_801,&l_801}},{{&l_801,&l_801,&l_801,&l_801,&l_801,&l_801,&l_801}},{{&l_801,&l_801,&l_801,&l_801,&l_801,&l_801,&l_801}}};
        int i, j, k;
        for (p_3.f3 = 0; (p_3.f3 <= 0); p_3.f3 += 1)
        { 
            uint32_t l_770 = 0xABA56D9DL;
            int32_t l_785 = 0xFB3C2A42L;
            int32_t l_787 = 0xE8B6CB27L;
            int8_t l_788 = 0xF9L;
            int32_t l_789 = 0x377F377FL;
            int32_t l_806 = 1L;
            int32_t l_807 = 0xCD305ED1L;
            union U1 l_812 = {0};
            for (p_5.f1 = 0; (p_5.f1 <= 0); p_5.f1 += 1)
            { 
                uint32_t l_769 = 0UL;
                int32_t l_786[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_786[i] = 1L;
                for (g_336.f0 = 0; (g_336.f0 <= 0); g_336.f0 += 1)
                { 
                    int32_t *l_771 = &g_108;
                    const union U2 **l_773 = &l_772;
                    (*l_771) = ((*l_764) ^= (safe_add_func_uint32_t_u_u(((g_734 || 0x75BCL) || l_769), l_770)));
                    (*l_773) = l_772;
                }
                if (l_774)
                    break;
                if (((*l_764) ^= (safe_lshift_func_uint16_t_u_s((p_5.f2 && l_770), 9))))
                { 
                    int32_t *l_777 = (void*)0;
                    int32_t *l_779 = &l_742;
                    int32_t *l_781 = &g_108;
                    int32_t *l_782 = &g_13;
                    int32_t *l_783 = &g_108;
                    int32_t *l_784[2][4][5] = {{{&l_741,&l_740,&g_713,&l_741,&g_713},{(void*)0,(void*)0,&l_742,&g_13,&l_742},{&l_780[1],&l_780[4],&g_713,&g_713,&l_780[4]},{&l_742,(void*)0,(void*)0,&l_742,&l_780[4]}},{{&l_778,&l_780[4],&l_740,&l_780[4],&l_778},{(void*)0,(void*)0,(void*)0,&l_780[4],(void*)0},{&l_778,&l_740,&l_740,&l_778,&g_713},{&l_742,&g_13,&l_742,(void*)0,(void*)0}}};
                    int i, j, k;
                    g_791--;
                    if (l_794)
                        break;
                }
                else
                { 
                    union U4 **l_795 = &g_465;
                    int32_t *l_802 = &l_742;
                    int i, j, k;
                    (*l_795) = &g_710[3];
                    (*l_802) &= (((*l_764) ^= ((safe_div_func_int16_t_s_s(((-6L) <= 0x2815L), (safe_mul_func_uint16_t_u_u(0x341EL, ((void*)0 != l_800[0][0][2]))))) == (p_5.f5 > ((**g_161) != p_4)))) | p_5.f5);
                }
                for (p_5.f6 = 0; (p_5.f6 >= 0); p_5.f6 -= 1)
                { 
                    return (**g_530);
                }
            }
            l_803[1][0][3] = &l_740;
            for (g_572 = 0; (g_572 <= 4); g_572 += 1)
            { 
                int32_t l_804 = 0xC01502C2L;
                int32_t l_805[5] = {0xD580F7F7L,0xD580F7F7L,0xD580F7F7L,0xD580F7F7L,0xD580F7F7L};
                int i;
                g_808++;
            }
            for (g_808 = 0; (g_808 <= 0); g_808 += 1)
            { 
                int32_t l_815 = 0xCFFAD9B1L;
                uint32_t *l_820 = (void*)0;
                uint32_t *l_821 = (void*)0;
                uint32_t *l_822 = &g_714;
                int16_t l_823 = 0x9A16L;
                if (g_734)
                    goto lbl_811;
                l_823 &= ((l_812 , (*l_764)) != ((-6L) == ((p_5 , (safe_mul_func_int8_t_s_s(l_815, ((safe_mul_func_uint8_t_u_u((&l_774 != (((*l_822) ^= (safe_add_func_int16_t_s_s((-6L), 65535UL))) , (void*)0)), p_5.f4)) & g_236.f4)))) | 0xDAL)));
                g_824--;
            }
        }
    }
    return (*g_531);
}



static union U5  func_6(uint16_t  p_7, uint32_t  p_8)
{ 
    int32_t *l_11 = (void*)0;
    int32_t *l_12 = &g_13;
    int32_t *l_14 = &g_13;
    int32_t l_15 = (-1L);
    int32_t *l_16 = &g_13;
    int32_t *l_17 = &g_13;
    int32_t *l_18 = (void*)0;
    int32_t *l_19 = &l_15;
    int32_t *l_20 = (void*)0;
    int32_t *l_21 = &l_15;
    int32_t *l_22 = &g_13;
    int32_t *l_23 = &l_15;
    int32_t *l_24 = &l_15;
    int8_t *l_37 = (void*)0;
    int8_t *l_38[4][5];
    union U2 l_47 = {0x35CF455DBFE6B87CLL};
    union U3 l_48 = {-9L};
    union U3 *l_49 = &l_48;
    union U1 l_50 = {0};
    int64_t *l_631 = &g_118;
    int32_t l_632 = 2L;
    int64_t *l_633 = &g_624;
    union U5 l_717[3] = {{-1L},{-1L},{-1L}};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_38[i][j] = &g_39;
    }
    --g_25;
    g_713 &= (((p_8 || func_28(((*l_633) = (((p_7 = (safe_div_func_uint8_t_u_u(((*l_12) = ((*l_14) < (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((*l_24) = (-2L)) & g_10), ((((*l_631) = (((((g_39 <= ((safe_rshift_func_int16_t_s_u(g_13, (func_42(((*l_49) = ((l_47 , 1L) , l_48)), &g_13, l_21, l_50) <= 0xABC3AD13L))) == p_8)) <= g_236.f1) | p_7) > g_99.f0) > p_8)) < p_7) , g_297[0]))), p_7)))), l_632))) == g_297[1]) && (***g_529))), &g_39)) , (**g_529)) == l_23);
    return l_717[0];
}



static int16_t  func_28(int64_t  p_29, int8_t * p_30)
{ 
    uint32_t l_634 = 0x8EF12239L;
    int32_t l_647 = 8L;
    int32_t l_652[2][1][5];
    union U2 * const l_659 = (void*)0;
    const uint64_t *l_683 = &g_300;
    int32_t *l_695 = &g_108;
    struct S0 l_700 = {4294967295UL,0xB96F0554L,4UL,7L,2L,0xA8E5L,1L};
    union U2 l_704 = {0xB40FC719C6E35677LL};
    const union U4 * const l_708[6][4] = {{&g_99,&g_466[2],&g_466[2],&g_99},{&g_466[2],&g_466[2],&g_466[0],&g_466[2]},{&g_466[2],&g_466[2],&g_466[0],&g_466[0]},{&g_466[2],&g_466[2],&g_466[2],&g_466[0]},{&g_99,&g_466[2],&g_99,&g_466[2]},{&g_99,&g_466[2],&g_466[2],&g_99}};
    int32_t *l_711 = &l_647;
    int32_t *l_712[4][5][7] = {{{(void*)0,(void*)0,&l_652[0][0][4],&l_647,(void*)0,&l_652[1][0][4],(void*)0},{(void*)0,&l_652[1][0][0],&g_108,&l_647,&g_108,&l_652[1][0][1],&g_108},{(void*)0,&l_647,&l_652[0][0][4],&l_652[1][0][4],&g_13,&g_108,&g_13},{&l_652[1][0][0],&g_108,&g_108,&l_652[1][0][0],&l_652[1][0][1],(void*)0,&l_647},{&g_108,(void*)0,(void*)0,(void*)0,(void*)0,&l_652[0][0][2],&l_652[1][0][4]}},{{&l_652[0][0][4],(void*)0,&l_647,&g_108,&l_647,&l_647,&l_647},{&l_652[0][0][2],&l_652[1][0][4],&g_108,&g_13,(void*)0,(void*)0,&g_13},{&l_652[0][0][4],&l_652[1][0][0],&l_652[0][0][4],&l_652[1][0][1],(void*)0,&g_13,&g_108},{&l_647,&l_652[0][0][2],&g_108,(void*)0,&l_652[1][0][4],(void*)0,(void*)0},{&l_652[0][0][4],&g_13,&g_13,&g_13,&l_652[0][0][4],&l_652[1][0][2],&l_652[0][0][4]}},{{(void*)0,&l_652[0][0][2],&l_652[0][0][4],&l_652[1][0][4],(void*)0,&l_652[1][0][4],&l_652[0][0][4]},{&g_13,&g_13,&l_652[1][0][0],&g_108,&l_652[1][0][1],&g_108,&l_647},{&l_652[1][0][4],&l_652[0][0][4],&g_108,&l_652[1][0][4],&g_108,&g_108,(void*)0},{&l_652[0][0][4],&l_652[1][0][1],&g_108,&l_652[0][0][4],&l_652[1][0][1],&l_652[0][0][4],&l_647},{(void*)0,&g_108,&l_647,(void*)0,(void*)0,&l_647,&g_108}},{{&l_647,&l_647,&l_652[0][0][4],&l_652[1][0][1],&l_652[0][0][4],&g_108,&l_652[1][0][1]},{(void*)0,(void*)0,&g_108,&g_108,&l_652[1][0][4],&g_108,&l_652[0][0][4]},{&g_108,&l_647,&g_108,&l_652[1][0][1],&g_108,&l_652[1][0][0],&g_13},{&l_652[0][0][2],&l_652[0][0][4],&l_652[1][0][4],(void*)0,&l_652[1][0][4],&l_652[0][0][4],&l_652[0][0][2]},{&l_652[0][0][4],&l_652[0][0][4],&l_652[1][0][2],&l_652[0][0][4],&g_13,&g_13,&g_13}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_652[i][j][k] = 0xD568DCC7L;
        }
    }
    for (g_86 = 0; (g_86 <= 3); g_86 += 1)
    { 
        uint64_t l_650 = 8UL;
        uint64_t **l_692 = (void*)0;
        if (l_634)
            break;
        for (g_572 = 0; (g_572 <= 3); g_572 += 1)
        { 
            union U5 **l_635 = (void*)0;
            union U5 **l_636 = &g_139;
            int32_t l_660 = 1L;
            const uint64_t *l_684 = &g_300;
            uint32_t *l_685 = &g_236.f0;
            uint64_t *l_689[5][1];
            uint64_t **l_688[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_689[1][0],&l_689[1][0],&l_689[1][0],&l_689[1][0],&l_689[1][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_689[1][0],&l_689[1][0],&l_689[1][0],&l_689[1][0],&l_689[1][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_689[1][0],&l_689[1][0],&l_689[1][0],&l_689[1][0],&l_689[1][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint64_t ***l_690 = &g_351[1];
            uint64_t ***l_691[4];
            int32_t *l_693 = (void*)0;
            int32_t *l_694 = &g_108;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_689[i][j] = &g_300;
            }
            for (i = 0; i < 4; i++)
                l_691[i] = &g_351[2];
            (*l_636) = &g_140;
        }
    }
    (*l_695) = l_634;
    for (g_178 = 0; (g_178 <= 39); g_178 = safe_add_func_uint8_t_u_u(g_178, 5))
    { 
        union U2 *l_698 = &g_336;
        union U2 **l_699 = &l_698;
        struct S0 l_707 = {0x46863FD9L,0x401AC011L,0xD315408EL,0xF8CBL,0xDB35F985DE2BA329LL,0L,0xE6L};
        (*l_699) = l_698;
        if (p_29)
            continue;
        for (g_236.f3 = 0; (g_236.f3 <= 3); g_236.f3 += 1)
        { 
            struct S0 *l_701 = &l_700;
            const union U4 *l_709 = &g_710[1];
            (*l_701) = l_700;
            for (l_634 = 0; (l_634 <= 0); l_634 += 1)
            { 
                uint16_t l_705 = 0x8239L;
                int32_t *l_706 = &l_647;
                (*l_701) = ((safe_mod_func_int32_t_s_s((*l_695), ((*l_706) |= ((*l_695) , (l_704 , l_705))))) , l_707);
                l_709 = l_708[0][0];
            }
        }
    }
    (*l_695) ^= 1L;
    g_714++;
    return (*l_695);
}



static int32_t  func_42(union U3  p_43, int32_t * p_44, int32_t * p_45, union U1  p_46)
{ 
    union U1 l_58 = {0};
    union U5 l_110 = {-1L};
    int64_t *l_115 = &g_116;
    int64_t *l_117 = &g_118;
    int32_t l_119 = 0xED5A8D4EL;
    const int8_t l_120 = 0xB9L;
    int16_t *l_121[5];
    int32_t l_122 = 0xC28C6498L;
    int32_t *l_130 = &l_122;
    union U5 *l_147 = &l_110;
    uint64_t *l_152 = &g_101;
    uint64_t **l_151[1];
    struct S0 l_156 = {0xCEA194CDL,4294967295UL,0UL,0L,-3L,0x8EB2L,0x20L};
    int32_t l_168 = (-5L);
    union U3 l_233 = {2L};
    union U2 l_294 = {0x47B7046C61679470LL};
    struct S0 *l_318 = &l_156;
    struct S0 **l_317[6] = {&l_318,&l_318,&l_318,&l_318,&l_318,&l_318};
    union U3 ** const l_338 = (void*)0;
    const int8_t l_413 = (-4L);
    int8_t *l_431 = &g_236.f6;
    uint32_t l_445[4][5][4] = {{{0x452CE8F8L,18446744073709551610UL,3UL,3UL},{18446744073709551610UL,18446744073709551610UL,0x4A687B62L,0x1AAF17BEL},{18446744073709551610UL,0x452CE8F8L,3UL,0x1AAF17BEL},{0x452CE8F8L,18446744073709551610UL,3UL,3UL},{18446744073709551610UL,18446744073709551610UL,0x4A687B62L,0x1AAF17BEL}},{{18446744073709551610UL,0x452CE8F8L,3UL,0x1AAF17BEL},{0x452CE8F8L,18446744073709551610UL,3UL,3UL},{18446744073709551610UL,18446744073709551610UL,0x4A687B62L,0x1AAF17BEL},{18446744073709551610UL,0x452CE8F8L,3UL,0x1AAF17BEL},{0x452CE8F8L,18446744073709551610UL,3UL,3UL}},{{18446744073709551610UL,18446744073709551610UL,0x4A687B62L,0x1AAF17BEL},{18446744073709551610UL,0x452CE8F8L,3UL,0x1AAF17BEL},{0x452CE8F8L,18446744073709551610UL,3UL,3UL},{18446744073709551610UL,18446744073709551610UL,0x4A687B62L,0x1AAF17BEL},{18446744073709551610UL,0x452CE8F8L,3UL,0x1AAF17BEL}},{{0x452CE8F8L,18446744073709551610UL,3UL,3UL},{18446744073709551610UL,18446744073709551610UL,0x4A687B62L,0x1AAF17BEL},{0x452CE8F8L,0xAB4B80B1L,0x4A687B62L,3UL},{0xAB4B80B1L,0x452CE8F8L,0x4A687B62L,0x4A687B62L},{0x452CE8F8L,0x452CE8F8L,0x1AAF17BEL,3UL}}};
    union U4 *l_463 = &g_99;
    const uint8_t * const *l_493 = &g_162;
    int64_t l_520 = 2L;
    int8_t l_588 = 0xBEL;
    uint16_t l_596 = 0x23E4L;
    int64_t ***l_626[5];
    union U1 *l_630 = (void*)0;
    union U1 **l_629 = &l_630;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_121[i] = &g_81;
    for (i = 0; i < 1; i++)
        l_151[i] = &l_152;
    for (i = 0; i < 5; i++)
        l_626[i] = &g_594;
    if ((func_51(g_56[0], l_58, (l_122 = ((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(func_63(func_66(p_43.f0), l_110), ((safe_sub_func_uint16_t_u_u((((l_119 = (safe_sub_func_int64_t_s_s(((*l_117) ^= ((*l_115) = l_110.f0)), l_110.f0))) <= g_57.f0) == g_25), 0xB3FDL)) ^ l_110.f0))), l_120)) , g_99.f1)), p_43.f0) , l_122))
    { 
lbl_341:
        l_130 = &g_108;
    }
    else
    { 
        uint64_t *l_135 = (void*)0;
        uint64_t *l_137 = &g_101;
        uint64_t **l_136 = &l_137;
        int32_t l_138 = 1L;
        int64_t **l_159 = &l_117;
        int16_t l_225[2][3] = {{0x1845L,0L,0L},{0x1845L,0L,0L}};
        union U3 *l_231 = &g_230;
        uint8_t *l_238[5];
        union U5 **l_251 = (void*)0;
        uint8_t * const l_260 = &g_73[3];
        int16_t l_299[4] = {2L,2L,2L,2L};
        int32_t *l_322 = &l_168;
        uint32_t l_329 = 0x98E07820L;
        int32_t l_408[7][2][1];
        struct S0 l_416[7] = {{1UL,4294967295UL,18446744073709551610UL,1L,0x6700F83C97DC5043LL,0xA224L,5L},{1UL,4294967295UL,18446744073709551610UL,1L,0x6700F83C97DC5043LL,0xA224L,5L},{1UL,4294967295UL,18446744073709551610UL,1L,0x6700F83C97DC5043LL,0xA224L,5L},{1UL,4294967295UL,18446744073709551610UL,1L,0x6700F83C97DC5043LL,0xA224L,5L},{1UL,4294967295UL,18446744073709551610UL,1L,0x6700F83C97DC5043LL,0xA224L,5L},{1UL,4294967295UL,18446744073709551610UL,1L,0x6700F83C97DC5043LL,0xA224L,5L},{1UL,4294967295UL,18446744073709551610UL,1L,0x6700F83C97DC5043LL,0xA224L,5L}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_238[i] = &g_105;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_408[i][j][k] = (-1L);
            }
        }
        if ((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((p_43.f0 , g_73[3]), (((l_135 == ((*l_136) = &g_101)) , ((void*)0 == p_44)) > (l_138 = (*l_130))))) != (*l_130)), 1UL)))
        { 
            uint8_t l_144 = 0xDBL;
            union U5 *l_145 = &g_140;
            int32_t l_150 = 0xFF34EAFFL;
            int32_t *l_191 = &l_138;
            g_139 = g_139;
            if ((*l_130))
            { 
lbl_192:
                (*l_130) ^= (&g_140 != (((safe_div_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(l_138)), l_144)) >= g_81) , l_145));
            }
            else
            { 
                union U5 **l_146 = &l_145;
                union U5 **l_148 = &l_147;
                int32_t l_149 = (-7L);
                int64_t ***l_160 = &l_159;
                const uint8_t * const **l_163 = &g_161;
                struct S0 *l_181 = &l_156;
                if ((l_150 &= ((p_43.f0 , (((((*l_146) = (void*)0) == ((*l_148) = l_147)) ^ (p_43.f0 < 0x7495L)) || l_149)) & (-2L))))
                { 
                    uint64_t ***l_153 = &l_151[0];
                    uint64_t ***l_154 = &l_136;
                    int32_t *l_155 = &l_138;
                    (*l_154) = ((*l_153) = l_151[0]);
                    (*l_155) |= ((*l_130) = 4L);
                    (*l_130) &= ((*l_155) |= (*p_44));
                    return (*p_44);
                }
                else
                { 
                    struct S0 *l_157 = (void*)0;
                    struct S0 *l_158 = &l_156;
                    (*l_158) = l_156;
                    l_149 = l_149;
                }
                (*l_160) = l_159;
                (*l_163) = g_161;
                for (g_140.f1 = 0; (g_140.f1 == 28); g_140.f1 = safe_add_func_uint8_t_u_u(g_140.f1, 1))
                { 
                    union U5 l_172 = {0xC4787692L};
                    int32_t *l_173[5][7][6] = {{{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149}},{{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149}},{{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149}},{{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&g_13,&g_13,&l_149,&g_13,&g_13,&l_149},{&l_138,&l_138,&g_13,&l_138,&l_138,&g_13}},{{&l_138,&l_138,&g_13,&l_138,&l_138,&g_13},{&l_138,&l_138,&g_13,&l_138,&l_138,&g_13},{&l_138,&l_138,&g_13,&l_138,&l_138,&g_13},{&l_138,&l_138,&g_13,&l_138,&l_138,&g_13},{&l_138,&l_138,&g_13,&l_138,&l_138,&g_13},{&l_138,&l_138,&g_13,&l_138,&l_138,&g_13},{&l_138,&l_138,&g_13,&l_138,&l_138,&g_13}}};
                    int32_t l_177 = (-10L);
                    struct S0 **l_182 = &l_181;
                    int i, j, k;
                    g_108 = (((0x8DCBL > (safe_sub_func_int8_t_s_s(((0x9DL || l_168) , 0L), (safe_rshift_func_int16_t_s_u((g_81 |= ((!0x6A24D725L) <= g_118)), ((l_172 , (void*)0) == (void*)0)))))) || g_140.f1) || g_13);
                    if (l_149)
                        break;
                    ++g_174;
                    --g_178;
                    (*l_182) = l_181;
                }
            }
            (*l_130) = (&g_139 != &g_139);
            (*l_191) &= (l_144 <= ((g_10 , (((!(safe_div_func_int32_t_s_s(((*l_130) ^= (safe_mod_func_uint16_t_u_u((p_43.f0 && (((2UL != (safe_sub_func_int64_t_s_s(g_99.f1, g_25))) < (g_190 > (-5L))) == (*g_162))), g_39))), g_178))) >= l_144) > (-1L))) , (*l_130)));
            if (l_156.f3)
                goto lbl_192;
        }
        else
        { 
            int32_t *l_193 = &g_108;
            int32_t *l_194 = &l_138;
            int32_t *l_195 = &l_138;
            int32_t *l_196[3];
            uint8_t * const l_237[1] = {(void*)0};
            struct S0 *l_316 = &g_236;
            struct S0 **l_315 = &l_316;
            int i;
            for (i = 0; i < 3; i++)
                l_196[i] = &l_122;
            g_197--;
            if (((p_43.f0 < (*l_193)) == ((safe_rshift_func_int16_t_s_s((1L | (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((((*l_159) == &g_116) | (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(p_43.f0, 2)), (safe_div_func_int32_t_s_s(((~((*l_130) = (safe_mod_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((((safe_add_func_int64_t_s_s(g_81, p_43.f0)) < g_81) != 5UL), p_43.f0)), l_138)), (*l_130))))) >= p_43.f0), p_43.f0)))), 4)), p_43.f0))), p_43.f0)), 6))), l_225[1][2])) >= l_225[1][2])))
            { 
                union U3 *l_229 = &g_230;
                union U3 **l_228 = &l_229;
                union U5 * const l_232 = &l_110;
                union U5 **l_234 = &g_139;
                union U5 **l_235 = &l_147;
                uint8_t *l_240 = &g_73[3];
                uint8_t **l_239 = &l_240;
                int32_t l_254 = 0x1F1ADF2DL;
                uint16_t *l_255 = (void*)0;
                uint16_t *l_256 = &g_197;
                uint8_t l_257 = 0x8FL;
                uint16_t *l_258 = &g_259;
                uint8_t l_307 = 249UL;
                (*l_193) = ((safe_mod_func_int8_t_s_s((((*l_228) = &p_43) != (p_43 , l_231)), ((l_232 != ((*l_235) = (l_233 , ((*l_234) = &g_140)))) && ((g_236 , l_237[0]) == (void*)0)))) ^ 0xEAL);
                (*l_194) = 0x2AE489F4L;
                (*l_130) |= (((((*l_258) = ((l_238[0] == ((*l_239) = l_238[4])) > (safe_add_func_int8_t_s_s(((((*l_256) ^= ((((safe_lshift_func_uint16_t_u_u((p_43.f0 && ((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_u((((void*)0 != l_251) == g_236.f6), (safe_lshift_func_uint8_t_u_u(((*l_193) = (l_254 = 0xC0L)), (**g_161))))) > l_225[1][2]) < g_236.f6), (*g_162))) > (**g_161))), 6)) && 0x87L) , g_140.f0) <= 7L)) && 0xE960L) , l_257), (-5L))))) == g_10) , l_260) != (*g_161));
                if (((safe_sub_func_int32_t_s_s(((0UL > (safe_mod_func_int64_t_s_s((*l_130), (safe_mod_func_uint32_t_u_u((l_121[0] != l_256), (safe_mul_func_int8_t_s_s((*l_194), p_43.f0))))))) >= p_43.f0), 0xF62936ADL)) < g_174))
                { 
                    int32_t *l_273 = (void*)0;
                    int32_t **l_274 = (void*)0;
                    int32_t **l_275 = (void*)0;
                    int32_t **l_276 = &l_196[2];
                    int8_t *l_295 = (void*)0;
                    int8_t *l_296 = &g_236.f6;
                    uint32_t *l_298[1][5];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_298[i][j] = &g_25;
                    }
                    (*l_130) = ((g_300 = ((((((safe_sub_func_int32_t_s_s((((((*l_130) ^ (safe_sub_func_int8_t_s_s((((*l_276) = l_273) != (((*l_193) &= (safe_mod_func_int8_t_s_s((((**l_239) = 0xD5L) && (l_138 = (safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(((((((g_25 = (safe_rshift_func_int8_t_s_u(l_257, (safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((((safe_sub_func_int8_t_s_s((((!(+((((l_294 , (((p_43.f0 ^ ((*l_296) |= (g_190 > (*l_195)))) | (*l_130)) && g_297[0])) , 5L) >= p_43.f0) <= (*l_195)))) >= 0x8AAE3D87L) , g_236.f5), 0xDFL)) == l_138) >= (*l_195)), g_140.f3)), p_43.f0))))) , p_43.f0) || (-1L)) >= p_43.f0) | g_236.f0) | (*l_195)), (*g_162))) == l_299[3]) | (*l_195)), 5)))))), 0x14L))) , &g_13)), (*g_162)))) ^ p_43.f0) & 0UL) <= 0UL), l_254)) != 1UL) < 0x973EFB746B9F5D82LL) != p_43.f0) != g_197) | 0xB4L)) , l_257);
                }
                else
                { 
                    int32_t l_308 = 0x92DA7043L;
                    l_308 = ((((p_43.f0 , &g_140) != &g_140) ^ ((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_256) |= p_43.f0), (safe_lshift_func_int8_t_s_s((((0xCD05L >= ((*l_195) <= 0x5FL)) && (*l_195)) <= p_43.f0), l_307)))), g_300)) | p_43.f0)) ^ p_43.f0);
                    (*l_194) |= g_39;
                }
            }
            else
            { 
                uint32_t l_309 = 0x75E5BE36L;
                int32_t *l_323 = &l_122;
                if (l_309)
                { 
                    uint16_t *l_319 = (void*)0;
                    uint16_t *l_320 = &g_197;
                    g_310[1]++;
                    g_108 &= ((((*l_320) = ((safe_mul_func_uint16_t_u_u(((g_99 , (((l_315 == l_317[2]) != g_236.f1) != 0UL)) , g_236.f2), g_73[3])) != p_43.f0)) >= 0UL) , g_174);
                }
                else
                { 
                    int32_t **l_321[4][5];
                    const union U3 * const *l_337[2][1][4] = {{{&g_56[0],&g_56[0],&g_56[0],&g_56[0]}},{{&g_56[0],&g_56[0],&g_56[0],&g_56[0]}}};
                    int64_t *l_339 = (void*)0;
                    int64_t *l_340 = &g_236.f4;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_321[i][j] = &l_193;
                    }
                    l_323 = (l_322 = &g_108);
                    (*l_322) = (((*l_195) = (&g_297[3] != (void*)0)) & ((safe_rshift_func_uint8_t_u_s(0xD0L, (((**l_159) ^= (~((**l_136) = l_329))) > ((void*)0 != &p_43)))) < ((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((((((++g_300) ^ ((*l_340) = ((*l_115) ^= (((g_336 , (*l_323)) , l_337[1][0][0]) == l_338)))) , g_105) <= g_178) & g_310[1]), 0xE3A8740FL)), 6UL)) <= 8L)));
                    if (l_138)
                        goto lbl_341;
                    (*l_194) = g_310[0];
                    (*l_322) = (~((safe_lshift_func_uint8_t_u_s(((*l_322) == (safe_rshift_func_int16_t_s_s(((*g_139) , g_10), (0xF2DC7AD04161D741LL <= 0L)))), (safe_mod_func_uint64_t_u_u((0x6FE1F7ADB6671114LL < ((*l_152)--)), (*l_130))))) < (*l_323)));
                }
            }
        }
        if ((*l_322))
        { 
            int8_t *l_352 = &l_156.f6;
            uint16_t *l_355 = &g_197;
            int32_t *l_360 = (void*)0;
            int32_t *l_361 = &l_138;
            (*l_130) = (((*l_137) = (((*l_361) &= ((p_43.f0 = (((*l_355) = (((*l_352) = (&l_135 == (g_351[1] = &l_137))) ^ (safe_add_func_int16_t_s_s(g_13, (*l_130))))) && ((((*l_352) = (safe_div_func_int8_t_s_s((((g_230.f0 , (p_43.f0 < (safe_add_func_int64_t_s_s(g_57.f0, (*l_130))))) != p_43.f0) < 0xDFBDL), p_43.f0))) > (**g_161)) || (*l_322)))) > 0xD784L)) <= 0x84712A33L)) == 0x6C267DE76BAA813BLL);
        }
        else
        { 
            uint32_t l_362[4][3][5] = {{{0xB87DF7D0L,0x213E5AC4L,0x5FAE3B17L,0x09FE0713L,0UL},{0UL,0xB87DF7D0L,0x9A763955L,0x6AA7BCFCL,0x9A763955L},{0x6AA7BCFCL,0x6AA7BCFCL,0UL,0x09FE0713L,0x5FAE3B17L}},{{4294967286UL,4294967291UL,0UL,0x5743580EL,0UL},{0x0A51D1B7L,0UL,0x9A763955L,0UL,0x0A51D1B7L},{0x09FE0713L,4294967291UL,0x5FAE3B17L,0x0A51D1B7L,0x6AA7BCFCL}},{{0x09FE0713L,0x6AA7BCFCL,0UL,0x213E5AC4L,0x213E5AC4L},{0x0A51D1B7L,0xB87DF7D0L,0x0A51D1B7L,4294967291UL,0x6AA7BCFCL},{4294967286UL,0x213E5AC4L,0x6AA7BCFCL,4294967291UL,0x0A51D1B7L}},{{0x6AA7BCFCL,0UL,0x213E5AC4L,0x213E5AC4L,0UL},{0UL,4294967287UL,0x6AA7BCFCL,0x0A51D1B7L,0x5FAE3B17L},{0xB87DF7D0L,4294967287UL,0x0A51D1B7L,0UL,0x9A763955L}}};
            int32_t *l_369 = &l_168;
            uint64_t *l_399[1];
            const uint64_t *l_400 = &g_101;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_399[i] = (void*)0;
            (*l_130) = l_362[0][1][0];
            for (l_110.f1 = 0; (l_110.f1 <= 3); l_110.f1 += 1)
            { 
                uint8_t ****l_364 = (void*)0;
                uint8_t *****l_363[7] = {(void*)0,(void*)0,&l_364,(void*)0,(void*)0,&l_364,(void*)0};
                int32_t **l_368[4][4] = {{&l_322,&l_322,&l_322,&l_322},{&l_322,&l_322,&l_322,&l_322},{&l_322,&l_322,&l_322,&l_322},{&l_322,&l_322,&l_322,&l_322}};
                int i, j;
                (*l_130) |= (g_108 ^= l_299[l_110.f1]);
                if (g_73[3])
                    break;
                g_365 = (void*)0;
                l_369 = p_44;
                (*l_322) = (~g_236.f4);
            }
            for (l_168 = 0; (l_168 < (-4)); l_168--)
            { 
                const uint64_t l_383[2][5] = {{0x0BD61A3FA46E22EBLL,0xA6592A202F784C0FLL,18446744073709551615UL,0xA6592A202F784C0FLL,0x0BD61A3FA46E22EBLL},{0x0BD61A3FA46E22EBLL,0xA6592A202F784C0FLL,18446744073709551615UL,0xA6592A202F784C0FLL,0x0BD61A3FA46E22EBLL}};
                uint8_t *l_388[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_388[i] = &g_105;
                for (l_122 = 24; (l_122 > 28); l_122 = safe_add_func_int8_t_s_s(l_122, 1))
                { 
                    struct S0 l_375 = {0x218CD99AL,0x83E0FBC3L,18446744073709551615UL,0x0E90L,0x829210150271E230LL,0x2A75L,0xD0L};
                    l_375 = g_236;
                    g_108 |= l_375.f2;
                }
                for (g_230.f0 = 0; (g_230.f0 == (-5)); --g_230.f0)
                { 
                    g_378 = (void*)0;
                    if (g_300)
                        continue;
                }
                (*l_130) = (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(l_383[0][4], (~((~((*l_260) = p_43.f0)) ^ (p_43.f0 && p_43.f0))))), 5));
                for (l_156.f1 = 0; (l_156.f1 != 26); l_156.f1++)
                { 
                    return (*p_44);
                }
                (*l_130) ^= ((void*)0 == l_388[2]);
            }
            for (g_190 = (-29); (g_190 == 35); g_190++)
            { 
                const uint64_t **l_401 = &l_400;
                (*l_130) ^= (safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((((l_399[0] == ((*l_401) = l_400)) == (safe_sub_func_int64_t_s_s((p_46 , (safe_mul_func_int8_t_s_s((l_408[1][0][0] &= (safe_rshift_func_int8_t_s_u(p_43.f0, 0))), ((safe_add_func_int32_t_s_s((*p_44), (*l_369))) > (safe_mul_func_uint16_t_u_u(0xF257L, (-5L))))))), 3L))) , p_43.f0), 65535UL)), (*l_369))), l_413)), (*l_369)));
            }
        }
        (*l_322) = (safe_mul_func_uint16_t_u_u((*l_130), (l_416[3] , 8UL)));
    }
lbl_559:
    (*l_130) = (safe_add_func_uint8_t_u_u((*l_130), (safe_mod_func_uint32_t_u_u(((g_336 , ((((p_43 , p_43) , &l_147) != &l_147) == ((0xCEAE8B50833B5928LL != (*l_130)) < g_178))) <= (*l_130)), (*p_44)))));
    if ((g_57.f0 || (safe_sub_func_int8_t_s_s(0x1DL, (safe_add_func_uint32_t_u_u(((p_43.f0 <= 0L) & ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_43.f0, ((*l_431) |= (((((p_43.f0 < (-7L)) || (*l_130)) | p_43.f0) & (*l_130)) != (*p_44))))) > p_43.f0), 4)), p_43.f0)) | 4294967287UL)), 0xC292E9B0L))))))
    { 
        const uint8_t **l_451 = (void*)0;
        const uint8_t ***l_450 = &l_451;
        const uint8_t ****l_449 = &l_450;
        int32_t l_455 = 1L;
        union U5 l_456 = {-8L};
        int32_t *l_485 = (void*)0;
        uint32_t l_488 = 0x8F734D98L;
        const int64_t *l_517[4] = {&g_236.f4,&g_236.f4,&g_236.f4,&g_236.f4};
        const int64_t **l_516 = &l_517[3];
        const int64_t *** const l_515 = &l_516;
        int64_t l_523 = 1L;
        union U4 *l_577 = &g_578;
        struct S0 *l_579 = (void*)0;
        int i;
        for (g_101 = 15; (g_101 >= 32); ++g_101)
        { 
            const union U2 l_441 = {1UL};
            uint8_t ****l_452 = &g_366[5][0][1];
            uint8_t *****l_453[5][1][1];
            int32_t l_454 = 0L;
            uint32_t ***l_476 = &g_474;
            int64_t **l_519[3][6] = {{&l_117,&l_117,&l_117,&l_117,(void*)0,&l_117},{&l_117,&l_117,&l_117,&l_115,&l_117,&l_117},{&l_117,&l_117,&l_117,&l_117,&l_117,&l_117}};
            int64_t ***l_518 = &l_519[1][3];
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_453[i][j][k] = (void*)0;
                }
            }
            if ((safe_lshift_func_int16_t_s_s(((((safe_mod_func_uint64_t_u_u(p_43.f0, (((((safe_sub_func_uint16_t_u_u(((g_236 , (((*l_117) = 0x387CC21128C3E584LL) ^ (!(l_441 , ((~((((safe_rshift_func_uint8_t_u_u((--l_445[3][3][0]), (((l_454 = (+(((p_43.f0 == (l_449 != (g_365 = l_452))) & p_43.f0) != p_43.f0))) <= p_43.f0) == l_455))) , 0xEF0DAF1D0D59C8BFLL) <= 0xDF71DA4BF65BDECCLL) != 18446744073709551615UL)) , 0x35L))))) < g_297[1]), p_43.f0)) , l_456) , &g_310[1]) == (void*)0) && g_336.f0))) >= p_43.f0) != 18446744073709551614UL) & l_455), p_43.f0)))
            { 
                for (l_156.f6 = 0; (l_156.f6 < (-12)); l_156.f6 = safe_sub_func_int32_t_s_s(l_156.f6, 4))
                { 
                    union U2 *l_460 = &l_294;
                    union U2 **l_459 = &l_460;
                    union U4 *l_461 = &g_99;
                    union U4 **l_462 = &l_461;
                    if ((*p_44))
                        break;
                    (*l_459) = &g_336;
                    (*l_462) = l_461;
                }
            }
            else
            { 
                union U4 **l_464 = &l_463;
                union U1 *l_468[7];
                union U1 **l_467 = &l_468[4];
                int i;
                for (i = 0; i < 7; i++)
                    l_468[i] = &g_129[4];
                (*l_130) = (((*l_464) = l_463) != (g_465 = &g_99));
                (*l_467) = &g_129[3];
            }
            if ((!((safe_add_func_int16_t_s_s(((l_454 & ((*l_130) && g_336.f0)) ^ ((*l_463) , 0x49L)), ((p_43 , ((*l_115) |= (l_455 , p_43.f0))) >= l_441.f0))) ^ 9UL)))
            { 
                uint32_t **l_473 = (void*)0;
                uint32_t ***l_472 = &l_473;
                int32_t *l_479 = &l_454;
                g_474 = ((*l_472) = (void*)0);
                (*l_479) ^= ((((*l_130) = l_456.f0) & 1UL) & ((l_476 = (p_43.f0 , (p_43 , (void*)0))) == (g_477 = (void*)0)));
                (*l_479) = (((*l_130) &= (**g_161)) & p_43.f0);
            }
            else
            { 
                uint32_t l_482 = 18446744073709551615UL;
                int32_t l_487 = 2L;
                union U1 *l_492 = &l_58;
                union U1 **l_491 = &l_492;
                for (g_230.f0 = 0; (g_230.f0 <= 10); g_230.f0 = safe_add_func_int16_t_s_s(g_230.f0, 7))
                { 
                    return l_482;
                }
                for (l_122 = 0; (l_122 <= 19); l_122 = safe_add_func_uint8_t_u_u(l_122, 8))
                { 
                    int32_t *l_486[1][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    l_487 ^= ((l_485 = &g_108) == (void*)0);
                    if (l_441.f0)
                        break;
                    g_108 &= g_236.f6;
                    if (l_488)
                        break;
                }
                (*l_130) &= (safe_rshift_func_int16_t_s_u((7L & (((void*)0 == &g_56[0]) < (((void*)0 != l_491) < ((l_493 == (void*)0) | 0x4CC2BFB4D23D029DLL)))), g_105));
                g_108 |= g_190;
                for (l_156.f1 = 12; (l_156.f1 == 10); --l_156.f1)
                { 
                    g_465 = (void*)0;
                    return (*p_44);
                }
            }
            for (g_25 = 0; (g_25 < 43); g_25 = safe_add_func_uint8_t_u_u(g_25, 1))
            { 
                struct S0 l_500 = {0xDEB6892BL,0xC98FD1D0L,0x273C4C20L,0L,0L,-8L,-5L};
                uint32_t *l_505[4];
                uint32_t *l_508[2][6][6] = {{{&g_174,&g_236.f0,(void*)0,&g_174,&l_500.f0,&l_500.f0},{(void*)0,&g_236.f0,&g_236.f0,(void*)0,&l_500.f0,(void*)0},{(void*)0,&g_178,&g_190,(void*)0,&g_190,&g_178},{&l_500.f0,&g_178,&g_174,&l_500.f0,&g_190,&g_190},{&g_236.f0,&g_178,&g_178,&g_236.f0,&g_190,&g_174},{(void*)0,&g_178,&g_190,(void*)0,&g_190,&g_178}},{{&l_500.f0,&g_178,&g_174,&l_500.f0,&g_190,&g_190},{&g_236.f0,&g_178,&g_178,&g_236.f0,&g_190,&g_174},{(void*)0,&g_178,&g_190,(void*)0,&g_190,&g_178},{&l_500.f0,&g_178,&g_174,&l_500.f0,&g_190,&g_190},{&g_236.f0,&g_178,&g_178,&g_236.f0,&g_190,&g_174},{(void*)0,&g_178,&g_190,(void*)0,&g_190,&g_178}}};
                uint32_t l_521 = 0x385071BDL;
                uint16_t *l_522[7][4] = {{&g_259,&g_259,&g_259,&g_259},{&g_259,&g_259,&g_259,&g_259},{&g_259,&g_259,&g_259,&g_259},{&g_259,&g_259,&g_259,&g_259},{&g_259,&g_259,&g_259,&g_259},{&g_259,&g_259,&g_259,&g_259},{&g_259,&g_259,&g_259,&g_259}};
                union U1 **l_524 = (void*)0;
                union U1 *l_526 = &g_129[4];
                union U1 **l_525 = &l_526;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_505[i] = &l_156.f2;
                for (g_190 = 0; (g_190 != 7); g_190++)
                { 
                    l_500 = (*l_318);
                }
                g_108 = (safe_mul_func_uint8_t_u_u(0x03L, (((l_523 = ((safe_add_func_uint16_t_u_u(((l_505[2] == p_45) && ((*l_431) ^= (safe_add_func_uint32_t_u_u((++g_236.f0), (safe_mul_func_uint8_t_u_u(((l_515 == l_518) == ((l_520 < (l_454 = 250UL)) > l_521)), p_43.f0)))))), g_140.f0)) | 0UL)) >= 0x8136L) | (-3L))));
                (*l_525) = &p_46;
            }
        }
        for (l_294.f0 = 25; (l_294.f0 < 11); l_294.f0--)
        { 
            int32_t l_539 = 0xF2398405L;
            int32_t *l_542 = &g_108;
            int32_t l_553[6];
            union U4 *l_575[5] = {&g_466[2],&g_466[2],&g_466[2],&g_466[2],&g_466[2]};
            union U4 **l_576 = &l_575[2];
            int i;
            for (i = 0; i < 6; i++)
                l_553[i] = 0xAECD1BFAL;
            for (l_156.f4 = 0; (l_156.f4 <= 5); l_156.f4 += 1)
            { 
                union U1 *l_537 = &g_129[3];
                union U1 *l_538 = &l_58;
                int32_t *l_540[6] = {&l_119,&l_119,&l_119,&l_119,&l_119,&l_119};
                int i;
                for (l_456.f1 = 0; (l_456.f1 <= 3); l_456.f1 += 1)
                { 
                    const int32_t ****l_532 = &g_529;
                    int i;
                    if (g_73[l_456.f1])
                        break;
                    (*l_532) = g_529;
                    if ((*p_44))
                        break;
                    if ((**g_530))
                        continue;
                }
                g_541 &= (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((*l_538) = ((*l_537) = g_129[0])) , (((((***g_529) > 0xD324052EL) >= (((g_236.f3 |= g_10) , ((l_539 > g_108) < (*p_44))) != 0x0DL)) || 0xCA50311C4F684961LL) != p_43.f0)), 6)), 1L));
                return (*p_44);
            }
            (**g_529) = l_542;
            if (((*p_44) || (1UL <= (safe_rshift_func_int16_t_s_u(l_488, (0x23FCD329L == ((p_43.f0 & (safe_div_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((*l_463) , (**g_161)), (*l_542))) <= 2L), (***g_529)))) == (*l_542))))))))
            { 
                uint32_t l_556 = 1UL;
                if ((***g_529))
                    break;
                for (g_174 = 0; (g_174 < 24); g_174 = safe_add_func_uint64_t_u_u(g_174, 6))
                { 
                    int32_t *l_551 = &l_168;
                    int32_t *l_552 = (void*)0;
                    int32_t l_554 = 1L;
                    int32_t *l_555[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_555[i] = &l_553[2];
                    if ((*p_44))
                        break;
                    ++l_556;
                    if ((***g_529))
                        break;
                    if ((*l_542))
                        break;
                    if (g_236.f2)
                        goto lbl_559;
                }
            }
            else
            { 
                uint32_t l_568 = 1UL;
                for (g_336.f0 = (-3); (g_336.f0 < 26); g_336.f0++)
                { 
                    int32_t *l_562 = &l_168;
                    int32_t *l_563 = &l_168;
                    int32_t *l_564 = (void*)0;
                    int32_t *l_565 = &g_108;
                    int32_t *l_566 = &g_108;
                    int32_t *l_567[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_567[i] = &g_108;
                    --l_568;
                    --g_572;
                    if ((**g_530))
                        break;
                }
            }
            l_577 = ((*l_576) = l_575[1]);
        }
        g_378 = l_579;
    }
    else
    { 
        struct S0 l_591 = {0x0496D7EAL,4294967288UL,0xE291258DL,-5L,0xDE2B959469958DFCLL,0L,0L};
        int64_t ** const *l_592 = (void*)0;
        uint64_t * const l_597 = (void*)0;
        int16_t *l_607[3][2][2] = {{{&l_156.f5,&g_81},{&g_297[0],&l_156.f5}},{{&g_297[0],&g_297[0]},{&g_297[0],&l_156.f5}},{{&g_297[0],&g_81},{&l_156.f5,&g_81}}};
        uint16_t *l_608[5];
        const union U2 *l_616[3][6][4];
        uint8_t *l_620 = &g_73[0];
        uint8_t **l_619 = &l_620;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_608[i] = &g_259;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 4; k++)
                    l_616[i][j][k] = &g_336;
            }
        }
        g_598 ^= ((safe_sub_func_uint8_t_u_u(((((p_45 == ((((((safe_add_func_uint64_t_u_u(p_43.f0, (*l_130))) | (g_190 >= (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((*l_115) |= ((l_588 <= ((l_596 |= (((*l_463) , ((safe_mul_func_uint8_t_u_u((((l_591 , l_592) != g_593) , (*l_130)), (*l_130))) , (**g_529))) == p_45)) != l_591.f1)) ^ l_591.f2)) || l_591.f0), 6)), (-2L))))) && p_43.f0) <= l_591.f1) , p_43) , &g_178)) , (void*)0) == l_597) > l_591.f1), l_591.f3)) != 3UL);
        if ((((l_591.f6 , ((*l_130) == ((safe_mod_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((&g_366[0][0][0] != &g_366[3][0][1]), (safe_rshift_func_int8_t_s_u(p_43.f0, 1)))), ((*l_130) & ((g_197 |= (l_121[1] != l_607[0][0][0])) , 0xA7L)))) != p_43.f0), (*l_130))) | l_591.f1))) < 0UL) | p_43.f0))
        { 
            (*l_130) &= 8L;
            return (*p_44);
        }
        else
        { 
            uint64_t l_611 = 18446744073709551615UL;
            int64_t * const l_623[1] = {&g_624};
            int64_t * const *l_622 = &l_623[0];
            int64_t * const **l_621 = &l_622;
            uint8_t **l_625 = &l_620;
            int64_t ****l_627[5][6] = {{&l_626[2],&l_626[0],&l_626[2],&l_626[2],&l_626[0],&l_626[2]},{&l_626[2],&l_626[0],&l_626[2],&l_626[2],&l_626[0],&l_626[2]},{&l_626[2],&l_626[0],&l_626[2],&l_626[2],&l_626[0],&l_626[2]},{&l_626[2],&l_626[0],&l_626[2],&l_626[2],&l_626[0],&l_626[2]},{&l_626[2],&l_626[0],&l_626[2],&l_626[2],&l_626[0],&l_626[2]}};
            int i, j;
            (*l_130) ^= (safe_add_func_int32_t_s_s(l_611, ((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_s(((((l_616[0][2][2] != &g_336) & l_591.f3) | (safe_sub_func_int32_t_s_s((l_619 == ((((1L | (((*l_621) = (*g_593)) != (*g_593))) || g_39) == g_178) , l_625)), p_43.f0))) | p_43.f0), 3)) <= l_611) < l_611), p_43.f0)) > l_611)));
            l_626[3] = (g_628 = (g_593 = l_626[3]));
        }
    }
    (*l_629) = &g_129[1];
    return (*g_531);
}



static union U1  func_51(const union U3 * p_52, union U1  p_53, int16_t  p_54, uint64_t  p_55)
{ 
    int32_t *l_126 = &g_13;
    struct S0 l_128[4][1][6] = {{{{0x24FFAFD2L,0UL,9UL,0x5E53L,1L,0xDC16L,-4L},{9UL,0UL,18446744073709551609UL,0x715CL,1L,0L,0xB8L},{0x24FFAFD2L,0UL,9UL,0x5E53L,1L,0xDC16L,-4L},{9UL,0UL,18446744073709551609UL,0x715CL,1L,0L,0xB8L},{0x24FFAFD2L,0UL,9UL,0x5E53L,1L,0xDC16L,-4L},{9UL,0UL,18446744073709551609UL,0x715CL,1L,0L,0xB8L}}},{{{0x24FFAFD2L,0UL,9UL,0x5E53L,1L,0xDC16L,-4L},{9UL,0UL,18446744073709551609UL,0x715CL,1L,0L,0xB8L},{0x24FFAFD2L,0UL,9UL,0x5E53L,1L,0xDC16L,-4L},{9UL,0UL,18446744073709551609UL,0x715CL,1L,0L,0xB8L},{0x24FFAFD2L,0UL,9UL,0x5E53L,1L,0xDC16L,-4L},{9UL,0UL,18446744073709551609UL,0x715CL,1L,0L,0xB8L}}},{{{0x24FFAFD2L,0UL,9UL,0x5E53L,1L,0xDC16L,-4L},{9UL,0UL,18446744073709551609UL,0x715CL,1L,0L,0xB8L},{0x24FFAFD2L,0UL,9UL,0x5E53L,1L,0xDC16L,-4L},{9UL,0UL,18446744073709551609UL,0x715CL,1L,0L,0xB8L},{0x24FFAFD2L,0UL,9UL,0x5E53L,1L,0xDC16L,-4L},{9UL,0UL,18446744073709551609UL,0x715CL,1L,0L,0xB8L}}},{{{0x24FFAFD2L,0UL,9UL,0x5E53L,1L,0xDC16L,-4L},{9UL,0UL,18446744073709551609UL,0x715CL,1L,0L,0xB8L},{0x24FFAFD2L,0UL,9UL,0x5E53L,1L,0xDC16L,-4L},{9UL,0UL,18446744073709551609UL,0x715CL,1L,0L,0xB8L},{0x24FFAFD2L,0UL,9UL,0x5E53L,1L,0xDC16L,-4L},{9UL,0UL,18446744073709551609UL,0x715CL,1L,0L,0xB8L}}}};
    int i, j, k;
    for (g_116 = 0; (g_116 >= 0); g_116 -= 1)
    { 
        uint8_t l_123 = 0xA1L;
        int32_t **l_127[2][5] = {{&l_126,(void*)0,&l_126,(void*)0,&l_126},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        for (g_25 = 0; (g_25 <= 3); g_25 += 1)
        { 
            l_123--;
        }
        l_126 = l_126;
    }
    l_128[1][0][4] = l_128[1][0][4];
    return g_129[3];
}



static const uint8_t  func_63(union U5  p_64, union U5  p_65)
{ 
    return p_64.f0;
}



static union U5  func_66(uint16_t  p_67)
{ 
    uint8_t *l_72 = &g_73[3];
    union U1 l_74[5] = {{0},{0},{0},{0},{0}};
    int32_t l_79 = 0xA57A880EL;
    int16_t *l_80 = &g_81;
    const union U3 l_97 = {0xB617L};
    union U5 l_109 = {8L};
    int i;
    if ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((&g_39 == &g_39), ((((*l_72) = p_67) , 0x8E480B0DL) ^ (l_74[2] , (((safe_mul_func_int8_t_s_s((((*l_80) = (safe_mod_func_int32_t_s_s(((&g_57 != (void*)0) && g_39), l_79))) != l_79), 1L)) >= p_67) || p_67))))), l_79)))
    { 
        int32_t *l_82 = &l_79;
        int32_t *l_83 = (void*)0;
        int32_t l_84 = 0x11BC31B5L;
        int32_t *l_85 = (void*)0;
        (*l_82) = l_79;
        g_86++;
        (*l_82) = 9L;
    }
    else
    { 
        uint64_t *l_100 = &g_101;
        uint8_t *l_104 = &g_105;
        int32_t l_106[6][6] = {{7L,(-4L),0xB298F974L,0L,0L,0xB298F974L},{0L,0L,0xB298F974L,(-4L),7L,7L},{0L,(-4L),(-4L),0L,7L,0xB298F974L},{7L,0L,(-4L),(-4L),0L,7L},{7L,(-4L),0xB298F974L,0L,0L,0xB298F974L},{0L,0L,0xB298F974L,(-4L),7L,7L}};
        int32_t *l_107 = &g_108;
        int i, j;
        (*l_107) ^= (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_79, ((safe_sub_func_uint8_t_u_u(((*l_104) &= (safe_sub_func_int16_t_s_s((l_97 , ((!((*l_72) ^= (g_99 , g_86))) && (--(*l_100)))), 1UL))), ((void*)0 == l_72))) , l_106[5][0]))), l_106[0][1]));
    }
    return l_109;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_73[i], "g_73[i]", print_hash_value);

    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_99.f1, "g_99.f1", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f3, "g_140.f3", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_230.f0, "g_230.f0", print_hash_value);
    transparent_crc(g_236.f0, "g_236.f0", print_hash_value);
    transparent_crc(g_236.f1, "g_236.f1", print_hash_value);
    transparent_crc(g_236.f2, "g_236.f2", print_hash_value);
    transparent_crc(g_236.f3, "g_236.f3", print_hash_value);
    transparent_crc(g_236.f4, "g_236.f4", print_hash_value);
    transparent_crc(g_236.f5, "g_236.f5", print_hash_value);
    transparent_crc(g_236.f6, "g_236.f6", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_297[i], "g_297[i]", print_hash_value);

    }
    transparent_crc(g_300, "g_300", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_310[i], "g_310[i]", print_hash_value);

    }
    transparent_crc(g_336.f0, "g_336.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_466[i].f0, "g_466[i].f0", print_hash_value);
        transparent_crc(g_466[i].f1, "g_466[i].f1", print_hash_value);

    }
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_571, "g_571", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_578.f0, "g_578.f0", print_hash_value);
    transparent_crc(g_578.f1, "g_578.f1", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_653, "g_653", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_710[i].f0, "g_710[i].f0", print_hash_value);
        transparent_crc(g_710[i].f1, "g_710[i].f1", print_hash_value);

    }
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_727[i], "g_727[i]", print_hash_value);

    }
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_735.f0, "g_735.f0", print_hash_value);
    transparent_crc(g_735.f1, "g_735.f1", print_hash_value);
    transparent_crc(g_735.f2, "g_735.f2", print_hash_value);
    transparent_crc(g_735.f3, "g_735.f3", print_hash_value);
    transparent_crc(g_735.f4, "g_735.f4", print_hash_value);
    transparent_crc(g_735.f5, "g_735.f5", print_hash_value);
    transparent_crc(g_735.f6, "g_735.f6", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_808, "g_808", print_hash_value);
    transparent_crc(g_824, "g_824", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_828[i], "g_828[i]", print_hash_value);

    }
    transparent_crc(g_833.f0, "g_833.f0", print_hash_value);
    transparent_crc(g_833.f1, "g_833.f1", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_929.f0, "g_929.f0", print_hash_value);
    transparent_crc(g_929.f1, "g_929.f1", print_hash_value);
    transparent_crc(g_929.f2, "g_929.f2", print_hash_value);
    transparent_crc(g_929.f3, "g_929.f3", print_hash_value);
    transparent_crc(g_929.f4, "g_929.f4", print_hash_value);
    transparent_crc(g_929.f5, "g_929.f5", print_hash_value);
    transparent_crc(g_929.f6, "g_929.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1034[i], "g_1034[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1169[i][j], "g_1169[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1170, "g_1170", print_hash_value);
    transparent_crc(g_1188.f0, "g_1188.f0", print_hash_value);
    transparent_crc(g_1188.f1, "g_1188.f1", print_hash_value);
    transparent_crc(g_1273, "g_1273", print_hash_value);
    transparent_crc(g_1405, "g_1405", print_hash_value);
    transparent_crc(g_1485, "g_1485", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1545[i], "g_1545[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
