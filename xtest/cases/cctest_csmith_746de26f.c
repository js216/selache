// SPDX-License-Identifier: MIT
// cctest_csmith_746de26f.c --- cctest case csmith_746de26f (csmith seed 1953358447)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x70f1743e */

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

// Options:   -s 1953358447 -o /tmp/csmith_gen_115hv256/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int32_t  f1;
   uint16_t  f2;
   int32_t  f3;
   uint16_t  f4;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   uint16_t  f1;
   struct S0  f2;
   const int8_t  f3;
};

union U2 {
   const struct S0  f0;
};


static int32_t g_2 = (-1L);
static int32_t g_40 = 0x9AC92D14L;
static struct S0 g_41 = {0xFA2E5769L,0x8A28D880L,0xE531L,0xD0046BACL,1UL};
static uint32_t g_42 = 18446744073709551615UL;
static uint32_t g_57 = 0UL;
static int64_t g_61[7] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
static struct S0 g_63 = {1UL,-2L,0UL,0xB01FE44AL,65528UL};
static uint64_t g_114 = 0xFEEDE604A327E98ELL;
static int8_t g_119 = 0x93L;
static int32_t *g_130 = &g_41.f3;
static int32_t **g_129 = &g_130;
static int32_t g_132 = 0x95FD4EE7L;
static const union U1 g_152[7] = {{0xF0CC1BE0L},{0xF0CC1BE0L},{0xF0CC1BE0L},{0xF0CC1BE0L},{0xF0CC1BE0L},{0xF0CC1BE0L},{0xF0CC1BE0L}};
static int64_t g_177 = 0x0DACC5E6FE971D65LL;
static int64_t g_204 = 0x3440106B702C53A9LL;
static uint32_t g_206 = 0x15342901L;
static uint32_t g_215 = 0UL;
static union U1 g_221 = {0xC595B650L};
static union U1 *g_220 = &g_221;
static union U1 **g_219 = &g_220;
static union U1 ***g_218 = &g_219;
static union U1 * const *g_223 = &g_220;
static union U1 * const **g_222 = &g_223;
static const union U1 *g_283 = (void*)0;
static const union U1 **g_282 = &g_283;
static uint16_t g_324 = 0x3F43L;
static int16_t g_326 = (-1L);
static int16_t *g_325 = &g_326;
static int32_t *g_328 = &g_63.f1;
static uint64_t g_334 = 8UL;
static const int8_t *g_342[1][1] = {{&g_119}};
static const int8_t **g_341 = &g_342[0][0];
static int16_t g_363 = 1L;
static union U2 g_368[2] = {{{0xE3B4DF4EL,0x3ADF2EE7L,0x612BL,-8L,0x8DEAL}},{{0xE3B4DF4EL,0x3ADF2EE7L,0x612BL,-8L,0x8DEAL}}};
static union U2 *g_367 = &g_368[0];
static int16_t g_374 = 0x802EL;
static int32_t g_380[4][3][6] = {{{0x4DF2F93BL,(-1L),0x4DF2F93BL,(-3L),0x4DF2F93BL,(-1L)},{0L,(-1L),0xADA9AE9DL,(-1L),0L,(-1L)},{0x4DF2F93BL,(-3L),0x4DF2F93BL,(-1L),0x4DF2F93BL,(-3L)}},{{0L,(-3L),0xADA9AE9DL,(-3L),0L,(-3L)},{0x4DF2F93BL,(-1L),0x4DF2F93BL,(-3L),0x4DF2F93BL,(-1L)},{0L,(-1L),0xADA9AE9DL,(-1L),0L,(-1L)}},{{0x4DF2F93BL,(-3L),0x4DF2F93BL,(-1L),0x4DF2F93BL,(-3L)},{0L,(-3L),0xADA9AE9DL,(-3L),0L,(-3L)},{0x4DF2F93BL,(-1L),0x4DF2F93BL,(-3L),0x4DF2F93BL,(-1L)}},{{0L,(-1L),0xADA9AE9DL,(-1L),0L,(-1L)},{0x4DF2F93BL,(-3L),0x4DF2F93BL,(-1L),0x4DF2F93BL,(-3L)},{0L,(-3L),0xADA9AE9DL,(-3L),0L,(-3L)}}};
static uint32_t g_381[4][4][2] = {{{0x278E8508L,0xEA7CCC55L},{1UL,8UL},{0x278E8508L,8UL},{1UL,0xEA7CCC55L}},{{0x278E8508L,0xEA7CCC55L},{1UL,8UL},{0x278E8508L,8UL},{1UL,0xEA7CCC55L}},{{0x278E8508L,0xEA7CCC55L},{1UL,8UL},{0x278E8508L,8UL},{1UL,0xEA7CCC55L}},{{0x278E8508L,0xEA7CCC55L},{1UL,8UL},{0x278E8508L,8UL},{1UL,0xEA7CCC55L}}};
static uint16_t *g_408[5][4] = {{&g_63.f4,&g_63.f4,&g_41.f2,&g_221.f1},{&g_221.f1,&g_324,&g_41.f2,&g_324},{&g_63.f4,&g_41.f2,&g_221.f1,&g_41.f2},{&g_324,&g_41.f2,&g_41.f2,&g_324},{&g_41.f2,&g_324,&g_63.f4,&g_221.f1}};
static uint8_t g_446 = 0x52L;
static uint32_t g_448 = 3UL;
static uint32_t g_486 = 5UL;
static int32_t g_519[3] = {0x4D226B88L,0x4D226B88L,0x4D226B88L};
static union U1 g_552 = {0x61074427L};
static int32_t ***g_565 = &g_129;
static int32_t ****g_564 = &g_565;
static union U1 g_633 = {0xE779B304L};
static uint32_t *g_674 = &g_42;
static uint32_t **g_673 = &g_674;
static uint16_t g_867 = 1UL;
static int16_t g_907 = 0xF019L;
static union U1 g_927 = {-6L};
static uint8_t g_960 = 253UL;
static union U1 g_981 = {0x27F9D889L};
static int8_t *g_1007[3][5] = {{&g_119,&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119,&g_119}};
static int8_t **g_1006 = &g_1007[2][1];
static int8_t ***g_1005 = &g_1006;
static const int16_t g_1020 = (-1L);
static union U1 g_1137 = {0x95B40585L};
static int32_t *****g_1158 = &g_564;
static uint16_t **g_1162 = &g_408[4][1];
static uint16_t ***g_1161 = &g_1162;
static union U1 g_1167 = {-2L};
static int8_t g_1244 = 1L;
static uint8_t g_1419 = 250UL;
static const uint32_t g_1487 = 18446744073709551615UL;
static union U2 g_1522[3] = {{{0x63531D8DL,0x4E571ED7L,4UL,-9L,65535UL}},{{0x63531D8DL,0x4E571ED7L,4UL,-9L,65535UL}},{{0x63531D8DL,0x4E571ED7L,4UL,-9L,65535UL}}};
static union U1 g_1534 = {1L};
static uint64_t g_1599[5] = {0x2B13A1F6E4BE0147LL,0x2B13A1F6E4BE0147LL,0x2B13A1F6E4BE0147LL,0x2B13A1F6E4BE0147LL,0x2B13A1F6E4BE0147LL};
static uint32_t g_1634 = 0x9E4E8ACFL;
static uint32_t g_1664[1][1] = {{0xF1A5D999L}};
static union U1 g_1759 = {-1L};
static const union U2 g_1762[4][4][5] = {{{{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{0UL,1L,0x1597L,0xC1441E8BL,0xF0E0L}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{4294967286UL,0xA33C6A8AL,0xBC37L,6L,65527UL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}}},{{{0x1086402DL,0x9F5ECCD8L,0x8BF8L,1L,8UL}},{{1UL,4L,0x6EB8L,0x50FDCCF6L,65535UL}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}},{{4294967286UL,0xA33C6A8AL,0xBC37L,6L,65527UL}}},{{{0x1086402DL,0x9F5ECCD8L,0x8BF8L,1L,8UL}},{{0UL,1L,0x1597L,0xC1441E8BL,0xF0E0L}},{{0x1E19CE8FL,0x78B72729L,0xC538L,0xB8DFA7DFL,0x04EEL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}}},{{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{0UL,1L,0x1597L,0xC1441E8BL,0xF0E0L}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{4294967286UL,0xA33C6A8AL,0xBC37L,6L,65527UL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}}}},{{{{0x1086402DL,0x9F5ECCD8L,0x8BF8L,1L,8UL}},{{1UL,4L,0x6EB8L,0x50FDCCF6L,65535UL}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}},{{4294967286UL,0xA33C6A8AL,0xBC37L,6L,65527UL}}},{{{0x1086402DL,0x9F5ECCD8L,0x8BF8L,1L,8UL}},{{0UL,1L,0x1597L,0xC1441E8BL,0xF0E0L}},{{0x1E19CE8FL,0x78B72729L,0xC538L,0xB8DFA7DFL,0x04EEL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}}},{{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{0UL,1L,0x1597L,0xC1441E8BL,0xF0E0L}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{4294967286UL,0xA33C6A8AL,0xBC37L,6L,65527UL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}}},{{{0x1086402DL,0x9F5ECCD8L,0x8BF8L,1L,8UL}},{{1UL,4L,0x6EB8L,0x50FDCCF6L,65535UL}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}},{{4294967286UL,0xA33C6A8AL,0xBC37L,6L,65527UL}}}},{{{{0x1086402DL,0x9F5ECCD8L,0x8BF8L,1L,8UL}},{{0UL,1L,0x1597L,0xC1441E8BL,0xF0E0L}},{{0x1E19CE8FL,0x78B72729L,0xC538L,0xB8DFA7DFL,0x04EEL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}}},{{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{0UL,1L,0x1597L,0xC1441E8BL,0xF0E0L}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{4294967286UL,0xA33C6A8AL,0xBC37L,6L,65527UL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}}},{{{0x1086402DL,0x9F5ECCD8L,0x8BF8L,1L,8UL}},{{1UL,4L,0x6EB8L,0x50FDCCF6L,65535UL}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}},{{4294967286UL,0xA33C6A8AL,0xBC37L,6L,65527UL}}},{{{0x1086402DL,0x9F5ECCD8L,0x8BF8L,1L,8UL}},{{0UL,1L,0x1597L,0xC1441E8BL,0xF0E0L}},{{0x1E19CE8FL,0x78B72729L,0xC538L,0xB8DFA7DFL,0x04EEL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}}}},{{{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{0UL,1L,0x1597L,0xC1441E8BL,0xF0E0L}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{4294967286UL,0xA33C6A8AL,0xBC37L,6L,65527UL}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}}},{{{0x1086402DL,0x9F5ECCD8L,0x8BF8L,1L,8UL}},{{1UL,4L,0x6EB8L,0x50FDCCF6L,65535UL}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{1UL,0xC351CFFFL,0xE65CL,1L,65529UL}},{{0x1E19CE8FL,0x78B72729L,0xC538L,0xB8DFA7DFL,0x04EEL}}},{{{4294967295UL,0x84085EA2L,0xD511L,0x68239369L,5UL}},{{0x194D9BADL,0x2B210BDFL,0UL,4L,65533UL}},{{1UL,0x65692471L,0xB3EAL,0x7E67683FL,65529UL}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}}},{{{0xFB35C76CL,8L,65535UL,8L,65535UL}},{{0x194D9BADL,0x2B210BDFL,0UL,4L,65533UL}},{{0xFB35C76CL,8L,65535UL,8L,65535UL}},{{0x1E19CE8FL,0x78B72729L,0xC538L,0xB8DFA7DFL,0x04EEL}},{{0x936BE643L,0L,0x35C2L,0L,0x1663L}}}}};
static const union U2 g_1764 = {{0x71776BDCL,0x2C6F6FF9L,0x45A9L,-1L,0xBE63L}};
static const union U2 *g_1763 = &g_1764;
static int32_t ***g_1868 = &g_129;
static int16_t **g_1917 = &g_325;
static int16_t **g_1918 = &g_325;
static int32_t g_2098 = 3L;
static int16_t g_2146 = 7L;
static const union U2 **g_2153 = (void*)0;
static const union U2 *** const g_2152 = &g_2153;
static int16_t ***g_2193 = &g_1917;
static int16_t ****g_2192 = &g_2193;
static uint32_t ****g_2313 = (void*)0;
static union U1 g_2324 = {-1L};
static int32_t g_2354 = 0L;
static int16_t ***g_2384 = (void*)0;
static int16_t **** const g_2383 = &g_2384;
static int16_t **** const *g_2382 = &g_2383;
static const int32_t *g_2406 = &g_927.f2.f1;
static const struct S0 **g_2455 = (void*)0;
static int32_t g_2460 = (-1L);
static uint32_t *****g_2461 = &g_2313;
static union U1 ****g_2657 = &g_218;
static union U1 *****g_2656 = &g_2657;
static union U1 g_2667 = {5L};
static int8_t ****g_2717 = &g_1005;
static union U2 g_2880 = {{0UL,0xD5EF3C3FL,0xACA3L,0L,0x3862L}};
static uint8_t *g_2933 = &g_446;
static uint8_t **g_2932[2] = {&g_2933,&g_2933};
static uint8_t ***g_2931 = &g_2932[0];
static uint8_t g_2939 = 0xCCL;



static uint32_t  func_1(void);
static union U1  func_5(union U2  p_6);
static int32_t  func_8(const union U1  p_9, uint32_t  p_10, uint16_t  p_11);
static const union U1  func_12(int16_t  p_13);
static int16_t  func_14(int32_t  p_15, int8_t  p_16, int16_t  p_17);
static const union U1  func_22(struct S0  p_23, uint8_t  p_24, uint32_t  p_25, struct S0  p_26, int64_t  p_27);
static struct S0  func_28(uint16_t  p_29, int8_t  p_30, struct S0  p_31, int8_t  p_32, uint16_t  p_33);
static uint32_t  func_45(int64_t  p_46, struct S0  p_47);




static uint32_t  func_1(void)
{ 
    const uint32_t l_2935[1][2] = {{1UL,1UL}};
    int32_t *l_2942[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_2942[i] = &g_40;
    for (g_2 = 13; (g_2 == 9); --g_2)
    { 
        union U2 l_7 = {{0xEF2C3654L,0xD1878ABCL,4UL,4L,0x54EEL}};
        int32_t l_2938 = 0x1232260CL;
    }
    --g_2939;
    (**g_565) = l_2942[0];
    return g_368[0].f0.f3;
}



static union U1  func_5(union U2  p_6)
{ 
    uint16_t l_18 = 0UL;
    uint16_t l_34 = 0x3079L;
    struct S0 l_35 = {4294967291UL,4L,0x65C3L,-1L,0xD7BAL};
    int16_t *l_1272 = (void*)0;
    int16_t *l_1273 = &g_374;
    int16_t l_2912 = 0xCCD9L;
    int32_t *l_2914 = (void*)0;
    union U1 l_2934 = {0x05C4F46BL};
    if (func_8(func_12(((*l_1273) = func_14(l_18, (+(safe_add_func_int8_t_s_s(g_2, p_6.f0.f0))), (func_22(func_28(p_6.f0.f2, l_34, l_35, l_18, l_18), l_35.f0, g_63.f4, l_35, p_6.f0.f2) , p_6.f0.f4)))), p_6.f0.f3, p_6.f0.f0))
    { 
        union U2 l_2904 = {{4294967286UL,0xD132804AL,0x2FB0L,0x78FC63D3L,0UL}};
        uint16_t l_2905 = 0x3539L;
        uint8_t *l_2906 = &g_960;
        uint32_t *l_2907 = (void*)0;
        uint32_t *l_2908 = &g_2667.f2.f0;
        uint32_t *l_2909 = (void*)0;
        uint32_t *l_2910 = &g_215;
        int32_t l_2911 = 0xA9BB5DE2L;
        int32_t l_2913 = 0x32FFAA11L;
        struct S0 *l_2915 = &g_1534.f2;
        l_2913 ^= ((p_6 , ((((((g_119 ^ (safe_div_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((l_2911 = ((*l_2910) ^= (safe_div_func_uint8_t_u_u(((*l_2906) |= ((l_34 ^ (g_2324.f0 <= (((0x8EDADC7C33E5C677LL >= ((*g_328) == (safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s((((l_2904 , l_35.f2) >= 1UL) , l_2904.f0.f2), (**g_341))) && (-3L)), p_6.f0.f2)))) , g_1759.f0) != 0x4A41F7A1L))) || l_2905)), g_981.f3)))), l_34)), g_1762[3][1][0].f0.f0))) >= 0xA9E994D2L) < l_2904.f0.f2) == 0xB2L) | 0L) , l_2912)) >= g_119);
        (**g_565) = l_2914;
        (*l_2915) = p_6.f0;
    }
    else
    { 
        int16_t ** const l_2916[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t ***l_2921[5][2];
        int32_t l_2922 = (-1L);
        int32_t l_2923 = 0xFEF24524L;
        uint16_t *l_2924[7][3][6] = {{{&g_927.f1,&g_1534.f1,&g_927.f1,&g_981.f1,&g_63.f4,&g_1167.f1},{&g_41.f2,&l_18,&g_1759.f1,&g_927.f1,&g_927.f1,(void*)0},{&g_867,&l_34,&g_324,&g_927.f1,&g_63.f4,&g_981.f1}},{{&g_41.f2,&g_1137.f1,&l_35.f4,&g_981.f1,&l_35.f4,&g_1137.f1},{&g_927.f1,&l_35.f2,&l_35.f4,&g_1167.f1,&g_867,&g_981.f1},{&g_1759.f1,&g_1167.f1,&g_324,&g_1137.f1,&l_34,(void*)0}},{{&g_324,&g_1167.f1,&g_1759.f1,&l_35.f2,&g_867,&g_1167.f1},{&l_35.f4,&l_35.f2,&g_927.f1,&l_35.f2,&l_35.f4,&g_1167.f1},{&l_35.f4,&g_1137.f1,&g_41.f2,&l_35.f2,&g_63.f4,&l_18}},{{&g_324,&l_34,&g_867,&g_1137.f1,&g_927.f1,&l_18},{&g_1759.f1,&l_18,&g_41.f2,&g_1167.f1,&g_63.f4,&g_1167.f1},{&g_927.f1,&g_1534.f1,&g_927.f1,&g_981.f1,&g_63.f4,&g_1167.f1}},{{&g_41.f2,&l_18,&g_1759.f1,&g_927.f1,&g_927.f1,(void*)0},{&g_867,&l_34,&g_324,&g_927.f1,&g_63.f4,&g_981.f1},{&g_41.f2,&g_1137.f1,&l_35.f4,&g_981.f1,&l_35.f4,&g_1137.f1}},{{&g_927.f1,&l_35.f2,&l_35.f4,&g_1167.f1,&g_867,&g_981.f1},{&g_1759.f1,&g_1167.f1,&g_324,&g_1137.f1,&l_34,(void*)0},{&g_324,&g_1167.f1,&g_1759.f1,&l_35.f2,&g_867,&g_1167.f1}},{{&l_35.f4,&l_35.f2,&g_927.f1,&l_35.f2,&l_35.f4,&g_1167.f1},{&l_35.f4,&g_1137.f1,&g_41.f2,&l_35.f2,&g_63.f4,&l_18},{&g_324,&l_34,&g_867,&g_1137.f1,&g_927.f1,&l_18}}};
        int32_t l_2925 = 0x4F56F519L;
        uint32_t *l_2926[7][1][5] = {{{(void*)0,&g_206,&g_206,(void*)0,&g_206}},{{&g_63.f0,&g_63.f0,(void*)0,&g_63.f0,&g_63.f0}},{{&g_206,(void*)0,&g_206,&g_206,(void*)0}},{{&g_63.f0,(void*)0,(void*)0,&g_63.f0,(void*)0}},{{(void*)0,(void*)0,&g_1664[0][0],(void*)0,(void*)0}},{{(void*)0,&g_63.f0,(void*)0,(void*)0,&g_63.f0}},{{(void*)0,&g_206,&g_206,(void*)0,&g_206}}};
        int32_t l_2927 = 1L;
        struct S0 *l_2928[1];
        uint8_t **l_2930 = (void*)0;
        uint8_t ***l_2929 = &l_2930;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_2921[i][j] = (void*)0;
        }
        for (i = 0; i < 1; i++)
            l_2928[i] = (void*)0;
        l_2927 = ((l_2922 = (((l_2916[1] == &l_1273) < (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((void*)0 == l_2921[2][1]) == l_2922), l_2923)), (l_2925 = l_2923)))) , g_1487)) , l_2922);
        l_35.f1 = (((p_6.f0.f2 && 0UL) & (((&l_35 != ((p_6.f0.f1 < 1L) , l_2928[0])) ^ g_1764.f0.f2) < l_2927)) , 6L);
        (*g_328) &= l_2923;
        g_2931 = l_2929;
    }
    return l_2934;
}



static int32_t  func_8(const union U1  p_9, uint32_t  p_10, uint16_t  p_11)
{ 
    int8_t ***l_1829 = (void*)0;
    union U1 **l_1845 = &g_220;
    int32_t l_1855 = 0xE20A0476L;
    int32_t l_1862[4];
    uint16_t l_1873 = 0UL;
    uint64_t l_1879 = 0x42783F3741E606ABLL;
    uint8_t l_1898 = 8UL;
    struct S0 l_1900[5] = {{4294967289UL,2L,0UL,-5L,1UL},{4294967289UL,2L,0UL,-5L,1UL},{4294967289UL,2L,0UL,-5L,1UL},{4294967289UL,2L,0UL,-5L,1UL},{4294967289UL,2L,0UL,-5L,1UL}};
    int16_t *****l_1908 = (void*)0;
    union U2 *l_1929 = &g_1522[0];
    uint32_t l_2045 = 8UL;
    int32_t l_2125 = 1L;
    uint32_t **l_2155 = &g_674;
    struct S0 l_2181 = {4294967287UL,0xB00AA0E8L,1UL,-1L,1UL};
    uint32_t ***l_2187 = &l_2155;
    uint32_t ****l_2186 = &l_2187;
    int16_t ***l_2198 = &g_1917;
    uint8_t *l_2199[2];
    uint32_t l_2200 = 6UL;
    uint32_t *l_2203 = (void*)0;
    uint16_t l_2213 = 1UL;
    uint32_t l_2265[4] = {1UL,1UL,1UL,1UL};
    uint64_t l_2315 = 0UL;
    int32_t l_2326 = 0x15D8711EL;
    int64_t l_2355 = 0L;
    int8_t l_2357 = 0x10L;
    uint8_t l_2375[2];
    int8_t l_2428 = 0x45L;
    uint16_t l_2438 = 0xD1DFL;
    uint16_t l_2448 = 1UL;
    uint32_t l_2449 = 0UL;
    int64_t l_2457 = 0xC90574D26467E2B5LL;
    const struct S0 ***l_2504[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_2515 = 0L;
    int32_t * const *l_2589 = (void*)0;
    int32_t * const **l_2588 = &l_2589;
    int32_t * const ***l_2587 = &l_2588;
    uint32_t l_2605 = 1UL;
    int16_t l_2633 = 0x2C50L;
    int64_t l_2659 = 3L;
    union U1 *l_2666[3];
    int64_t *l_2668 = &l_2659;
    uint8_t l_2672[3][7] = {{0xD4L,0x1AL,0UL,0xD4L,1UL,1UL,0xD4L},{0UL,0x7BL,0UL,1UL,0x7BL,0x1AL,0x1AL},{0x7BL,0xD4L,6UL,0xD4L,0x7BL,6UL,1UL}};
    union U2 ** const l_2677 = &g_367;
    union U2 ** const *l_2676 = &l_2677;
    int32_t l_2691 = (-1L);
    const uint64_t l_2702[4][6] = {{0x7D8400D46969C680LL,0x7886EC41A83B79B0LL,0x7886EC41A83B79B0LL,0x7D8400D46969C680LL,0x7886EC41A83B79B0LL,0x7886EC41A83B79B0LL},{0x7D8400D46969C680LL,0x7886EC41A83B79B0LL,0x7886EC41A83B79B0LL,0x7D8400D46969C680LL,0x7886EC41A83B79B0LL,0x7886EC41A83B79B0LL},{0x7D8400D46969C680LL,0x7886EC41A83B79B0LL,0x7886EC41A83B79B0LL,0x7D8400D46969C680LL,0x7886EC41A83B79B0LL,0x7886EC41A83B79B0LL},{0x7D8400D46969C680LL,0x7886EC41A83B79B0LL,0x7886EC41A83B79B0LL,0x7D8400D46969C680LL,0x7886EC41A83B79B0LL,0x7886EC41A83B79B0LL}};
    int32_t l_2704 = (-1L);
    uint32_t l_2710 = 0x40404426L;
    uint16_t ****l_2747 = &g_1161;
    uint16_t * const * const l_2750[7] = {&g_408[4][1],&g_408[4][1],&g_408[4][1],&g_408[4][1],&g_408[4][1],&g_408[4][1],&g_408[4][1]};
    uint16_t * const * const *l_2749 = &l_2750[4];
    uint16_t * const * const **l_2748[2][6] = {{&l_2749,&l_2749,&l_2749,&l_2749,&l_2749,&l_2749},{&l_2749,&l_2749,&l_2749,&l_2749,&l_2749,&l_2749}};
    int8_t *****l_2847 = (void*)0;
    int8_t **l_2853 = &g_1007[1][4];
    int i, j;
    for (i = 0; i < 4; i++)
        l_1862[i] = 0x0C3B0084L;
    for (i = 0; i < 2; i++)
        l_2199[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_2375[i] = 0x44L;
    for (i = 0; i < 3; i++)
        l_2666[i] = &g_2667;
    for (g_1167.f2.f4 = 0; (g_1167.f2.f4 > 42); ++g_1167.f2.f4)
    { 
        uint32_t l_1818[1][3][7] = {{{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL}}};
        union U2 *l_1821 = (void*)0;
        union U2 **l_1822 = &g_367;
        union U2 ***l_1823 = &l_1822;
        struct S0 *l_1824 = &g_41;
        int8_t ***l_1830 = &g_1006;
        int8_t ****l_1831 = &g_1005;
        int8_t ****l_1832 = (void*)0;
        int8_t ****l_1833 = &g_1005;
        int8_t ****l_1834 = &l_1830;
        int32_t l_1859[1];
        int32_t l_1861[6];
        uint16_t *l_2058 = &g_1137.f1;
        int64_t l_2075 = 9L;
        union U1 ****l_2139 = (void*)0;
        union U1 *****l_2138 = &l_2139;
        int16_t **l_2154 = &g_325;
        const uint8_t l_2177 = 0UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1859[i] = (-6L);
        for (i = 0; i < 6; i++)
            l_1861[i] = 4L;
        --l_1818[0][2][1];
        (*l_1822) = l_1821;
        (*l_1823) = &l_1821;
        if ((((((l_1818[0][0][4] != (l_1824 == (((((*g_673) = (*g_673)) == &p_10) , (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((p_10 >= (l_1829 != ((*l_1834) = l_1830))), l_1818[0][2][1])), 1))) , l_1824))) > (**g_341)) , p_10) ^ (**g_341)) , p_11))
        { 
            uint8_t l_1863 = 0x93L;
            for (g_57 = (-4); (g_57 < 45); g_57 = safe_add_func_int16_t_s_s(g_57, 1))
            { 
                const uint16_t l_1856 = 0x3824L;
                for (g_1137.f0 = (-18); (g_1137.f0 != 14); ++g_1137.f0)
                { 
                    int64_t l_1849 = 0x57F845E29AC3A6E7LL;
                    uint32_t *l_1850 = &g_1759.f2.f0;
                    struct S0 l_1860[5] = {{6UL,-2L,0x9843L,1L,0x8160L},{6UL,-2L,0x9843L,1L,0x8160L},{6UL,-2L,0x9843L,1L,0x8160L},{6UL,-2L,0x9843L,1L,0x8160L},{6UL,-2L,0x9843L,1L,0x8160L}};
                    int i;
                    (*g_328) |= (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(p_9.f1, 6)), (g_1020 , (l_1845 == ((*g_218) = (((safe_add_func_uint8_t_u_u((!((*l_1850) = l_1849)), g_519[1])) > (safe_sub_func_uint8_t_u_u(((safe_mul_func_int32_t_s_s(0L, (g_1244 <= p_9.f1))) || l_1855), l_1856))) , (void*)0)))))) & 0x49135F1EFD7F24B5LL), p_9.f3));
                    l_1861[0] &= ((safe_add_func_uint16_t_u_u((l_1859[0] = (((l_1855 | p_11) , p_10) <= (&g_1006 == (void*)0))), (l_1860[1] , 0UL))) , p_11);
                    (**g_565) = (void*)0;
                    if ((*g_328))
                        continue;
                    (*l_1824) = g_1522[0].f0;
                }
            }
            --l_1863;
        }
        else
        { 
            int8_t l_1871 = (-1L);
            uint16_t **l_1872 = &g_408[4][1];
            struct S0 l_1874 = {5UL,0x7F1E22D6L,0UL,0xE5093129L,0x593CL};
            (*l_1824) = ((safe_rshift_func_uint8_t_u_s(((void*)0 != g_1868), ((safe_lshift_func_uint16_t_u_u((l_1871 == l_1862[3]), ((*g_325) > (l_1872 == (void*)0)))) < l_1873))) , l_1874);
            for (g_633.f2.f3 = 0; (g_633.f2.f3 <= 3); g_633.f2.f3 += 1)
            { 
                int64_t l_1877[5][7] = {{0x029DEC7CEF373B86LL,1L,0xEA31245C7A5D4326LL,1L,0x029DEC7CEF373B86LL,0xA692752E96A54AB6LL,0xA692752E96A54AB6LL},{(-1L),0x4DA2136F85052359LL,(-1L),0x4DA2136F85052359LL,(-1L),(-1L),(-1L)},{0x029DEC7CEF373B86LL,1L,0xEA31245C7A5D4326LL,1L,0x029DEC7CEF373B86LL,0xA692752E96A54AB6LL,0xA692752E96A54AB6LL},{(-1L),0x4DA2136F85052359LL,(-1L),0x4DA2136F85052359LL,(-1L),(-1L),(-1L)},{0x029DEC7CEF373B86LL,1L,0xEA31245C7A5D4326LL,1L,0x029DEC7CEF373B86LL,0xA692752E96A54AB6LL,0xA692752E96A54AB6LL}};
                int32_t l_1878 = 0x05C100FCL;
                int i, j;
                for (g_1419 = 0; (g_1419 <= 6); g_1419 += 1)
                { 
                    int32_t *l_1875[4] = {&g_519[1],&g_519[1],&g_519[1],&g_519[1]};
                    int64_t l_1876 = (-2L);
                    int i;
                    l_1879++;
                    if (p_11)
                        break;
                    (*l_1824) = g_1522[0].f0;
                    (*g_328) = (safe_sub_func_uint16_t_u_u((p_11 , (((*g_325) = l_1862[1]) && l_1874.f2)), p_10));
                    if (l_1862[2])
                        continue;
                }
            }
            if (l_1879)
                continue;
            return p_11;
        }
        if (l_1862[2])
        { 
            int32_t l_1886 = 0x16CA70AEL;
            uint16_t *l_1896 = &g_1534.f1;
            uint16_t *l_1897 = (void*)0;
            struct S0 l_1899 = {0xD046F39AL,-1L,0x35D4L,0xDE1BB78CL,1UL};
            int16_t **l_1916 = &g_325;
            int32_t **l_1928 = &g_130;
            uint16_t l_1964 = 65535UL;
            (*g_328) |= (0xB163885DL && g_1759.f1);
            (***g_564) = (void*)0;
            if (((safe_mul_func_uint16_t_u_u(((((l_1886 <= l_1879) && (~((safe_mul_func_int16_t_s_s(((l_1899 = l_1900[1]) , (*g_325)), 0L)) , l_1899.f1))) & l_1861[0]) | 18446744073709551615UL), l_1861[3])) , l_1899.f3))
            { 
                int8_t l_1901[6][2] = {{0xF9L,(-1L)},{0xF9L,(-1L)},{0xF9L,(-1L)},{0xF9L,(-1L)},{0xF9L,(-1L)},{0xF9L,(-1L)}};
                int16_t **l_1907 = (void*)0;
                int16_t ***l_1906 = &l_1907;
                int16_t ****l_1905[1][1];
                int16_t *****l_1904[7][6][1] = {{{&l_1905[0][0]},{(void*)0},{(void*)0},{(void*)0},{&l_1905[0][0]},{&l_1905[0][0]}},{{(void*)0},{&l_1905[0][0]},{&l_1905[0][0]},{(void*)0},{&l_1905[0][0]},{&l_1905[0][0]}},{{(void*)0},{(void*)0},{(void*)0},{&l_1905[0][0]},{&l_1905[0][0]},{(void*)0}},{{&l_1905[0][0]},{&l_1905[0][0]},{(void*)0},{&l_1905[0][0]},{&l_1905[0][0]},{(void*)0}},{{(void*)0},{(void*)0},{&l_1905[0][0]},{&l_1905[0][0]},{(void*)0},{&l_1905[0][0]}},{{&l_1905[0][0]},{(void*)0},{&l_1905[0][0]},{&l_1905[0][0]},{(void*)0},{(void*)0}},{{(void*)0},{&l_1905[0][0]},{&l_1905[0][0]},{(void*)0},{&l_1905[0][0]},{&l_1905[0][0]}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1905[i][j] = &l_1906;
                }
                if (l_1901[2][1])
                    break;
                for (g_927.f2.f0 = 0; (g_927.f2.f0 > 51); g_927.f2.f0 = safe_add_func_int16_t_s_s(g_927.f2.f0, 6))
                { 
                    int16_t *****l_1909[7] = {&l_1905[0][0],&l_1905[0][0],&l_1905[0][0],&l_1905[0][0],&l_1905[0][0],&l_1905[0][0],&l_1905[0][0]};
                    int i;
                    (*g_328) ^= 0x7089F581L;
                    (**g_565) = (***g_564);
                    (*g_328) &= (l_1899.f1 = ((l_1909[0] = (l_1908 = l_1904[1][3][0])) == (void*)0));
                    (**g_565) = &l_1861[3];
                }
                for (g_927.f1 = 0; (g_927.f1 <= 31); g_927.f1 = safe_add_func_uint32_t_u_u(g_927.f1, 9))
                { 
                    uint8_t *l_1919 = &l_1898;
                    int64_t *l_1927 = &g_177;
                    (*g_328) |= (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((g_1917 = l_1916) != (g_1918 = &g_325)) & (l_1901[0][1] >= ((*l_1919) = l_1855))), 2)), l_1861[0]));
                    (*g_328) = (p_9.f3 || (safe_mul_func_uint16_t_u_u(l_1900[1].f4, (((safe_add_func_uint64_t_u_u((((*l_1927) ^= ((!(p_9.f1 | (l_1900[1].f2 , 0x6E8246A3DF46DC3ALL))) & ((void*)0 == l_1919))) < g_867), g_41.f0)) , (void*)0) != l_1928))));
                    if (l_1859[0])
                        break;
                    if (p_9.f1)
                        break;
                }
            }
            else
            { 
                int16_t l_1936 = 0L;
                union U1 l_1965 = {0xD370E9D3L};
                uint16_t l_1974 = 0x29A1L;
                if ((((((**g_223) , (((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_1762[3][1][0].f0.f4, ((**g_1006) = (l_1861[0] = 0xD3L)))), (((*l_1896) = ((((((safe_mul_func_int16_t_s_s(((*g_325) = 1L), 65535UL)) | l_1900[1].f3) > l_1936) >= g_1522[0].f0.f4) , p_9.f1) || 18446744073709551615UL)) && (-2L)))) , l_1900[1].f4) < p_10)) <= p_9.f3) , l_1861[2]) && l_1818[0][2][1]))
                { 
                    uint32_t *l_1943[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_1944 = 0x7BC0ABE9L;
                    uint8_t *l_1955 = &l_1898;
                    uint8_t *l_1956 = (void*)0;
                    uint8_t *l_1957 = &g_446;
                    int32_t l_1966[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1966[i] = (-8L);
                    l_1966[2] &= (safe_sub_func_uint64_t_u_u(((void*)0 == &l_1822), (safe_lshift_func_int16_t_s_s((((((((((safe_lshift_func_int16_t_s_s(((--g_41.f0) && ((((safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_960, (((((p_9.f1 >= ((safe_mul_func_uint8_t_u_u(((*l_1957) = ((*l_1955) = 5UL)), (safe_div_func_int16_t_s_s(((**g_1918) = ((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_1936, l_1944)), (**g_1918))) != 0xC8DEC662176F32D2LL)), l_1936)))) != p_11)) , 0x617F0F79930D3AB7LL) || g_1759.f3) | g_519[1]) , g_152[3].f1))), 0xDED8L)), p_11)) ^ (-4L)) , l_1964) , l_1900[1].f4)), p_9.f1)) && g_152[3].f0) == g_1020) , (*g_674)) , l_1965) , 1L) || l_1944) <= p_11) == 1L), 14))));
                }
                else
                { 
                    uint8_t l_1967[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1967[i] = 0x38L;
                    if (p_9.f3)
                        break;
                    return l_1967[0];
                }
                for (g_1244 = 2; (g_1244 >= 0); g_1244 -= 1)
                { 
                    (**g_565) = &l_1855;
                }
                for (l_1965.f0 = 0; (l_1965.f0 >= 0); l_1965.f0 -= 1)
                { 
                    uint8_t *l_1971 = &l_1898;
                    int64_t *l_1975 = (void*)0;
                    int64_t *l_1976[5];
                    uint32_t *l_1985 = &g_381[2][3][0];
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1976[i] = &g_177;
                    (*g_328) &= (!(((*l_1985) &= (((g_1664[l_1965.f0][l_1965.f0] == g_1664[l_1965.f0][l_1965.f0]) & (safe_lshift_func_int16_t_s_s(((++(*l_1971)) && (((g_204 = l_1974) >= p_9.f1) & (0UL && (((safe_lshift_func_int8_t_s_s((1UL >= ((safe_add_func_uint8_t_u_u((g_960 = ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(l_1855, l_1861[0])) & 0xD66C6E6CCCC13FB6LL), p_11)) && p_11)), 0xE4L)) || g_1664[l_1965.f0][l_1965.f0])), 1)) < p_9.f3) >= 5L)))), 13))) & 0xBF7C987519753EF7LL)) , g_57));
                }
            }
            (****g_1158) = &l_1862[2];
        }
        else
        { 
            int32_t l_1992 = 0x2BBB3643L;
            int32_t l_2010 = (-1L);
            int16_t ***l_2026 = (void*)0;
            int16_t *** const *l_2025 = &l_2026;
            int32_t l_2033 = (-5L);
            int32_t l_2036 = (-8L);
            int32_t l_2037 = 0L;
            int32_t l_2038[6] = {0xB243A2B0L,0xB243A2B0L,0x139CEFF7L,0xB243A2B0L,0xB243A2B0L,0x139CEFF7L};
            int32_t **l_2048 = &g_328;
            struct S0 l_2086 = {0xC74AD3C3L,0x26EF7562L,1UL,0x62A182A9L,0UL};
            uint32_t l_2102 = 0xDF3BF17BL;
            union U2 l_2127 = {{0x043CF186L,-1L,65528UL,0x4E3FBEF2L,1UL}};
            int i;
            for (p_10 = 6; (p_10 > 52); ++p_10)
            { 
                uint8_t l_1997 = 0x18L;
                for (g_981.f0 = 25; (g_981.f0 != 6); g_981.f0--)
                { 
                    struct S0 l_2004 = {0xD18D37DBL,-6L,65535UL,-1L,8UL};
                    int64_t *l_2011 = &g_177;
                    int64_t *l_2016 = &g_204;
                    (*g_328) = (*g_328);
                    if (p_11)
                        break;
                    l_2004.f1 = ((safe_mul_func_uint16_t_u_u(l_1992, ((safe_lshift_func_uint8_t_u_s(((l_1861[0] &= (safe_lshift_func_uint16_t_u_u(((l_1997 == 0xA2L) && ((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u((++g_1419), (((*l_1824) = l_2004) , (safe_sub_func_int16_t_s_s((((*l_2011) = (~(safe_lshift_func_int8_t_s_s(l_2010, 3)))) , (safe_add_func_uint8_t_u_u(1UL, (safe_sub_func_int64_t_s_s(((*l_2016) = ((*l_2011) = l_1997)), 0xF18990D03E13FCECLL))))), p_9.f1))))), l_1992)) <= p_9.f1)), p_10))) , 0x0DL), 5)) & l_2004.f3))) | 249UL);
                    (*g_328) |= 0xC71C68E7L;
                }
            }
            for (g_927.f0 = 4; (g_927.f0 >= 0); g_927.f0 -= 1)
            { 
                int i;
                (*g_328) = g_61[(g_927.f0 + 1)];
            }
            for (g_552.f2.f1 = 0; (g_552.f2.f1 < 0); g_552.f2.f1++)
            { 
                const int8_t l_2027 = 0x73L;
                uint32_t *l_2028[3];
                int32_t l_2029 = 0xFA3B9D50L;
                int32_t **l_2031 = &g_328;
                int32_t l_2039 = 3L;
                int32_t l_2040 = 0xF7DA80DFL;
                int32_t l_2041 = 0x5B0F29EDL;
                int32_t l_2042 = 0xDDFAF9FAL;
                int32_t l_2043 = 1L;
                int32_t l_2044[2];
                uint16_t *l_2059 = &g_981.f2.f2;
                union U2 l_2070 = {{0xAACC4C4FL,9L,1UL,0x33EB69C8L,0x4E41L}};
                const int16_t l_2076 = 0xFF75L;
                uint64_t l_2099 = 0UL;
                union U1 *****l_2137 = (void*)0;
                uint32_t * const * const l_2156[5] = {&g_674,&g_674,&g_674,&g_674,&g_674};
                uint64_t l_2168 = 18446744073709551606UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_2028[i] = &g_1534.f2.f0;
                for (i = 0; i < 2; i++)
                    l_2044[i] = (-1L);
                if ((safe_mul_func_int8_t_s_s(((**g_1006) = ((0x7A57F295L == (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((0L && 0xA2L), ((l_2029 |= (g_927.f2.f0 = ((l_1861[0] , (l_2025 == (void*)0)) > l_2027))) != 0x86CDC625L))), p_9.f3))) & l_1992)), l_1900[1].f1)))
                { 
                    int32_t ***l_2030[1][5][6] = {{{&g_129,(void*)0,&g_129,&g_129,&g_129,&g_129},{&g_129,(void*)0,&g_129,&g_129,&g_129,&g_129},{&g_129,(void*)0,&g_129,&g_129,&g_129,&g_129},{&g_129,(void*)0,&g_129,&g_129,&g_129,&g_129},{&g_129,(void*)0,&g_129,&g_129,&g_129,&g_129}}};
                    int i, j, k;
                    (*g_328) |= 0x26258545L;
                    (*g_328) = ((**g_564) == (l_2031 = (*g_565)));
                }
                else
                { 
                    int32_t l_2032 = 0x551FFDF4L;
                    int32_t *l_2034 = &l_1862[1];
                    int32_t *l_2035[4][6] = {{&l_2029,&l_1855,&l_2029,&l_1855,&l_2029,&l_1855},{&l_2029,&l_1855,&l_2029,&l_1855,&l_2029,&l_1855},{&l_2029,&l_1855,&l_2029,&l_1855,&l_2029,&l_1855},{&l_2029,&l_1855,&l_2029,&l_1855,&l_2029,&l_1855}};
                    uint16_t **l_2049 = &g_408[2][2];
                    uint16_t **l_2050 = (void*)0;
                    uint16_t **l_2051 = (void*)0;
                    uint16_t **l_2052 = &g_408[4][1];
                    uint16_t **l_2053 = &g_408[3][0];
                    uint16_t **l_2054 = &g_408[4][1];
                    uint16_t **l_2055 = (void*)0;
                    uint16_t **l_2056 = &g_408[4][1];
                    uint16_t **l_2057 = &g_408[4][1];
                    int i, j;
                    if (p_9.f1)
                        break;
                    l_2045--;
                    (*l_2034) |= (p_10 == ((&l_2034 == l_2048) < ((l_2058 = (void*)0) == (l_2059 = &p_11))));
                    (**l_2048) |= l_1818[0][0][6];
                    return p_9.f3;
                }
                if ((((0x49L >= (safe_add_func_int8_t_s_s(l_1818[0][1][0], (safe_div_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((((*g_325) >= ((safe_add_func_uint32_t_u_u((l_2070 , 0x8E097BD5L), (safe_sub_func_int64_t_s_s(((((safe_add_func_uint32_t_u_u((g_206 = 0UL), 2L)) , l_2041) , l_2075) != p_9.f1), l_2076)))) ^ l_2075)) < 0x61L), g_41.f0)), 0x036EE39D2AA494CFLL)) > 0x25L), 0xA015L))))) < 0xF75B11EA7A00E740LL) >= p_10))
                { 
                    const int32_t l_2081 = 8L;
                    int32_t *l_2094 = &l_2041;
                    int32_t l_2095 = (-1L);
                    int32_t *l_2096 = &l_2038[5];
                    int32_t *l_2097[6] = {&l_2039,&l_2039,&l_2039,&l_2039,&l_2039,&l_2039};
                    int i;
                    (*l_2094) |= (safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s(p_9.f1, (0xDA11L == (l_2081 ^ (safe_mod_func_uint32_t_u_u((l_1859[0] |= (**l_2048)), p_11)))))), (safe_mul_func_int16_t_s_s((l_2086 , (+((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((l_1824 != &l_1900[1]), l_2081)), 0)), g_221.f1)) < g_981.f3))), 0UL))));
                    l_2099++;
                    ++l_2102;
                    return p_9.f3;
                }
                else
                { 
                    int32_t l_2107 = 0L;
                    int64_t *l_2126 = &g_61[4];
                    int16_t * const l_2145 = &g_2146;
                    int16_t * const *l_2144 = &l_2145;
                    int16_t * const **l_2143 = &l_2144;
                    int32_t l_2157 = 0x3ACEAABDL;
                    int32_t ***l_2166 = &g_129;
                    l_1855 |= (safe_sub_func_int64_t_s_s(l_2107, (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((((*l_2126) |= (safe_unary_minus_func_int8_t_s(((**g_1006) = (l_1861[0] |= (((safe_mul_func_int8_t_s_s((-9L), (l_1898 >= (safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((1L && (g_1762[3][1][0].f0.f4 , 18446744073709551615UL)), 4)), (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_11, 0x10L)), (**g_1006))), l_2125))))))) ^ g_1764.f0.f1) == 0x63CD11B7L)))))) , l_2127) , (**g_341)), 255UL)), l_1900[1].f0))));
                    l_2157 &= (l_2039 |= (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((((p_9.f1 >= ((((*l_2126) = (((**l_2048) |= ((safe_mod_func_int16_t_s_s(((!1L) < (((((((((**g_1918) ^= (l_2137 == l_2138)) && ((**g_1917) = ((safe_mul_func_uint16_t_u_u((~(((((((*l_2143) = &g_325) != (((l_2107 = (p_11 , ((safe_lshift_func_int16_t_s_s((+(safe_sub_func_uint32_t_u_u(((((p_10 >= l_2107) , &g_204) == (void*)0) == l_1862[2]), p_9.f3))), l_1862[0])) , 1L))) ^ g_1762[3][1][0].f0.f4) , (void*)0)) <= 0x42C64B7FL) , g_2152) != (void*)0) , l_2107)), p_9.f1)) <= l_2075))) , p_9.f3) <= p_9.f1) > l_1855) , (void*)0) == l_2154) <= 1UL)), p_9.f1)) | g_633.f3)) ^ p_10)) , l_2155) == l_2156[0])) > l_1818[0][2][1]) == g_981.f3), 0xF054L)) == 0x04L), p_9.f1)), p_9.f3)));
                    (**l_2048) &= (safe_div_func_uint8_t_u_u((l_2075 , (safe_mod_func_uint32_t_u_u((((safe_add_func_uint64_t_u_u((((safe_sub_func_int16_t_s_s(((void*)0 == l_2166), p_10)) <= (g_152[3].f1 , p_10)) , (~(((((**g_1918) && 0UL) != p_11) , p_10) , l_2168))), g_41.f4)) < p_10) , g_363), p_10))), 0xF7L));
                    if (l_1900[1].f2)
                        continue;
                }
            }
            g_221.f2 = l_1900[1];
            l_2036 &= (p_11 >= ((safe_rshift_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_s((((*g_1918) == (*l_2154)) , (safe_mod_func_uint16_t_u_u((((**l_2048) , l_2177) < ((safe_div_func_uint8_t_u_u(0x88L, l_1855)) | 0xE2CDL)), 0xF8D0L))), 8)) , &l_2075) != &l_2075) , p_10), l_1859[0])) && 0UL));
        }
    }
    return p_11;
}



static const union U1  func_12(int16_t  p_13)
{ 
    uint64_t *l_1284 = &g_114;
    const int32_t l_1289 = 0x908D9126L;
    union U1 l_1314 = {0xEE9AE30FL};
    int32_t l_1345 = 0x52F2614CL;
    int32_t l_1346 = 1L;
    int32_t l_1347 = 0xCE110D73L;
    int32_t l_1348 = 0x5A89E695L;
    int32_t l_1349 = 0xF8E1815DL;
    int32_t l_1350 = 0x423D406EL;
    int32_t l_1356 = 0xB82E5E55L;
    int32_t l_1357 = (-5L);
    int32_t l_1358 = 1L;
    int32_t l_1359[2][6];
    uint16_t l_1360 = 0x66B4L;
    int32_t ***l_1370[4][4] = {{&g_129,&g_129,&g_129,&g_129},{&g_129,&g_129,&g_129,&g_129},{&g_129,&g_129,&g_129,&g_129},{&g_129,&g_129,&g_129,&g_129}};
    const int8_t *l_1415 = &g_152[3].f3;
    uint64_t l_1416 = 0xC131887D92940432LL;
    struct S0 l_1503[3][4][2] = {{{{0x2225A58DL,1L,0x3103L,-2L,0x8809L},{1UL,7L,0x6A00L,0x29843589L,2UL}},{{1UL,-3L,0x8F04L,0x258D8151L,4UL},{0x2225A58DL,1L,0x3103L,-2L,0x8809L}},{{0x544ABB56L,0L,65535UL,-1L,65533UL},{0x544ABB56L,0L,65535UL,-1L,65533UL}},{{0x544ABB56L,0L,65535UL,-1L,65533UL},{0x2225A58DL,1L,0x3103L,-2L,0x8809L}}},{{{1UL,-3L,0x8F04L,0x258D8151L,4UL},{1UL,7L,0x6A00L,0x29843589L,2UL}},{{0x2225A58DL,1L,0x3103L,-2L,0x8809L},{1UL,7L,0x6A00L,0x29843589L,2UL}},{{1UL,-3L,0x8F04L,0x258D8151L,4UL},{0x2225A58DL,1L,0x3103L,-2L,0x8809L}},{{0x544ABB56L,0L,65535UL,-1L,65533UL},{0x544ABB56L,0L,65535UL,-1L,65533UL}}},{{{0x544ABB56L,0L,65535UL,-1L,65533UL},{0x2225A58DL,1L,0x3103L,-2L,0x8809L}},{{1UL,-3L,0x8F04L,0x258D8151L,4UL},{1UL,7L,0x6A00L,0x29843589L,2UL}},{{0x2225A58DL,1L,0x3103L,-2L,0x8809L},{1UL,7L,0x6A00L,0x29843589L,2UL}},{{1UL,-3L,0x8F04L,0x258D8151L,4UL},{0x2225A58DL,1L,0x3103L,-2L,0x8809L}}}};
    union U2 *l_1521 = &g_1522[0];
    int8_t l_1544 = 1L;
    uint64_t l_1623 = 0x18AC01C88DF22535LL;
    uint32_t l_1639 = 8UL;
    int32_t l_1640 = (-8L);
    const union U1 l_1647[6][4] = {{{0xC3F8284DL},{0xC3F8284DL},{0x12748E2BL},{5L}},{{0xEC027968L},{0x6E996FDFL},{0xEC027968L},{0x12748E2BL}},{{0xEC027968L},{0x12748E2BL},{0x12748E2BL},{0xEC027968L}},{{0xC3F8284DL},{0x12748E2BL},{5L},{0x12748E2BL}},{{0x12748E2BL},{0x6E996FDFL},{5L},{5L}},{{0xC3F8284DL},{0xC3F8284DL},{0x12748E2BL},{5L}}};
    int16_t * const *l_1752 = (void*)0;
    int16_t * const * const *l_1751 = &l_1752;
    int16_t * const * const **l_1750 = &l_1751;
    const union U2 *l_1765 = (void*)0;
    union U1 *****l_1768 = (void*)0;
    int8_t l_1769 = 0x70L;
    int32_t *l_1773 = &l_1348;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
            l_1359[i][j] = 0L;
    }
    for (g_1137.f2.f2 = (-29); (g_1137.f2.f2 == 2); g_1137.f2.f2 = safe_add_func_int32_t_s_s(g_1137.f2.f2, 1))
    { 
        uint32_t l_1296 = 7UL;
        int32_t l_1297 = 0L;
        const union U1 l_1300 = {0x1F57D135L};
        int32_t l_1318 = 0xB0475A3FL;
        uint16_t *l_1339 = &g_927.f1;
        uint32_t l_1340 = 0UL;
        struct S0 l_1342 = {0x45232F00L,-5L,0UL,-9L,0xB52AL};
        int32_t l_1355[4] = {1L,1L,1L,1L};
        union U1 * const ***l_1407 = &g_222;
        union U1 * const ****l_1406 = &l_1407;
        const uint64_t l_1408 = 9UL;
        const int64_t *l_1459[6];
        const union U1 l_1463 = {0xCCC27F5AL};
        uint32_t l_1489 = 18446744073709551615UL;
        uint8_t *l_1507 = &g_446;
        uint8_t **l_1506 = &l_1507;
        union U1 *l_1533 = &g_1534;
        uint32_t l_1549 = 6UL;
        int32_t *l_1564 = &l_1346;
        union U2 l_1568 = {{0x5018F511L,0x3CB80139L,0xBD98L,-9L,0x4959L}};
        int i;
        for (i = 0; i < 6; i++)
            l_1459[i] = (void*)0;
    }
    (*g_328) = (safe_add_func_uint8_t_u_u(l_1639, (g_41.f2 == ((l_1503[0][2][0] , (void*)0) != ((**g_1161) = &l_1360)))));
    if ((l_1647[5][0] , p_13))
    { 
        int64_t l_1651 = 0x23A5C76890F82F57LL;
        int32_t l_1654 = 9L;
        int32_t l_1657 = 0x6D44F8A8L;
        int32_t l_1659 = 0x2C3A9E11L;
        int32_t l_1660 = 0xB64D521CL;
        int32_t l_1661 = (-1L);
        int32_t l_1663[5][5] = {{0L,0x9E57C071L,0x9E57C071L,0L,0xCE6A9E1CL},{0L,0x9E57C071L,0x9E57C071L,0L,0xCE6A9E1CL},{0L,0x9E57C071L,0x9E57C071L,0L,0xCE6A9E1CL},{0L,0x9E57C071L,0x9E57C071L,0L,0xCE6A9E1CL},{0L,0x9E57C071L,0x9E57C071L,0L,0xCE6A9E1CL}};
        int32_t *l_1667 = &g_1167.f2.f3;
        int i, j;
        for (g_960 = 0; (g_960 < 46); g_960 = safe_add_func_uint32_t_u_u(g_960, 6))
        { 
            int32_t l_1650 = (-6L);
            int32_t l_1652 = 0L;
            int32_t l_1653 = 0xDA80B5C8L;
            int32_t l_1655 = (-8L);
            int32_t l_1656 = 0xB548B026L;
            int32_t l_1658 = 0x641014BFL;
            int32_t l_1662[4] = {(-1L),(-1L),(-1L),(-1L)};
            int i;
            g_1664[0][0]--;
            l_1667 = &l_1662[1];
            l_1667 = ((***g_564) = &l_1657);
        }
    }
    else
    { 
        uint64_t l_1682[2];
        int32_t *l_1693 = (void*)0;
        int32_t l_1698 = 0x1FAA51F9L;
        int32_t l_1699 = 0x6F719F74L;
        int32_t l_1701[4] = {0x4C03A4DFL,0x4C03A4DFL,0x4C03A4DFL,0x4C03A4DFL};
        int32_t l_1710[5][6] = {{0x2B7A5FCCL,0x2B7A5FCCL,0L,(-1L),0x28092992L,(-1L)},{0xFB3C82B5L,0x2B7A5FCCL,0xFB3C82B5L,0L,0x2B7A5FCCL,0x2B7A5FCCL},{0xFB3C82B5L,(-1L),(-1L),0xFB3C82B5L,0x28092992L,(-9L)},{(-9L),0xFB3C82B5L,0x2B7A5FCCL,0xFB3C82B5L,(-9L),0L},{0xFB3C82B5L,(-9L),0L,0L,(-9L),0xFB3C82B5L}};
        uint32_t * const *l_1736 = &g_674;
        uint32_t * const **l_1735 = &l_1736;
        uint32_t * const ***l_1734 = &l_1735;
        union U1 *l_1758 = &g_1759;
        uint32_t l_1770 = 0x2886D74BL;
        int16_t ****l_1789 = (void*)0;
        uint64_t l_1802 = 1UL;
        uint8_t *l_1807 = &g_1419;
        uint32_t *l_1810 = &g_1664[0][0];
        int64_t *l_1815 = &g_204;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1682[i] = 0x1D9A40B37ABE2B18LL;
        for (g_981.f1 = 0; (g_981.f1 <= 18); g_981.f1 = safe_add_func_uint16_t_u_u(g_981.f1, 7))
        { 
            int16_t **l_1675 = &g_325;
            int16_t ***l_1674 = &l_1675;
            int32_t l_1683 = 0x3196C73AL;
            union U1 **l_1716[2];
            int32_t l_1738 = (-2L);
            int32_t l_1739[7] = {0x4D54124BL,0x4D54124BL,0x4D54124BL,0x4D54124BL,0x4D54124BL,0x4D54124BL,0x4D54124BL};
            union U1 ****l_1767[1];
            union U1 *****l_1766 = &l_1767[0];
            int i;
            for (i = 0; i < 2; i++)
                l_1716[i] = &g_220;
            for (i = 0; i < 1; i++)
                l_1767[i] = &g_218;
            if ((safe_div_func_uint32_t_u_u((((((((((**g_1006) = p_13) != ((safe_lshift_func_uint16_t_u_u((g_1419 || ((*g_328) = (((void*)0 == l_1674) , (safe_mul_func_uint8_t_u_u(0xE7L, (safe_rshift_func_uint8_t_u_u(g_63.f3, ((safe_sub_func_int8_t_s_s(((p_13 & (*g_325)) ^ p_13), l_1682[0])) || l_1683)))))))), p_13)) | 0x28L)) ^ p_13) , l_1682[0]) & g_486) <= p_13) , 65535UL) != (*g_325)), l_1683)))
            { 
                int16_t ***l_1691 = &l_1675;
                uint8_t *l_1692 = &g_446;
                int32_t *l_1694 = &g_552.f2.f1;
                if ((!((p_13 | 0x3DF27FCCL) ^ ((*l_1692) = (safe_lshift_func_int8_t_s_s((l_1682[0] || (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(l_1682[0], ((((**g_673) &= (p_13 | (g_1522[0].f0 , g_61[6]))) , p_13) , 0UL))) >= p_13), p_13))), 6))))))
                { 
                    if ((*g_328))
                        break;
                    (**g_565) = l_1693;
                    l_1694 = (**g_565);
                    (*g_328) ^= (&g_381[3][0][1] == &g_57);
                    (*g_129) = (***g_564);
                }
                else
                { 
                    const union U1 l_1695 = {0xFBA61242L};
                    if (p_13)
                        break;
                    return l_1695;
                }
            }
            else
            { 
                uint32_t l_1702 = 18446744073709551615UL;
                for (g_42 = 28; (g_42 > 30); ++g_42)
                { 
                    int16_t l_1700 = (-8L);
                    (*g_328) = 9L;
                    l_1702--;
                    if (l_1683)
                        continue;
                    (*g_328) |= (p_13 >= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(0xE6L, 2)), 12)));
                    (*g_129) = &l_1683;
                }
                if (p_13)
                    continue;
            }
            if ((*g_328))
                break;
        }
        ++l_1770;
        (**g_565) = l_1773;
        for (g_221.f2.f1 = (-3); (g_221.f2.f1 < (-30)); g_221.f2.f1--)
        { 
            struct S0 *l_1776 = &l_1314.f2;
            int32_t l_1780 = 0x3AEB1B0BL;
            int16_t *****l_1790 = &l_1789;
            const uint32_t *l_1791 = (void*)0;
            const uint32_t **l_1792 = &l_1791;
            uint16_t *l_1801[1][5] = {{&g_63.f4,&g_63.f4,&g_63.f4,&g_63.f4,&g_63.f4}};
            int32_t l_1803 = 0x57F516DCL;
            uint32_t *l_1804 = &g_1759.f2.f0;
            int32_t l_1805 = 0x5998BBEDL;
            int32_t *l_1806 = &g_1137.f2.f3;
            int i, j;
            (*l_1776) = g_368[0].f0;
            l_1806 = (((!(((safe_mul_func_int16_t_s_s((((l_1780 <= ((l_1805 ^= (safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((g_907 &= (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((&l_1751 != ((*l_1790) = l_1789)) <= p_13), p_13)), (((*l_1792) = l_1791) == (((safe_div_func_uint8_t_u_u((((*l_1804) = (~(l_1803 &= (l_1802 = (+(((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((((((g_1522[0].f0.f3 && 0x1208D2D635A6CB86LL) < l_1780) ^ g_368[0].f0.f2) , 0x22L) & p_13), (*g_325))) || 0x0C530AEBL), (*l_1773))) == (-3L)) & (*l_1773))))))) && p_13), 1L)) | (**g_1006)) , (*g_673)))))) , p_13), 0x0DL)) | p_13), (-9L)))) > p_13)) < 0x46L) != p_13), p_13)) && l_1803) >= p_13)) & 0UL) , (void*)0);
        }
        (*g_130) = ((l_1807 == l_1807) || ((g_63.f0 ^ (*l_1773)) == ((((*l_1815) &= (((*l_1807) = 2UL) < (((((safe_add_func_uint32_t_u_u(((*l_1810) = p_13), (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(255UL, 1)) != 0x3515L), 5)))) || 0xB00C461FL) >= 0L) || g_1534.f0) | (*l_1773)))) & g_486) || l_1710[2][1])));
    }
    return (**g_219);
}



static int16_t  func_14(int32_t  p_15, int8_t  p_16, int16_t  p_17)
{ 
    (*g_328) ^= ((void*)0 != (*g_1161));
    return p_16;
}



static const union U1  func_22(struct S0  p_23, uint8_t  p_24, uint32_t  p_25, struct S0  p_26, int64_t  p_27)
{ 
    int8_t l_1073 = 0L;
    struct S0 *l_1076 = &g_41;
    int8_t **l_1085 = &g_1007[2][1];
    int32_t l_1086[5];
    int32_t *l_1087 = &g_519[1];
    int32_t l_1099 = 2L;
    union U2 *l_1102 = &g_368[0];
    int16_t **l_1112 = &g_325;
    uint64_t *l_1123[3][7][4] = {{{&g_334,&g_114,(void*)0,&g_334},{&g_334,(void*)0,&g_334,&g_334},{&g_334,&g_334,(void*)0,(void*)0},{&g_334,&g_334,&g_334,&g_114},{(void*)0,&g_114,&g_334,&g_334},{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_334,&g_334,(void*)0}},{{(void*)0,&g_334,(void*)0,&g_334},{&g_334,(void*)0,(void*)0,&g_334},{(void*)0,&g_114,&g_334,&g_114},{&g_114,&g_114,&g_114,(void*)0},{&g_114,(void*)0,&g_334,(void*)0},{(void*)0,&g_114,&g_334,&g_114},{&g_334,&g_114,(void*)0,&g_334}},{{&g_334,(void*)0,&g_334,&g_334},{&g_334,&g_334,(void*)0,(void*)0},{&g_334,&g_334,&g_334,&g_114},{(void*)0,&g_114,&g_334,&g_334},{&g_114,&g_114,&g_114,&g_114},{&g_114,&g_334,&g_334,(void*)0},{(void*)0,&g_334,(void*)0,&g_334}}};
    union U1 *l_1135 = &g_927;
    uint32_t l_1163 = 1UL;
    union U1 * const l_1166 = &g_1167;
    union U1 * const *l_1165 = &l_1166;
    uint16_t l_1218 = 9UL;
    int32_t l_1224 = (-5L);
    union U1 *l_1250 = &g_1167;
    union U1 ** const l_1249 = &l_1250;
    union U1 ** const *l_1248 = &l_1249;
    union U1 ** const **l_1247 = &l_1248;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1086[i] = (-1L);
    (*l_1076) = (g_221.f0 , func_28((safe_add_func_int8_t_s_s(l_1073, ((l_1086[3] = (((safe_mul_func_uint16_t_u_u(((l_1076 != l_1076) & (((safe_unary_minus_func_uint8_t_u(((~g_221.f1) <= ((safe_sub_func_int64_t_s_s((safe_div_func_uint64_t_u_u(((void*)0 != l_1085), g_927.f1)), g_519[1])) | (**g_1006))))) > 0UL) <= 1L)), 65535UL)) | 0x145EE9C9L) < g_326)) != g_41.f3))), (**g_341), (*l_1076), p_23.f1, p_23.f0));
    (*l_1087) ^= (((*g_328) = p_26.f0) ^ l_1086[0]);
    for (g_927.f2.f0 = 6; (g_927.f2.f0 < 56); g_927.f2.f0 = safe_add_func_int64_t_s_s(g_927.f2.f0, 7))
    { 
        uint64_t l_1100[5] = {7UL,7UL,7UL,7UL,7UL};
        int32_t *l_1101 = &g_633.f2.f1;
        struct S0 l_1109 = {4294967295UL,0xDF62AB77L,0x3E37L,1L,0UL};
        int16_t **l_1114 = &g_325;
        int16_t ***l_1113 = &l_1114;
        int64_t *l_1117 = &g_204;
        uint16_t l_1126 = 0x0A2DL;
        uint8_t *l_1129 = (void*)0;
        int32_t l_1173 = (-5L);
        const union U1 l_1206 = {0xF108A0EEL};
        int16_t *l_1211 = &g_907;
        uint32_t l_1223 = 0xCAD7FE7BL;
        int i;
        l_1086[3] ^= ((*g_325) && (((*l_1087) , ((safe_mul_func_uint8_t_u_u(((*l_1087) && ((*g_328) = (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(p_23.f4)), 2L)))), (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((((p_27 | (((p_25 | p_27) != l_1099) == (*l_1087))) || p_26.f2) > l_1100[0]), p_26.f2)), g_41.f0)))) | 0x0711FBE2011B69AALL)) <= 0xE0L));
        (*g_328) &= (((void*)0 != l_1102) <= ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((*l_1102) , (((((*l_1087) > (!p_23.f4)) && ((*l_1087) , (+(((l_1109 = g_368[0].f0) , 0x739903FE0DF1F707LL) & p_25)))) ^ 8L) > 18446744073709551606UL)), (*l_1087))), 65535UL)) && g_152[3].f1));
        if ((safe_mul_func_uint16_t_u_u((((*g_325) |= (l_1112 != ((*l_1113) = (void*)0))) , (safe_div_func_int64_t_s_s((((*l_1117) |= g_552.f1) , (safe_unary_minus_func_int64_t_s(0L))), (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((g_446 = (l_1123[2][2][3] != l_1123[0][1][2])), (p_24 = ((--g_114) & (--l_1126))))), (p_23.f4 ^ p_23.f3)))))), 0x46FCL)))
        { 
            union U1 *l_1136 = &g_1137;
            for (g_41.f4 = 0; (g_41.f4 == 9); g_41.f4++)
            { 
                struct S0 *l_1132 = &g_63;
                int32_t *l_1133 = &g_519[1];
                (*l_1132) = g_41;
                (*l_1132) = g_368[0].f0;
                if ((g_927.f3 < g_132))
                { 
                    int32_t l_1134 = 0xC18860E7L;
                    (**g_565) = l_1133;
                    if (l_1134)
                        continue;
                    (*g_129) = (***g_564);
                    g_367 = &g_368[0];
                }
                else
                { 
                    (*g_129) = l_1101;
                    (*g_328) &= (*l_1133);
                    l_1136 = l_1135;
                    (*g_129) = (*g_129);
                }
            }
        }
        else
        { 
            uint32_t l_1140 = 18446744073709551607UL;
            int32_t l_1154[5][7];
            uint32_t l_1155 = 0xA425C22FL;
            union U1 * const *l_1164 = (void*)0;
            struct S0 l_1202 = {0x2B6450ECL,-10L,0x50ECL,0x353B9E55L,65535UL};
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1154[i][j] = 1L;
            }
            (*l_1087) = (((0x67D43BE6L >= (l_1087 == (*g_673))) || ((p_26.f1 >= (p_23.f1 && ((safe_lshift_func_int8_t_s_u(((*l_1087) <= (((*l_1087) > (-10L)) , l_1140)), g_132)) > (*l_1087)))) && 0x6BE1L)) ^ p_23.f0);
            for (g_633.f1 = (-24); (g_633.f1 <= 51); g_633.f1 = safe_add_func_int8_t_s_s(g_633.f1, 2))
            { 
                int32_t l_1153 = 2L;
                for (g_552.f2.f0 = (-1); (g_552.f2.f0 >= 8); g_552.f2.f0 = safe_add_func_int16_t_s_s(g_552.f2.f0, 1))
                { 
                    int32_t *l_1145 = &g_132;
                    int32_t *l_1146 = &g_1137.f2.f3;
                    int32_t *l_1147 = &g_41.f1;
                    int32_t *l_1148 = &l_1086[3];
                    int32_t l_1149[5];
                    int32_t *l_1150 = &l_1149[2];
                    int32_t *l_1151 = (void*)0;
                    int32_t *l_1152[5][7] = {{&g_41.f3,&g_41.f3,&l_1086[3],&g_41.f3,&g_41.f3,&l_1086[3],&g_41.f3},{&g_519[1],&l_1149[0],&l_1149[0],&g_519[1],&l_1149[0],&l_1149[0],&g_519[1]},{&g_41.f1,&g_41.f3,&g_41.f1,&g_41.f1,&g_41.f3,&g_41.f1,&g_41.f1},{&g_519[1],&g_519[1],&l_1149[2],&g_519[1],&g_519[1],&l_1149[2],&g_519[1]},{&g_41.f3,&g_41.f1,&g_41.f1,&g_41.f3,&g_41.f1,&g_41.f1,&g_41.f3}};
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1149[i] = 0x49CB4E42L;
                    --l_1155;
                }
                g_1158 = &g_564;
                for (g_63.f3 = 0; (g_63.f3 > 13); g_63.f3 = safe_add_func_int32_t_s_s(g_63.f3, 7))
                { 
                    l_1163 &= ((p_23.f1 , ((l_1155 & p_23.f2) , g_1161)) == (void*)0);
                    (***g_564) = (void*)0;
                }
            }
            if ((&l_1135 != (l_1165 = ((*l_1087) , l_1164))))
            { 
                struct S0 **l_1168 = &l_1076;
                int32_t *l_1169 = &l_1086[3];
                int32_t *l_1170 = &g_40;
                int32_t *l_1171 = &l_1109.f1;
                int32_t *l_1172 = &g_981.f2.f1;
                int32_t *l_1174 = (void*)0;
                int32_t *l_1175 = (void*)0;
                int32_t *l_1176 = &l_1154[4][2];
                int32_t *l_1177 = (void*)0;
                int32_t *l_1178 = &l_1173;
                int32_t *l_1179 = &g_981.f2.f3;
                int32_t *l_1180 = &l_1154[3][1];
                int32_t *l_1181 = &g_981.f2.f3;
                int32_t *l_1182 = (void*)0;
                int32_t *l_1183 = (void*)0;
                int32_t *l_1184 = (void*)0;
                int32_t *l_1185 = (void*)0;
                int32_t *l_1186 = &g_40;
                int32_t *l_1187 = &g_63.f1;
                int32_t *l_1188 = (void*)0;
                int32_t *l_1189 = &g_63.f1;
                int32_t *l_1190 = &g_40;
                int32_t *l_1191 = (void*)0;
                int32_t *l_1192 = &l_1086[0];
                int32_t l_1193[5][3] = {{0L,0L,0x6D4875A4L},{0L,0L,0L},{7L,0L,0L},{0L,(-1L),0x6D4875A4L},{7L,(-1L),7L}};
                int32_t *l_1194 = &g_41.f1;
                int32_t *l_1195[1];
                uint32_t l_1196 = 0x8945118FL;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1195[i] = &g_132;
                p_23.f3 = (*l_1087);
                (*l_1168) = &p_26;
                ++l_1196;
                if (p_26.f4)
                    break;
            }
            else
            { 
                uint8_t l_1199 = 255UL;
                ++l_1199;
            }
            (*l_1076) = l_1202;
        }
        l_1086[3] &= (safe_unary_minus_func_uint16_t_u(((l_1206 , p_27) && ((((g_374 = (g_907 |= (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((l_1211 != ((*l_1112) = (*l_1112))) < (safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((safe_mod_func_int8_t_s_s(l_1218, (((((((safe_rshift_func_int8_t_s_u(((~p_26.f1) < ((+(255UL < 0UL)) | 0x6660536C37B36778LL)), 3)) , (*g_1006)) == (*l_1085)) , g_1137.f0) & p_25) < 0x7ACCBF55L) && 4294967286UL))) < l_1223) || 0x266197FA3BA56E2ELL), 1L)), p_23.f4))), g_927.f3)), g_519[2])))) && l_1224) && l_1100[0]) == (-2L)))));
    }
    for (g_324 = 0; (g_324 <= 26); ++g_324)
    { 
        int16_t l_1245 = 0x84CAL;
        int32_t l_1261 = 0xFCFC1B48L;
        int32_t l_1263[1];
        uint16_t l_1267 = 0UL;
        const union U1 l_1271[3][4] = {{{0xF264BD7DL},{0xDE6BC550L},{0xF264BD7DL},{0xDE6BC550L}},{{0xF264BD7DL},{0xDE6BC550L},{0xF264BD7DL},{0xDE6BC550L}},{{0xF264BD7DL},{0xDE6BC550L},{0xF264BD7DL},{0xDE6BC550L}}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1263[i] = 0xB8E1A30DL;
        for (g_215 = 14; (g_215 == 50); g_215 = safe_add_func_uint32_t_u_u(g_215, 2))
        { 
            int32_t l_1260 = 0xD4B23860L;
            int32_t l_1262[6] = {1L,1L,1L,1L,1L,1L};
            int i;
            for (g_981.f2.f2 = 21; (g_981.f2.f2 >= 18); g_981.f2.f2 = safe_sub_func_int32_t_s_s(g_981.f2.f2, 8))
            { 
                uint8_t *l_1235 = (void*)0;
                uint8_t *l_1236[1][7] = {{&g_446,&g_446,&g_960,&g_960,&g_446,&g_960,&g_960}};
                int32_t l_1242 = 9L;
                struct S0 *l_1243[7][6] = {{&g_63,&g_63,(void*)0,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63,&g_63,(void*)0},{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63},{(void*)0,&g_63,(void*)0,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63,(void*)0,&g_63},{&g_221.f2,&g_63,&g_63,&g_63,&g_63,&g_221.f2},{&g_63,&g_63,&g_63,&g_63,&g_63,&g_63}};
                union U1 ** const ***l_1246 = (void*)0;
                int32_t l_1264 = (-9L);
                int32_t l_1265 = 0xB6DC9D13L;
                int32_t l_1266 = 1L;
                int i, j;
                l_1242 = (((*l_1087) , (l_1247 = ((safe_sub_func_uint64_t_u_u((*l_1087), (safe_div_func_uint64_t_u_u(((((((p_23 = ((*l_1076) = g_41)) , g_1244) , (*l_1087)) > 0x2A25232CL) & 1UL) <= 18446744073709551610UL), l_1245)))) , (void*)0))) != &g_218);
                for (g_221.f2.f3 = (-19); (g_221.f2.f3 < (-15)); g_221.f2.f3 = safe_add_func_uint32_t_u_u(g_221.f2.f3, 8))
                { 
                    int32_t *l_1253 = (void*)0;
                    int32_t *l_1254 = (void*)0;
                    int32_t *l_1255 = &g_41.f1;
                    int32_t *l_1256 = &g_63.f1;
                    int32_t *l_1257 = &g_40;
                    int32_t *l_1258 = &g_1137.f2.f1;
                    int32_t *l_1259[4] = {&l_1099,&l_1099,&l_1099,&l_1099};
                    struct S0 **l_1270[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1270[i] = &l_1243[1][3];
                    l_1267--;
                    p_26.f1 = ((*g_328) = (0x49L <= (65533UL | ((*g_325) = (*g_325)))));
                    (*g_129) = &l_1264;
                    l_1076 = &g_63;
                }
            }
        }
        return l_1271[2][2];
    }
    return (***g_218);
}



static struct S0  func_28(uint16_t  p_29, int8_t  p_30, struct S0  p_31, int8_t  p_32, uint16_t  p_33)
{ 
    uint8_t l_36[4][3] = {{3UL,3UL,3UL},{1UL,1UL,1UL},{3UL,3UL,3UL},{1UL,1UL,1UL}};
    int32_t *l_37[6] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
    uint64_t *l_658[3][1];
    int64_t l_666[1][6];
    union U1 **l_679[3][4] = {{&g_220,&g_220,&g_220,&g_220},{&g_220,&g_220,&g_220,&g_220},{&g_220,&g_220,&g_220,&g_220}};
    uint32_t l_687 = 3UL;
    int16_t *l_727 = (void*)0;
    uint16_t **l_728 = &g_408[2][1];
    uint32_t l_729[5][5] = {{4294967288UL,4294967288UL,0x8193D98AL,0x8193D98AL,4294967288UL},{4294967295UL,0UL,4294967295UL,0UL,4294967295UL},{4294967288UL,0x8193D98AL,0x8193D98AL,4294967288UL,4294967288UL},{0xB5181E69L,0UL,0xB5181E69L,0UL,0xB5181E69L},{4294967288UL,4294967288UL,0x8193D98AL,0x8193D98AL,4294967288UL}};
    int64_t *l_732 = (void*)0;
    int64_t *l_733 = (void*)0;
    int64_t *l_734 = &g_204;
    uint8_t l_761 = 2UL;
    int32_t l_771[1][5][5] = {{{0x94F416DEL,1L,0x94F416DEL,3L,1L},{(-1L),0x89A643B6L,3L,(-1L),3L},{(-1L),(-1L),7L,1L,(-7L)},{0x94F416DEL,(-7L),3L,3L,(-7L)},{(-7L),0x89A643B6L,0x94F416DEL,(-7L),3L}}};
    int8_t l_826 = 0x36L;
    union U2 *l_870 = &g_368[0];
    uint8_t *l_904 = &g_446;
    int8_t *l_1004 = &g_119;
    int8_t **l_1003 = &l_1004;
    int8_t ***l_1002 = &l_1003;
    struct S0 l_1070 = {4294967286UL,0L,1UL,-10L,0xBF70L};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_658[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_666[i][j] = (-3L);
    }
    for (p_31.f2 = 0; (p_31.f2 <= 2); p_31.f2 += 1)
    { 
        int32_t **l_38 = (void*)0;
        int32_t *l_39 = &g_40;
        int32_t l_663 = 0x6A3990DBL;
        union U1 **l_678[3][6][6] = {{{(void*)0,&g_220,&g_220,&g_220,(void*)0,&g_220},{&g_220,&g_220,&g_220,&g_220,&g_220,&g_220},{&g_220,(void*)0,(void*)0,&g_220,(void*)0,&g_220},{&g_220,&g_220,&g_220,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220,&g_220,&g_220},{&g_220,(void*)0,&g_220,&g_220,&g_220,&g_220}},{{&g_220,&g_220,&g_220,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220,&g_220,&g_220},{&g_220,&g_220,&g_220,&g_220,&g_220,&g_220},{&g_220,&g_220,(void*)0,&g_220,&g_220,&g_220},{&g_220,&g_220,(void*)0,&g_220,(void*)0,(void*)0},{&g_220,&g_220,&g_220,&g_220,&g_220,(void*)0}},{{&g_220,&g_220,&g_220,(void*)0,&g_220,(void*)0},{(void*)0,(void*)0,(void*)0,&g_220,&g_220,&g_220},{&g_220,&g_220,&g_220,&g_220,&g_220,(void*)0},{&g_220,&g_220,&g_220,&g_220,&g_220,&g_220},{&g_220,&g_220,&g_220,&g_220,&g_220,&g_220},{(void*)0,&g_220,(void*)0,(void*)0,&g_220,&g_220}}};
        int32_t l_688 = 0x0ADF89EFL;
        int32_t l_689 = 0x91276124L;
        int32_t l_690 = 1L;
        int32_t l_691 = 0L;
        int32_t l_695[6] = {0L,0L,0L,0L,0L,0L};
        int i, j, k;
        l_39 = l_37[2];
        for (g_40 = 0; (g_40 <= 2); g_40 += 1)
        { 
            int32_t l_644[5];
            int32_t l_657 = (-8L);
            uint16_t l_668 = 1UL;
            uint8_t *l_675 = &l_36[0][1];
            int32_t l_692 = 0xB6FB0689L;
            int32_t l_694[4];
            union U1 l_707 = {0x1599A7B7L};
            int i;
            for (i = 0; i < 5; i++)
                l_644[i] = 0x3FD62F6EL;
            for (i = 0; i < 4; i++)
                l_694[i] = 0xDFBD9E0BL;
            for (p_33 = 0; (p_33 <= 2); p_33 += 1)
            { 
                uint32_t *l_56 = &g_57;
                uint8_t l_653 = 0xA0L;
                union U1 l_654 = {1L};
                int32_t l_662 = (-3L);
                int32_t l_664 = 0x27D1A792L;
                int32_t l_693 = 5L;
                int32_t l_696[2][5] = {{0x60F221EAL,0x60F221EAL,0x60F221EAL,0x60F221EAL,0x60F221EAL},{(-8L),0x756D986CL,(-8L),0x756D986CL,(-8L)}};
                uint32_t l_698 = 0x1761E07FL;
                int64_t *l_709 = (void*)0;
                int64_t *l_710 = &g_204;
                int8_t *l_711 = &g_119;
                int i, j;
                for (p_29 = 0; (p_29 <= 2); p_29 += 1)
                { 
                    return g_41;
                }
                g_42--;
            }
            return g_368[0].f0;
        }
    }
    (***g_564) = l_37[2];
lbl_991:
    (*g_328) = (!(safe_rshift_func_uint16_t_u_s((((((((*g_325) == ((safe_sub_func_int8_t_s_s((p_30 , (18446744073709551611UL < (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((0x7B24L & (safe_mod_func_int16_t_s_s((g_374 = (g_363 = (*g_325))), (((&g_324 == ((*l_728) = (void*)0)) , 0xDCE6BCC7L) , 0x6BDBL)))), 0)), 6)) , 0x8F4D25A676A39C09LL) ^ g_41.f1), 4)))), g_368[0].f0.f2)) > 0x7CF26DC3L)) >= l_729[2][2]) >= p_29) , g_334) | g_633.f0) <= 65529UL), 5)));
    if (((p_31.f3 < 1UL) , ((*g_367) , (safe_mod_func_int64_t_s_s((((*g_367) , (***g_222)) , ((*l_734) &= p_31.f4)), ((&g_408[2][3] == (void*)0) | 0x23L))))))
    { 
        int16_t **l_735 = (void*)0;
        int32_t l_740 = 0x2901A007L;
        int64_t * const l_781 = &g_61[4];
        int64_t *l_792 = &l_666[0][0];
        uint8_t *l_808 = &l_36[1][2];
        uint64_t l_833 = 0x1BAF7D131AF81266LL;
        int32_t l_834[3];
        int32_t l_860 = 1L;
        union U1 **l_885 = &g_220;
        uint32_t l_890 = 18446744073709551615UL;
        uint64_t l_921 = 0UL;
        struct S0 l_924[6][6][1] = {{{{0x7ACBA8A9L,2L,0x41D9L,0L,65530UL}},{{0xF4A93F32L,-1L,0x7976L,0x409D8714L,0UL}},{{0x7ACBA8A9L,2L,0x41D9L,0L,65530UL}},{{0UL,0x7992556DL,0xF91FL,-7L,0x9868L}},{{0x005A93ACL,9L,65527UL,0L,0x4D11L}},{{0UL,0x7992556DL,0xF91FL,-7L,0x9868L}}},{{{0x7ACBA8A9L,2L,0x41D9L,0L,65530UL}},{{0xF4A93F32L,-1L,0x7976L,0x409D8714L,0UL}},{{0x7ACBA8A9L,2L,0x41D9L,0L,65530UL}},{{0UL,0x7992556DL,0xF91FL,-7L,0x9868L}},{{0x005A93ACL,9L,65527UL,0L,0x4D11L}},{{0UL,0x7992556DL,0xF91FL,-7L,0x9868L}}},{{{0x7ACBA8A9L,2L,0x41D9L,0L,65530UL}},{{0xF4A93F32L,-1L,0x7976L,0x409D8714L,0UL}},{{0x7ACBA8A9L,2L,0x41D9L,0L,65530UL}},{{0UL,0x7992556DL,0xF91FL,-7L,0x9868L}},{{0x005A93ACL,9L,65527UL,0L,0x4D11L}},{{0UL,0x7992556DL,0xF91FL,-7L,0x9868L}}},{{{0x7ACBA8A9L,2L,0x41D9L,0L,65530UL}},{{0xF4A93F32L,-1L,0x7976L,0x409D8714L,0UL}},{{0x7ACBA8A9L,2L,0x41D9L,0L,65530UL}},{{0UL,0x7992556DL,0xF91FL,-7L,0x9868L}},{{0x005A93ACL,9L,65527UL,0L,0x4D11L}},{{0UL,0x7992556DL,0xF91FL,-7L,0x9868L}}},{{{0x7ACBA8A9L,2L,0x41D9L,0L,65530UL}},{{0xF4A93F32L,-1L,0x7976L,0x409D8714L,0UL}},{{0x7ACBA8A9L,2L,0x41D9L,0L,65530UL}},{{0UL,0x7992556DL,0xF91FL,-7L,0x9868L}},{{0x005A93ACL,9L,65527UL,0L,0x4D11L}},{{0UL,0x7992556DL,0xF91FL,-7L,0x9868L}}},{{{0x7ACBA8A9L,2L,0x41D9L,0L,65530UL}},{{0xF4A93F32L,-1L,0x7976L,0x409D8714L,0UL}},{{0x7ACBA8A9L,2L,0x41D9L,0L,65530UL}},{{0UL,0x7992556DL,0xF91FL,-7L,0x9868L}},{{0x005A93ACL,9L,65527UL,0L,0x4D11L}},{{0UL,0x7992556DL,0xF91FL,-7L,0x9868L}}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_834[i] = 0xE7177442L;
        if (((0x95L != (l_735 == &g_325)) , ((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(1UL, (((void*)0 == &g_204) ^ (3UL <= l_740)))) , 0xDFL), p_30)) < 0UL)))
        { 
            const uint32_t l_752 = 4294967295UL;
            union U1 *l_774 = &g_221;
            int32_t l_793 = (-1L);
            int32_t l_794 = 5L;
            int32_t l_795[1][7][4] = {{{(-4L),(-1L),0x3B355EEFL,(-4L)},{0xBE2E805DL,0xAC7D1286L,0xBE2E805DL,0x3B355EEFL},{0x90486117L,0xAC7D1286L,0L,(-4L)},{0xAC7D1286L,(-1L),(-1L),0xAC7D1286L},{0xBE2E805DL,(-4L),(-1L),0x3B355EEFL},{0xAC7D1286L,0x90486117L,0L,0x90486117L},{0x90486117L,(-1L),0xBE2E805DL,0x90486117L}}};
            uint32_t **l_797[7][7][2] = {{{&g_674,&g_674},{&g_674,(void*)0},{(void*)0,&g_674},{&g_674,(void*)0},{&g_674,&g_674},{&g_674,(void*)0},{&g_674,&g_674}},{{(void*)0,(void*)0},{&g_674,&g_674},{&g_674,&g_674},{&g_674,&g_674},{(void*)0,&g_674},{&g_674,&g_674},{&g_674,&g_674}},{{&g_674,(void*)0},{(void*)0,&g_674},{&g_674,(void*)0},{&g_674,&g_674},{&g_674,(void*)0},{&g_674,&g_674},{(void*)0,(void*)0}},{{&g_674,&g_674},{&g_674,&g_674},{&g_674,&g_674},{(void*)0,&g_674},{&g_674,&g_674},{&g_674,&g_674},{&g_674,(void*)0}},{{(void*)0,&g_674},{&g_674,(void*)0},{&g_674,(void*)0},{(void*)0,&g_674},{(void*)0,(void*)0},{&g_674,&g_674},{&g_674,&g_674}},{{&g_674,&g_674},{&g_674,(void*)0},{&g_674,(void*)0},{&g_674,&g_674},{&g_674,&g_674},{&g_674,&g_674},{&g_674,(void*)0}},{{(void*)0,&g_674},{(void*)0,(void*)0},{(void*)0,&g_674},{(void*)0,(void*)0},{&g_674,&g_674},{&g_674,&g_674},{&g_674,&g_674}}};
            int16_t l_835 = 0x37A4L;
            uint32_t l_836 = 8UL;
            int i, j, k;
            if ((safe_rshift_func_int16_t_s_s((((safe_add_func_int64_t_s_s(((!2UL) >= g_41.f3), (g_63 , ((safe_div_func_int8_t_s_s((((void*)0 == &g_334) & (safe_mod_func_uint64_t_u_u((((*g_367) , (safe_add_func_uint8_t_u_u((p_32 , 255UL), l_752))) , 0xF1183BDA1012084FLL), 0xD672EC61E0215774LL))), l_740)) ^ p_31.f2)))) <= p_33) > 0xCC649F3A6EBD5EDFLL), p_31.f1)))
            { 
                int64_t *l_772 = (void*)0;
                int64_t *l_773 = &l_666[0][2];
                int8_t *l_775 = &g_119;
                int32_t l_776 = (-8L);
                p_31.f3 = (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(((((-9L) ^ ((safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((p_31.f0 = (65535UL ^ (!((l_761 == ((((~((safe_mul_func_int8_t_s_s(((*l_775) = (((p_31.f3 || (p_30 , ((((safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s((((g_41 , ((*l_773) |= (((*l_734) = (safe_lshift_func_uint8_t_u_u(252UL, l_771[0][1][1]))) < 0x480C400CB310AC40LL))) <= 0x6E605BC4D139B934LL) , 4L), 0x411D1E910F28B814LL)), p_30)) , (void*)0) == l_774) < 5UL))) | p_29) == 18446744073709551611UL)), l_740)) >= l_776)) && 0x74L) >= (-6L)) != 0xD67277B4650D37ABLL)) | 0x7010D324L)))) && p_31.f0), l_776)) , (**g_341)), p_31.f2)) , 0UL)) == (**g_129)) && 7UL))), g_519[1]));
            }
            else
            { 
                (*g_129) = (**g_565);
                (*g_328) |= 0xA716A95DL;
            }
            l_795[0][5][0] &= ((*l_774) , (safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u((l_794 &= (l_793 = (((((((*g_674) , l_752) | (((l_781 != (((p_31.f4 != (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((g_119 ^= l_752), ((safe_add_func_int8_t_s_s((l_740 ^ (*g_328)), p_31.f2)) ^ l_752))), p_31.f4)) && (*g_325)), l_752)), p_31.f0))) == 1UL) , l_792)) <= 0L) , p_33)) && l_752) ^ l_740) , p_31.f0) && p_31.f0))), g_381[3][1][1])), 7L)));
            if ((*g_328))
            { 
                uint32_t ***l_796[2];
                union U1 * const ***l_804 = &g_222;
                union U1 *****l_805 = (void*)0;
                union U1 ****l_807 = (void*)0;
                union U1 *****l_806 = &l_807;
                int8_t *l_809 = &g_119;
                int32_t l_810 = 0xECF33B59L;
                int i;
                for (i = 0; i < 2; i++)
                    l_796[i] = &g_673;
                l_797[4][2][0] = &g_674;
                (*g_328) ^= (safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((*l_809) |= ((safe_mul_func_int16_t_s_s(((*g_325) = (p_31.f4 && ((*g_367) , ((*g_220) , 0UL)))), (((0UL & ((l_804 == ((*l_806) = &g_218)) & 0xC7A3L)) , &g_446) == l_808))) <= 0x2D043F9693584642LL)), p_31.f4)), l_810));
            }
            else
            { 
                int64_t l_813[6][2][3] = {{{0x16CC0AACAC342FF0LL,(-1L),0x99C784D423089A48LL},{(-7L),(-3L),0x5223F8DE79ACBBF2LL}},{{0x99C784D423089A48LL,0L,(-9L)},{0L,(-3L),0x0534080DF3B57D01LL}},{{0L,(-1L),0L},{(-3L),(-5L),0L}},{{(-1L),0xB761FFA498D61812LL,0x0534080DF3B57D01LL},{0x0534080DF3B57D01LL,0L,(-9L)}},{{(-5L),0x23BFC475BE991661LL,0x5223F8DE79ACBBF2LL},{0x0534080DF3B57D01LL,1L,0x99C784D423089A48LL}},{{(-1L),(-1L),(-1L)},{(-3L),(-1L),0xB761FFA498D61812LL}}};
                int i, j, k;
                if ((safe_add_func_uint32_t_u_u((l_813[3][0][2] & p_33), (p_31.f2 != (l_813[5][1][1] , (safe_sub_func_int64_t_s_s((p_30 < ((((safe_lshift_func_int8_t_s_s((**g_341), (safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_31.f0, 0L)), l_795[0][0][0])) != g_114), 0x25L)) , p_31.f2), p_30)))) , p_33) > p_31.f2) & l_813[2][0][1])), l_826)))))))
                { 
                    return p_31;
                }
                else
                { 
                    int32_t * const l_827[5][1] = {{&l_771[0][1][3]},{&l_771[0][1][3]},{&l_771[0][1][3]},{&l_771[0][1][3]},{&l_771[0][1][3]}};
                    int32_t *l_828 = &g_41.f1;
                    int32_t **l_829 = (void*)0;
                    int32_t **l_830 = &g_130;
                    int i, j;
                    l_828 = l_827[1][0];
                    (*l_830) = l_827[3][0];
                }
                for (g_63.f0 = 24; (g_63.f0 >= 36); g_63.f0++)
                { 
                    (**g_129) ^= ((p_31.f1 ^ p_31.f4) ^ l_833);
                }
            }
            l_836--;
        }
        else
        { 
            uint8_t l_839 = 0x64L;
            ++l_839;
            return g_63;
        }
        if ((0x43L ^ l_834[1]))
        { 
            uint64_t l_849 = 6UL;
            int32_t l_855 = 0xF7B24550L;
            struct S0 l_863 = {0xBFE5E439L,-1L,65526UL,0x8DA86112L,7UL};
            int32_t l_887 = (-9L);
            int32_t l_888 = 0xF3F4CD08L;
            int32_t l_889 = 0x9F795FD6L;
            uint16_t *l_905[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_913 = 0x6FFD7472L;
            int32_t l_914 = 4L;
            int32_t l_915 = 0x26F8025BL;
            int32_t l_916 = 6L;
            int32_t l_917 = (-1L);
            int32_t l_919 = 0x498A994CL;
            int32_t l_920[6][3][3] = {{{0L,0L,0L},{(-1L),(-1L),(-1L)},{0L,0L,0L}},{{(-1L),(-1L),(-1L)},{0L,0L,0L},{(-1L),(-1L),(-1L)}},{{0L,0L,0L},{(-1L),(-1L),(-1L)},{0L,0L,0L}},{{(-1L),(-1L),(-1L)},{0L,0L,0L},{(-1L),(-1L),(-1L)}},{{0L,0L,0L},{(-1L),(-1L),(-1L)},{0L,0L,0L}},{{(-1L),(-1L),(-1L)},{0L,0L,0L},{(-1L),(-1L),(-1L)}}};
            int i, j, k;
            l_849 &= (safe_sub_func_uint64_t_u_u((!(**g_341)), (((void*)0 != &g_114) & ((p_31.f3 > (p_31.f4 , g_2)) && (safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(l_833, 1)) == (**g_341)) , 0L), 5))))));
            for (g_633.f2.f3 = 0; (g_633.f2.f3 >= 6); g_633.f2.f3++)
            { 
                int32_t *l_852 = (void*)0;
                int32_t l_853 = 0x0837D45BL;
            }
            if ((safe_mul_func_int8_t_s_s(((safe_div_func_int16_t_s_s(l_860, ((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((p_33 | (((safe_lshift_func_uint16_t_u_u((p_31.f4 = (((l_740 < ((((*g_325) = (-9L)) >= (((p_31.f1 < ((l_904 != (void*)0) < p_31.f4)) > 0xC839L) == p_30)) >= l_888)) | p_31.f1) , 0x927AL)), 3)) <= 0x6C1937FFDEFA5F04LL) == 65530UL)), 2)), p_31.f2)) ^ g_114))) || l_740), g_41.f0)))
            { 
                int16_t **l_906 = &g_325;
                g_907 |= ((l_906 != (void*)0) >= l_863.f2);
            }
            else
            { 
                int32_t l_908 = 7L;
                int32_t l_909 = 0xEC8C4A0EL;
                int32_t l_910[2][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L}};
                int64_t l_911 = 0x32C88A70A735F7F5LL;
                int32_t l_912 = 0xC74C542CL;
                int32_t l_918[5] = {0xEC63E636L,0xEC63E636L,0xEC63E636L,0xEC63E636L,0xEC63E636L};
                int i, j;
                l_921++;
            }
        }
        else
        { 
            (*g_129) = &l_860;
        }
        return l_924[5][3][0];
    }
    else
    { 
        union U2 l_928 = {{0UL,-10L,0xB320L,7L,65530UL}};
        int64_t l_936 = 0xC89615EB64D02C70LL;
        int32_t l_959 = 4L;
        union U1 *l_989 = &g_633;
        union U1 **l_1025 = &g_220;
        int32_t l_1047 = 1L;
        int32_t l_1049 = 1L;
        int8_t l_1058 = 1L;
        struct S0 *l_1068[2][6] = {{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41},{&g_41,&g_41,&g_41,&g_41,&g_41,&g_41}};
        struct S0 **l_1069 = &l_1068[0][5];
        int i, j;
        if ((((safe_mul_func_uint16_t_u_u(((((*g_328) = (g_927 , (1L | (l_928 , (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((((void*)0 != &g_368[0]) >= (((*g_328) == ((+(((safe_mod_func_int8_t_s_s((((&g_326 == (void*)0) , p_31.f4) | p_31.f2), p_31.f0)) || 0xBEECE364L) , p_33)) , (*g_130))) < l_928.f0.f1)) <= p_31.f4) , p_31.f2), l_928.f0.f4)), 251UL)))))) == l_936) , l_928.f0.f4), l_928.f0.f4)) , p_31.f4) < p_31.f2))
        { 
            int32_t l_949 = (-1L);
            int64_t l_956[7][6] = {{0xA90AC80D40DC433FLL,(-1L),0L,(-1L),(-1L),0L},{0xA90AC80D40DC433FLL,0xA90AC80D40DC433FLL,(-1L),0L,(-7L),0L},{(-1L),0xA90AC80D40DC433FLL,(-1L),0L,(-1L),(-1L)},{9L,(-1L),(-1L),9L,0xA90AC80D40DC433FLL,0L},{0L,9L,(-1L),9L,0L,(-1L)},{(-1L),0L,(-1L),(-1L),0L,(-1L)},{0L,(-1L),(-7L),0L,(-7L),(-1L)}};
            union U1 l_957 = {0x6DA34A1AL};
            uint32_t *l_958 = &g_57;
            int i, j;
            p_31.f3 = ((*g_328) = (((~(safe_sub_func_uint16_t_u_u((p_31.f4 = (safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_uint64_t_u(((l_949 >= 4294967286UL) < (safe_div_func_uint16_t_u_u(((safe_div_func_int64_t_s_s((g_61[2] |= (l_959 = ((*l_734) = ((safe_add_func_int64_t_s_s(((p_31.f4 <= ((*g_325) &= (((**g_341) < 0x3FL) < ((*l_958) = (((l_956[6][5] || (l_957 , 0x0FL)) < l_928.f0.f0) > 0x1FDA42BC8193AD7CLL))))) <= g_63.f2), 0x67B8D8CBEA329793LL)) == 0xF1L)))), l_956[6][4])) > p_29), 0x41AFL))))) , 9UL), (**g_341))) & l_928.f0.f0) ^ 4294967295UL), g_960)), 13)) && p_33), p_33))), p_31.f3))) && p_31.f0) > g_907));
            return g_368[0].f0;
        }
        else
        { 
            uint32_t l_979[3];
            int8_t *l_982 = &l_826;
            uint16_t *l_987 = &g_927.f2.f2;
            int32_t l_988 = (-1L);
            int32_t *l_990 = &g_41.f1;
            int8_t **l_997 = &l_982;
            int8_t ***l_996 = &l_997;
            int8_t ****l_998 = (void*)0;
            int8_t ****l_999 = (void*)0;
            int8_t ****l_1000 = (void*)0;
            int8_t ****l_1001 = &l_996;
            int16_t l_1010[5][4] = {{0x58EBL,0x17A0L,0xD138L,0xD138L},{(-1L),(-1L),0x58EBL,0xD138L},{(-1L),0x17A0L,(-1L),0x58EBL},{(-1L),0x58EBL,0x58EBL,(-1L)},{(-1L),0x58EBL,0xD138L,0x58EBL}};
            int32_t l_1021 = 0xC7D3BE94L;
            union U1 **l_1024 = &l_989;
            int32_t l_1040 = 0xAF0ED8C2L;
            int32_t l_1048 = 0xAC62DEDDL;
            int32_t l_1051 = (-1L);
            uint16_t l_1067[6][7][6] = {{{65534UL,0xC9F8L,0UL,7UL,0UL,0xA619L},{0xC48AL,0x3DDCL,0UL,0xA619L,0xA1E4L,1UL},{0UL,0x3DDCL,65534UL,0x97E3L,0UL,0x97E3L},{0UL,0xC9F8L,0UL,0xA619L,0x8A32L,0x97E3L},{0xC48AL,65530UL,65534UL,7UL,0x8A32L,1UL},{65534UL,0xC9F8L,0UL,7UL,0UL,0xA619L},{0xC48AL,0x3DDCL,0UL,0xA619L,0xA1E4L,1UL}},{{0UL,0x3DDCL,65534UL,0x97E3L,0UL,0x97E3L},{0UL,0xC9F8L,0UL,0xA619L,0x8A32L,0x97E3L},{0xC48AL,65530UL,65534UL,7UL,0x8A32L,1UL},{65534UL,0xC9F8L,0UL,7UL,0UL,0xA619L},{0xC48AL,0x3DDCL,0UL,0xA619L,0xA1E4L,1UL},{0UL,0x3DDCL,65534UL,0x97E3L,0UL,0x97E3L},{0UL,0xC9F8L,0UL,0xA619L,0x8A32L,0x97E3L}},{{0xC48AL,65530UL,65534UL,7UL,0x8A32L,1UL},{65534UL,0xC9F8L,0UL,7UL,0UL,0xA619L},{0xC48AL,0x3DDCL,0UL,0xA619L,0xA1E4L,1UL},{0UL,0x3DDCL,65534UL,0x97E3L,0UL,0x97E3L},{0UL,0xC9F8L,0UL,0xA619L,0x8A32L,0x97E3L},{0xC48AL,65530UL,65534UL,7UL,0x8A32L,1UL},{65534UL,0xC9F8L,0UL,7UL,0UL,0xA619L}},{{0xC48AL,0x3DDCL,0UL,0xA619L,0xA1E4L,1UL},{0UL,0x3DDCL,65534UL,0x97E3L,0UL,0x97E3L},{0UL,0xC9F8L,0UL,0xA619L,0x8A32L,0x97E3L},{0xC48AL,65530UL,65534UL,7UL,0x8A32L,1UL},{65534UL,0xC9F8L,0UL,7UL,0UL,0xA619L},{0xC48AL,0x97E3L,0x9C70L,65534UL,65534UL,4UL},{0x886DL,0x97E3L,0x9146L,0xA439L,0xC48AL,0xA439L}},{{0x886DL,1UL,0x886DL,65534UL,0UL,0xA439L},{0xCA99L,0xA619L,0x9146L,65535UL,0UL,4UL},{0x9146L,1UL,0x9C70L,65535UL,0xC48AL,65534UL},{0xCA99L,0x97E3L,0x9C70L,65534UL,65534UL,4UL},{0x886DL,0x97E3L,0x9146L,0xA439L,0xC48AL,0xA439L},{0x886DL,1UL,0x886DL,65534UL,0UL,0xA439L},{0xCA99L,0xA619L,0x9146L,65535UL,0UL,4UL}},{{0x9146L,1UL,0x9C70L,65535UL,0xC48AL,65534UL},{0xCA99L,0x97E3L,0x9C70L,65534UL,65534UL,4UL},{0x886DL,0x97E3L,0x9146L,0xA439L,0xC48AL,0xA439L},{0x886DL,1UL,0x886DL,65534UL,0UL,0xA439L},{0xCA99L,0xA619L,0x9146L,65535UL,0UL,4UL},{0x9146L,1UL,0x9C70L,65535UL,0xC48AL,65534UL},{0xCA99L,0x97E3L,0x9C70L,65534UL,65534UL,4UL}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_979[i] = 4294967292UL;
            for (g_907 = 0; (g_907 == 29); g_907 = safe_add_func_uint32_t_u_u(g_907, 2))
            { 
                union U1 **l_973 = (void*)0;
                int64_t l_980 = (-1L);
                if (((void*)0 != &g_674))
                { 
                    (**g_565) = (*g_129);
                }
                else
                { 
                    uint32_t ***l_978 = &g_673;
                    (*g_328) |= (safe_rshift_func_int16_t_s_s((((((-8L) == (safe_sub_func_uint64_t_u_u(g_633.f3, ((((safe_mod_func_uint64_t_u_u((l_980 &= (((safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((l_973 != (((safe_rshift_func_int8_t_s_s(p_31.f3, (**g_341))) , (safe_mul_func_int8_t_s_s(((void*)0 != l_978), g_380[2][1][3]))) , l_679[0][2])) == 1UL), l_979[2])), (-8L))) & p_33) , p_31.f2)), 18446744073709551615UL)) , p_29) > p_31.f4) != 0UL)))) && 255UL) , &g_114) != (void*)0), 8));
                    p_31.f1 = (***g_565);
                }
            }
            if ((((((*l_982) = (g_981 , p_32)) && (0UL | (safe_sub_func_int8_t_s_s(p_31.f2, (safe_add_func_int64_t_s_s(((l_988 = ((*l_987) = p_30)) | 0x0D9CL), ((*l_734) = ((void*)0 != l_989)))))))) <= 0xA006FE44L) <= 0xACE205D1L))
            { 
                l_990 = &l_771[0][2][2];
                if (p_29)
                    goto lbl_995;
                (*g_219) = l_989;
            }
            else
            { 
                if (p_31.f2)
                    goto lbl_991;
lbl_995:
                (*g_328) ^= (+((*l_904)--));
                (*g_129) = &l_988;
                if (((*l_990) = ((***g_565) = (((((*l_1001) = l_996) != (g_1005 = l_1002)) > (safe_div_func_int8_t_s_s((((((*l_904) = g_41.f2) != l_1010[1][1]) < p_31.f3) , p_32), g_927.f3))) , 0L))))
                { 
                    struct S0 l_1011 = {0xCF433D46L,0x555D5B9AL,65529UL,-4L,0x8DD3L};
                    return l_1011;
                }
                else
                { 
                    int32_t l_1016 = 0x720CE61DL;
                    int16_t **l_1017 = &l_727;
                    const int16_t *l_1019 = &g_1020;
                    const int16_t **l_1018 = &l_1019;
                    (*g_328) |= (safe_sub_func_uint16_t_u_u(((*l_990) = ((***g_1005) ^ (safe_sub_func_uint64_t_u_u(g_2, l_1016)))), 0x35DDL));
                    l_1021 = (((*l_1017) = &g_326) != ((*l_1018) = (void*)0));
                }
                (*g_328) = (safe_sub_func_uint16_t_u_u(((*g_218) == (l_1025 = l_1024)), (0x9E5AB4EFL ^ (!((0x49B2L || (*l_990)) & ((((safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(((*l_990) <= 4L), p_30)) != 1L) , (-4L)), 0x5CL)), 14)) < 0x1BC4FC846779C00CLL) , 4294967295UL) > g_446))))));
            }
            for (g_40 = (-10); (g_40 >= (-5)); g_40++)
            { 
                uint64_t l_1041 = 1UL;
                int32_t l_1046 = 0xB8A8FAFCL;
                int32_t l_1050 = (-3L);
                int32_t l_1052 = 0x4B9B53F3L;
                for (g_221.f2.f0 = 0; (g_221.f2.f0 != 2); ++g_221.f2.f0)
                { 
                    uint16_t l_1037 = 0x3C81L;
                    l_1037++;
                    ++l_1041;
                    if (p_32)
                        continue;
                    if ((*l_990))
                        continue;
                }
                for (g_633.f2.f3 = 0; (g_633.f2.f3 == 25); ++g_633.f2.f3)
                { 
                    uint64_t l_1053 = 0UL;
                    ++l_1053;
                    if (p_31.f0)
                        break;
                }
                (*g_328) = (safe_mod_func_int32_t_s_s((p_31.f0 | 0x967FL), (((p_31.f4 = (l_1058 , ((*l_987) = (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(p_31.f2, g_57)), (safe_mod_func_int64_t_s_s(((*l_990) |= p_32), (g_114 | g_326))))), l_1067[1][2][2]))))) & 3UL) && p_31.f3)));
            }
        }
        (*l_1069) = l_1068[0][5];
    }
    return l_1070;
}



static uint32_t  func_45(int64_t  p_46, struct S0  p_47)
{ 
    struct S0 l_64[6] = {{0UL,0x9DE5592EL,3UL,0x868B20CEL,0x2B64L},{0UL,0x9DE5592EL,3UL,0x868B20CEL,0x2B64L},{0UL,0x9DE5592EL,3UL,0x868B20CEL,0x2B64L},{0UL,0x9DE5592EL,3UL,0x868B20CEL,0x2B64L},{0UL,0x9DE5592EL,3UL,0x868B20CEL,0x2B64L},{0UL,0x9DE5592EL,3UL,0x868B20CEL,0x2B64L}};
    union U2 l_95 = {{0xE453246BL,-9L,0x2CAAL,0xB7C037E6L,65535UL}};
    union U1 l_96 = {2L};
    int16_t l_135 = 0xCFC3L;
    uint8_t l_146 = 0x70L;
    union U1 *l_193 = (void*)0;
    union U1 **l_192 = &l_193;
    const int32_t *l_199[1][7] = {{&g_41.f3,&g_41.f3,&g_41.f3,&g_41.f3,&g_41.f3,&g_41.f3,&g_41.f3}};
    int32_t l_205[6][7] = {{0L,0x255F6B4EL,0x176513EDL,0x51D1813BL,1L,(-5L),0x51D1813BL},{0L,5L,0x176D6B95L,0x51D1813BL,0x631836CBL,0x631836CBL,0x51D1813BL},{0x176D6B95L,0x255F6B4EL,0x176D6B95L,0x48666C92L,1L,0x631836CBL,0x48666C92L},{0L,0x255F6B4EL,0x176513EDL,0x51D1813BL,1L,(-5L),0x51D1813BL},{0L,5L,0x176D6B95L,0x51D1813BL,0x631836CBL,0x631836CBL,0x51D1813BL},{0x176D6B95L,0x255F6B4EL,0x176D6B95L,0x48666C92L,1L,0x631836CBL,0x48666C92L}};
    uint64_t *l_259 = &g_114;
    const union U1 *l_278 = &l_96;
    const union U1 **l_277 = &l_278;
    int8_t *l_357 = (void*)0;
    int8_t **l_356[5] = {&l_357,&l_357,&l_357,&l_357,&l_357};
    int8_t ***l_355 = &l_356[1];
    int16_t l_358 = 0x745EL;
    uint16_t **l_500 = &g_408[3][0];
    int32_t l_505 = 1L;
    uint32_t l_522 = 6UL;
    int16_t l_539 = (-1L);
    int64_t l_635 = 0x155605B2DBF3E101LL;
    int32_t *l_636 = &l_505;
    int32_t *l_637 = &l_96.f2.f1;
    int32_t *l_638 = &g_63.f1;
    int32_t *l_639[6] = {&g_40,&g_40,&g_40,&g_40,&g_40,&g_40};
    int32_t l_640 = 5L;
    uint16_t l_641 = 2UL;
    int i, j;
lbl_270:
    if ((g_41.f0 < (!p_47.f3)))
    { 
        uint8_t l_66 = 5UL;
        int32_t l_71 = 0x7E043BC7L;
        union U1 *l_86 = (void*)0;
        const union U2 l_97 = {{0x77049B5BL,1L,65535UL,4L,2UL}};
        int32_t **l_131 = (void*)0;
        int32_t *l_147 = &g_63.f3;
        int32_t *l_148 = &g_63.f1;
        int32_t l_184 = 0x066FCE70L;
        uint8_t l_185 = 1UL;
        uint8_t l_189 = 1UL;
        union U1 **l_196 = &l_86;
        int8_t l_202 = 0x07L;
        int32_t l_203 = 0x935D499BL;
lbl_65:
        for (g_41.f4 = 9; (g_41.f4 != 26); g_41.f4++)
        { 
            for (p_47.f0 = 2; (p_47.f0 <= 6); p_47.f0 += 1)
            { 
                struct S0 *l_62 = &g_63;
                int i;
                (*l_62) = p_47;
                (*l_62) = l_64[5];
                if (g_61[p_47.f0])
                    break;
            }
            if (p_47.f2)
                goto lbl_65;
        }
        if ((l_66 > 0x7138D59A4365C17ALL))
        { 
            uint32_t l_68 = 0x7B3892EBL;
            int32_t l_74[4] = {0L,0L,0L,0L};
            uint16_t *l_75 = (void*)0;
            uint16_t *l_76 = &g_41.f2;
            int64_t *l_77 = &g_61[5];
            int32_t l_78 = 6L;
            int i;
            l_78 |= (!((l_68 = g_63.f4) < (safe_mul_func_uint16_t_u_u(((((l_71 = g_63.f3) | ((*l_77) = ((((safe_add_func_uint16_t_u_u(((*l_76) = (((l_74[2] < (l_64[5].f1 >= ((&g_2 != (void*)0) && (p_47.f4 , l_64[5].f2)))) & p_47.f1) , p_46)), 0x66BFL)) | l_74[3]) < l_66) < p_47.f3))) , g_41.f1) | g_63.f2), l_64[5].f3))));
            return l_78;
        }
        else
        { 
            int32_t *l_89 = (void*)0;
            int32_t **l_88 = &l_89;
            int32_t *l_90 = &l_64[5].f1;
            union U1 l_128 = {0xADBC88E9L};
            for (g_42 = 0; (g_42 >= 32); g_42 = safe_add_func_int32_t_s_s(g_42, 7))
            { 
                int8_t l_84 = 0x4AL;
                for (g_41.f0 = 15; (g_41.f0 <= 59); g_41.f0 = safe_add_func_int32_t_s_s(g_41.f0, 3))
                { 
                    int32_t *l_85 = &g_63.f1;
                    union U1 **l_87 = &l_86;
                    (*l_85) &= (safe_unary_minus_func_uint64_t_u(l_84));
                    (*l_87) = l_86;
                    (*l_85) |= 0x604E4D2DL;
                }
            }
            (*l_88) = &g_40;
            (*l_90) ^= l_64[5].f0;
            if ((safe_add_func_uint8_t_u_u(((p_47.f1 , p_47.f2) == (safe_div_func_int32_t_s_s(((l_95 , ((l_96 , l_97) , (void*)0)) == &l_90), g_41.f4))), g_63.f4)))
            { 
                uint64_t *l_113 = &g_114;
                if (((*l_90) = (~((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_97.f0.f3, (safe_mod_func_uint16_t_u_u(l_66, g_42)))), p_47.f0)) ^ (((*l_113) = (0x3AA3328DBD8298C9LL == (safe_add_func_uint8_t_u_u((((((safe_mod_func_uint16_t_u_u((--g_41.f4), (p_47.f0 & (safe_mul_func_int8_t_s_s(0x86L, p_47.f3))))) == p_47.f1) , 4UL) != p_47.f3) > g_41.f3), p_46)))) || 0xA7FA89076915C511LL)))))
                { 
                    return l_97.f0.f2;
                }
                else
                { 
                    (*l_90) ^= p_47.f1;
                    (*l_88) = &g_40;
                    return p_47.f3;
                }
            }
            else
            { 
                int64_t *l_122 = &g_61[5];
                int32_t l_125 = 1L;
                g_63.f3 = (g_41.f1 = l_64[5].f2);
                for (l_96.f1 = 0; (l_96.f1 <= 5); l_96.f1 += 1)
                { 
                    int8_t *l_118 = &g_119;
                    uint32_t *l_123 = (void*)0;
                    uint32_t *l_124[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    p_47.f1 = (safe_unary_minus_func_uint8_t_u(((((safe_sub_func_uint64_t_u_u(((((*l_118) = p_47.f3) | g_114) != ((safe_lshift_func_uint16_t_u_s(p_47.f0, (0x650D96A5E2435F73LL < (l_122 != (void*)0)))) , (p_47.f0--))), ((l_128 , g_129) != l_131))) > g_41.f0) , g_132) && 0x79B21912L)));
                }
                p_47.f3 = ((((g_57 < (safe_rshift_func_int8_t_s_u((p_47.f4 ^ ((l_135 && (safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(p_47.f0, (safe_div_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(0xBBL, (l_125 = 0x7AL))) >= (((((safe_add_func_int32_t_s_s(((*g_130) = ((p_47 , 18446744073709551615UL) ^ p_47.f0)), p_46)) >= g_61[5]) < 0x898E21F5L) | g_41.f2) && 1L)), (-9L))))), g_61[3]))) , l_64[5].f3)), p_47.f4))) >= l_146) < g_41.f4) ^ p_47.f2);
            }
            (*l_88) = (*g_129);
        }
lbl_149:
        (*l_148) &= ((*l_147) = ((*g_130) = 0x13E1DE84L));
        for (g_41.f1 = 6; (g_41.f1 >= 2); g_41.f1 -= 1)
        { 
            uint16_t l_153 = 3UL;
            union U1 l_158 = {0L};
            int32_t *l_165 = &g_40;
            int32_t l_181[4] = {0L,0L,0L,0L};
            union U1 **l_195[6][7] = {{&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{&l_86,&l_86,&l_86,&l_86,&l_86,&l_86,&l_86},{&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{&l_86,&l_86,&l_86,&l_86,&l_86,&l_86,&l_86},{&l_193,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{&l_86,&l_86,&l_86,&l_86,&l_86,&l_86,&l_86}};
            int32_t *l_209 = &g_132;
            int32_t *l_210 = (void*)0;
            int32_t *l_211 = &l_96.f2.f3;
            int32_t *l_212 = &l_181[1];
            int32_t *l_213 = &g_63.f3;
            int32_t *l_214[4][5][2] = {{{&g_63.f3,&l_181[0]},{&l_181[0],&g_63.f3},{&l_181[0],&l_181[0]},{&g_63.f3,&l_181[0]},{&l_181[0],&g_63.f3}},{{&l_181[0],&l_181[0]},{&g_63.f3,&l_181[0]},{&l_181[0],&g_63.f3},{&l_181[0],&l_181[0]},{&g_63.f3,&l_181[0]}},{{&l_181[0],&g_63.f3},{&l_181[0],&l_181[0]},{&g_63.f3,&l_181[0]},{&l_181[0],&g_63.f3},{&l_181[0],&l_181[0]}},{{&g_63.f3,&l_181[0]},{&l_181[0],&g_63.f3},{&l_181[0],&l_181[0]},{&g_63.f3,&l_181[0]},{&l_181[0],&g_63.f3}}};
            int i, j, k;
            for (g_63.f2 = 2; (g_63.f2 <= 6); g_63.f2 += 1)
            { 
                int64_t *l_176[7] = {&g_177,&g_177,&g_177,&g_177,&g_177,&g_177,&g_177};
                int32_t l_182 = 0x216F8107L;
                int32_t l_183 = 1L;
                int32_t l_188 = 6L;
                int i;
                if (l_97.f0.f2)
                    goto lbl_149;
            }
        }
    }
    else
    { 
        uint8_t l_239 = 0x3DL;
        for (g_41.f0 = 0; (g_41.f0 <= 5); g_41.f0 += 1)
        { 
            uint32_t l_247[1];
            int16_t *l_256 = &l_135;
            int i;
            for (i = 0; i < 1; i++)
                l_247[i] = 4UL;
            for (l_96.f1 = 0; (l_96.f1 <= 5); l_96.f1 += 1)
            { 
                union U1 * const ***l_224[4];
                int32_t l_238 = 0xABEB8739L;
                int i;
                for (i = 0; i < 4; i++)
                    l_224[i] = &g_222;
                if ((g_41.f0 , ((g_63.f4 , g_218) == (g_222 = g_222))))
                { 
                    uint16_t l_227 = 0UL;
                    const int32_t *l_240 = &l_64[5].f1;
                    const int32_t **l_241 = (void*)0;
                    const int32_t **l_242 = &l_199[0][2];
                    const union U1 *l_244[5] = {&g_152[6],&g_152[6],&g_152[6],&g_152[6],&g_152[6]};
                    const union U1 ** const l_243[1][6][3] = {{{&l_244[1],&l_244[0],&l_244[1]},{&l_244[3],&l_244[1],&l_244[1]},{&l_244[1],&l_244[0],&l_244[1]},{&l_244[3],&l_244[3],&l_244[1]},{&l_244[1],&l_244[0],&l_244[1]},{&l_244[3],&l_244[1],&l_244[1]}}};
                    const union U1 **l_246 = &l_244[1];
                    const union U1 ***l_245 = &l_246;
                    int i, j, k;
                    l_239 &= (safe_lshift_func_int16_t_s_u(((l_227 || (safe_lshift_func_uint8_t_u_s(g_114, ((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((p_47.f4 || p_47.f2) < 0L), (safe_sub_func_int64_t_s_s((g_41.f1 || g_41.f1), 8UL)))), 7UL)) > g_40)))) ^ l_238), g_63.f0));
                    (*l_242) = l_240;
                    if (p_47.f4)
                        break;
                    (*l_245) = l_243[0][3][1];
                }
                else
                { 
                    (*g_129) = (*g_129);
                    (*g_219) = (void*)0;
                    return l_238;
                }
                (*g_129) = (*g_129);
                for (l_146 = 0; l_146 < 1; l_146 += 1)
                {
                    for (g_132 = 0; g_132 < 7; g_132 += 1)
                    {
                        l_199[l_146][g_132] = &l_64[5].f1;
                    }
                }
                l_238 = l_247[0];
                (*g_129) = (*g_129);
            }
            (*g_130) = ((p_47.f2 < (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((((*l_256) ^= (safe_rshift_func_uint8_t_u_u(((void*)0 == &g_114), (0xD84FL > (safe_sub_func_uint8_t_u_u(0x38L, (g_204 || (g_215 ^ p_47.f1)))))))) < 65531UL) != l_247[0]) & g_152[3].f0), (**g_129))), p_47.f0))) || 18446744073709551615UL);
            (**g_129) = (*g_130);
        }
        for (g_42 = 0; (g_42 <= 57); g_42 = safe_add_func_uint64_t_u_u(g_42, 2))
        { 
            return p_46;
        }
        return g_119;
    }
    (**g_129) &= 0x6063F796L;
    if (((p_47.f4 , (l_259 == ((((0x1AL <= (safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((0xD08FB6B238936EF0LL == ((4UL > (((g_114 ^= ((p_47.f1 != (safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(3UL, g_63.f3)), 7))) || 65529UL)) > g_215) , g_63.f0)) || g_2)), 0x61B6L)), p_46)), p_47.f1))) | (-10L)) | 0x75B5L) , (void*)0))) > 0xBC0FDD52L))
    { 
        int32_t **l_273 = (void*)0;
        const union U2 *l_293 = (void*)0;
        for (p_46 = 0; (p_46 <= 5); p_46 += 1)
        { 
            union U1 * const *l_284 = (void*)0;
            int8_t l_291 = (-1L);
            if (p_47.f0)
                goto lbl_270;
            for (g_63.f4 = 1; (g_63.f4 <= 5); g_63.f4 += 1)
            { 
                int16_t l_292[3][5] = {{0x53CEL,(-9L),0x53CEL,(-9L),0x53CEL},{0x0F00L,0x0F00L,0x0F00L,0x0F00L,0x0F00L},{0x53CEL,(-9L),0x53CEL,(-9L),0x53CEL}};
                int32_t l_304 = (-9L);
                int i, j;
                for (g_41.f4 = 0; (g_41.f4 <= 5); g_41.f4 += 1)
                { 
                    int32_t ***l_271 = (void*)0;
                    int32_t ***l_272[3][3] = {{&g_129,&g_129,&g_129},{&g_129,&g_129,&g_129},{&g_129,&g_129,&g_129}};
                    int i, j;
                    l_273 = &g_130;
                }
                for (g_221.f0 = 5; (g_221.f0 >= 0); g_221.f0 -= 1)
                { 
                    uint64_t l_274[7] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                    const union U1 ***l_279 = &l_277;
                    const union U1 **l_281 = &l_278;
                    const union U1 ***l_280[5] = {&l_281,&l_281,&l_281,&l_281,&l_281};
                    int32_t l_290 = 0x81889F29L;
                    int i;
                    p_47.f1 |= (l_274[3] < (g_206 ^ (safe_add_func_int16_t_s_s(((g_282 = ((*l_279) = l_277)) != l_284), (safe_sub_func_uint16_t_u_u(((p_46 , ((~(((safe_rshift_func_uint16_t_u_s(l_290, ((((0xF971L >= g_152[3].f1) || l_291) , 0x8AL) != 0x0AL))) == (-7L)) < 0UL)) < g_63.f0)) , 0UL), l_292[1][4]))))));
                    if ((**g_129))
                        break;
                }
                for (g_221.f1 = 0; (g_221.f1 <= 5); g_221.f1 += 1)
                { 
                    int32_t ***l_303 = &l_273;
                    l_293 = (void*)0;
                    (*g_129) = (*g_129);
                    (*g_130) |= (((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((l_304 = ((safe_sub_func_int32_t_s_s(p_47.f4, (p_47.f4 < (((!g_152[3].f3) == (65535UL == l_291)) & p_46)))) >= ((l_303 == &g_129) , g_63.f4))), 1L)), l_292[1][4])) && g_61[3]) != g_204);
                    if (p_47.f3)
                        continue;
                    return g_63.f2;
                }
            }
            return l_291;
        }
    }
    else
    { 
        union U1 l_305 = {-5L};
        uint16_t *l_310 = (void*)0;
        uint16_t *l_311 = &g_221.f2.f2;
        uint32_t *l_352 = &g_41.f0;
        int32_t l_362 = (-1L);
        uint8_t l_364 = 0x6EL;
        int32_t l_376 = 0x45FE482DL;
        int32_t l_377 = 0x7D283652L;
        int32_t l_378[3][7][1] = {{{(-1L)},{(-1L)},{5L},{(-1L)},{(-1L)},{5L},{(-1L)}},{{(-1L)},{5L},{(-1L)},{(-1L)},{5L},{(-1L)},{(-1L)}},{{5L},{(-1L)},{(-1L)},{5L},{(-1L)},{(-1L)},{5L}}};
        union U1 ****l_440 = (void*)0;
        uint8_t *l_491 = &l_364;
        uint64_t l_548 = 18446744073709551608UL;
        int32_t *l_563 = &l_376;
        uint16_t l_610 = 0xF033L;
        uint8_t l_620 = 0x8CL;
        int32_t l_630 = 0x2BDFBE3CL;
        int i, j, k;
        if ((((l_305 , (g_206 , p_47.f2)) && (0x8459L || 0xAB6AL)) | (safe_rshift_func_uint8_t_u_s((65535UL <= ((*l_311) = (safe_div_func_int8_t_s_s((p_47.f3 > p_47.f1), p_47.f0)))), g_63.f3))))
        { 
            int16_t l_315 = 0x811DL;
            int32_t l_332 = 0x952D26FEL;
            const int8_t *l_339[1];
            const int8_t **l_338 = &l_339[0];
            uint32_t l_344 = 4294967295UL;
            int32_t l_360 = 1L;
            int32_t l_361 = (-5L);
            int32_t l_372 = (-5L);
            int32_t l_373 = (-4L);
            int32_t l_375[7][5] = {{0x1018A835L,0xC88B69E5L,0x8857F8C8L,0x93EFC1DEL,0x8857F8C8L},{0x8857F8C8L,0x8857F8C8L,0xA22181DDL,0x93EFC1DEL,4L},{0xC88B69E5L,0x1018A835L,0x1018A835L,0xC88B69E5L,0x8857F8C8L},{0xC88B69E5L,0x93EFC1DEL,1L,1L,0x93EFC1DEL},{0x8857F8C8L,0x1018A835L,1L,0xA22181DDL,0xA22181DDL},{0x1018A835L,0x8857F8C8L,0x1018A835L,1L,0xA22181DDL},{0x93EFC1DEL,0xC88B69E5L,0xA22181DDL,0xC88B69E5L,0x93EFC1DEL}};
            int32_t l_379 = 3L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_339[i] = (void*)0;
            for (l_305.f2.f1 = 5; (l_305.f2.f1 >= 0); l_305.f2.f1 -= 1)
            { 
                uint8_t l_314 = 7UL;
                int16_t *l_323 = &l_135;
                int8_t *l_327 = &g_119;
                int32_t *l_329 = &l_205[4][1];
                int32_t *l_330 = &g_221.f2.f1;
                int32_t *l_331 = &g_41.f1;
                int32_t *l_333[5] = {&g_41.f1,&g_41.f1,&g_41.f1,&g_41.f1,&g_41.f1};
                int i;
                g_328 = ((*g_129) = (((safe_sub_func_uint8_t_u_u((l_314 || l_315), ((*l_327) = (((&l_315 != ((((safe_mod_func_int32_t_s_s((~(((*l_323) &= (((-1L) && (((g_40 < (safe_add_func_int16_t_s_s(0L, (safe_add_func_uint64_t_u_u(8UL, 0UL))))) >= 0x2FF7D354L) < p_47.f4)) || g_61[4])) , l_305.f1)), p_47.f1)) >= l_314) | g_324) , g_325)) <= 0xF58FC13AL) != g_57)))) == g_221.f0) , (*g_129)));
                g_334++;
                if ((*g_328))
                    break;
                for (g_41.f0 = 0; (g_41.f0 <= 5); g_41.f0 += 1)
                { 
                    int i, j;
                    (*g_129) = &l_205[g_41.f0][(g_41.f0 + 1)];
                    return p_47.f4;
                }
            }
            for (g_177 = 1; (g_177 <= 6); g_177 += 1)
            { 
                int32_t l_337 = 5L;
                uint32_t *l_351 = &g_215;
                int32_t l_359 = 0xF3955CDDL;
                int32_t *l_370 = &g_221.f2.f3;
                int32_t *l_371[7] = {&l_361,&l_361,&l_361,&l_361,&l_361,&l_361,&l_361};
                int i;
                if (l_337)
                { 
                    const int8_t ***l_340 = (void*)0;
                    g_341 = l_338;
                }
                else
                { 
                    int32_t *l_343[3][6] = {{&l_332,&l_332,&l_332,&l_332,&l_332,&l_332},{&l_332,&l_332,&l_332,&l_332,&l_332,&l_332},{&l_332,&l_332,&l_332,&l_332,&l_332,&l_332}};
                    int i, j;
                    ++l_344;
                    if (p_47.f0)
                        break;
                    l_332 |= (g_41.f1 ^= ((*g_130) = (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((((l_351 != (l_305.f3 , l_352)) != (safe_rshift_func_int8_t_s_u(0xB7L, 4))) < ((void*)0 != l_355)), g_206)) <= g_119), l_358))));
                    l_364--;
                }
                if (p_46)
                    continue;
                for (g_41.f2 = 1; (g_41.f2 <= 6); g_41.f2 += 1)
                { 
                    struct S0 *l_369 = &l_305.f2;
                    g_367 = g_367;
                    (*l_369) = g_368[0].f0;
                    if (l_305.f2.f3)
                        break;
                }
                if (p_47.f2)
                    break;
                ++g_381[3][0][1];
            }
        }
        else
        { 
            uint32_t l_386[7];
            int32_t l_396 = 0x0BED1A18L;
            int32_t l_399 = (-1L);
            uint16_t l_435 = 7UL;
            union U2 * const l_438 = (void*)0;
            union U1 * const *** const l_441 = &g_222;
            uint16_t *l_453 = &l_96.f2.f4;
            uint16_t *l_454 = &l_96.f2.f2;
            uint16_t *l_455 = &g_63.f2;
            uint8_t *l_478 = (void*)0;
            uint8_t *l_479 = &l_364;
            int16_t l_480 = 0x5B11L;
            union U1 *l_481[4] = {&l_96,&l_96,&l_96,&l_96};
            int i;
            for (i = 0; i < 7; i++)
                l_386[i] = 0UL;
            for (g_334 = 0; (g_334 <= 0); g_334 += 1)
            { 
                int64_t *l_387 = &g_61[3];
                int64_t *l_388 = (void*)0;
                int64_t *l_389 = &g_204;
                int64_t *l_400 = (void*)0;
                int32_t l_403 = 0x4A41DF83L;
                union U2 l_406 = {{0x74CF7E4DL,9L,1UL,1L,1UL}};
                uint16_t **l_407[3];
                uint8_t *l_409 = (void*)0;
                int32_t l_410 = 1L;
                const uint32_t l_437[4][4] = {{0x34E2D251L,0x34E2D251L,0x7A4DF89FL,0x34E2D251L},{0x34E2D251L,0UL,0UL,0x34E2D251L},{0UL,0x34E2D251L,0UL,0UL},{0x34E2D251L,0x34E2D251L,0x7A4DF89FL,0x34E2D251L}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_407[i] = &l_310;
                (*g_328) = (0x82C0L != ((((g_177 &= (safe_mod_func_int64_t_s_s(((l_386[4] = p_46) | ((*l_389) = ((*l_387) = g_204))), (((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((((l_396 = p_47.f4) || (safe_rshift_func_uint8_t_u_u(g_63.f0, 0))) != p_47.f2), ((l_399 = 1L) == 9UL))), 3)), 1)) ^ p_47.f2) & 0x0520L)))) && g_63.f3) | 1L) , g_63.f1));
                (**g_129) = (safe_sub_func_int16_t_s_s(l_403, ((l_410 = (l_396 != (safe_div_func_int16_t_s_s(((l_406 , l_403) ^ (((g_408[4][1] = (void*)0) == l_311) < l_396)), p_47.f0)))) <= 0L)));
                (*g_328) &= ((++(*l_259)) , (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((-2L), 6)) < (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((((l_311 = &g_324) == ((safe_mul_func_int16_t_s_s((((l_403 ^= ((*g_325) = (!((void*)0 != &g_328)))) > p_47.f3) , 0xBC24L), (safe_unary_minus_func_uint64_t_u((l_205[1][1] = 0UL))))) , (void*)0)) == 1UL), p_47.f3)), p_47.f0))), (**g_129))));
                for (l_96.f2.f0 = 0; (l_96.f2.f0 <= 0); l_96.f2.f0 += 1)
                { 
                    uint8_t *l_427 = &l_364;
                    int32_t *l_434 = (void*)0;
                    int32_t l_436 = (-4L);
                    union U2 *l_439 = &g_368[1];
                    int32_t *l_447[3][4] = {{&l_205[5][4],&l_205[5][4],&l_362,&g_63.f1},{&g_40,&g_41.f1,&g_40,&l_362},{&g_40,&l_362,&l_362,&g_40}};
                    int i, j;
                    (**g_129) = (((safe_mul_func_uint8_t_u_u(((*l_427)--), (safe_mul_func_uint8_t_u_u((g_41 , (l_305.f1 <= ((safe_sub_func_uint64_t_u_u(18446744073709551608UL, (&l_205[0][3] != l_434))) != ((l_378[1][2][0] = l_435) != p_46)))), (**g_341))))) >= 0x0DL) <= p_47.f0);
                    (*g_328) = 0xFA0F31A7L;
                    (*g_328) &= ((**g_129) = (0UL >= ((l_436 , l_437[1][2]) > ((l_438 != l_439) && ((p_47.f0 | 1L) || 5L)))));
                    l_436 &= ((*g_130) = ((p_46 >= ((*l_259) = (l_440 != l_441))) == ((safe_sub_func_uint32_t_u_u(((*l_352) |= (safe_div_func_int8_t_s_s((**g_341), ((65529UL & 0x0D21L) , 254UL)))), g_152[3].f0)) && g_446)));
                    ++g_448;
                }
                for (g_221.f1 = 0; (g_221.f1 <= 0); g_221.f1 += 1)
                { 
                    return p_47.f4;
                }
            }
            (*g_328) = (safe_rshift_func_uint16_t_u_u(((*l_455)++), (l_386[3] < ((((0x483D43F8L == ((**g_129) = 0xFFDFBBA5L)) && 0x66L) && (safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((((safe_div_func_int64_t_s_s((((*l_479) = ((safe_lshift_func_int16_t_s_u(((p_47.f2 < ((*l_259)++)) ^ ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_204, l_399)), p_47.f0)), 6)) ^ 0xD6FE9566L)), l_377)) & l_364)) >= p_47.f0), (-3L))) > p_47.f0) ^ 0xB3ABL) <= 0x2628L), p_47.f4)) && g_368[0].f0.f0), 253UL)), l_480))) <= 0x4B7239B35DA1DD34LL))));
            (*g_328) &= (((*g_219) != ((*l_192) = l_481[0])) >= (-1L));
            for (l_435 = 0; (l_435 < 3); l_435++)
            { 
                int32_t *l_484[3][3][3] = {{{&l_64[5].f3,&g_40,&l_205[1][2]},{&g_41.f1,&g_221.f2.f1,&l_377},{&l_64[5].f3,&l_64[5].f3,&l_377}},{{&g_221.f2.f1,&g_41.f1,&l_205[1][2]},{&g_40,&l_64[5].f3,&g_40},{&g_40,&g_221.f2.f1,&l_64[5].f3}},{{&g_221.f2.f1,&g_40,&g_40},{&l_64[5].f3,&g_40,&l_205[1][2]},{&g_41.f1,&g_221.f2.f1,&l_377}}};
                int64_t l_485 = (-1L);
                int i, j, k;
                (*g_328) |= p_47.f0;
                --g_486;
                for (g_221.f2.f4 = 0; (g_221.f2.f4 <= 0); g_221.f2.f4 += 1)
                { 
                    int i, j;
                    (*g_130) ^= p_46;
                    return p_46;
                }
            }
        }
        if ((((safe_div_func_int8_t_s_s((((*l_491)--) <= 0xB4L), p_47.f4)) , &l_358) == &l_135))
        { 
            int16_t l_499 = 0xE812L;
            uint16_t **l_501 = &g_408[2][2];
            uint16_t ***l_502 = &l_501;
            int32_t *l_513 = &l_205[1][2];
            int32_t l_516 = (-1L);
            int32_t l_517 = 7L;
            int32_t l_518 = 1L;
            int32_t l_520 = 0x2E3E6FE7L;
            int32_t l_521 = (-2L);
            struct S0 l_525 = {0x3C98158CL,7L,0x7C7DL,0x6361D9B2L,0x1CFEL};
            union U1 *l_551 = &g_552;
            uint16_t l_558 = 65534UL;
            (*g_130) = ((+((((safe_mod_func_uint64_t_u_u((((safe_sub_func_uint32_t_u_u(((l_205[1][2] |= l_499) <= 0x68B26EDAL), g_63.f4)) , l_500) == ((*l_502) = l_501)), ((safe_mul_func_int16_t_s_s(p_47.f3, (&g_341 != &g_341))) && (*g_325)))) >= p_47.f4) != l_505) >= 0xAFA9L)) <= 0UL);
            for (l_305.f2.f1 = 0; (l_305.f2.f1 > 12); l_305.f2.f1 = safe_add_func_int16_t_s_s(l_305.f2.f1, 8))
            { 
                int32_t *l_514 = &l_378[1][2][0];
                int32_t *l_515[4][4] = {{&g_63.f3,&g_63.f3,&l_205[1][2],&l_378[1][2][0]},{&l_378[1][2][0],&l_505,&l_205[1][2],&l_505},{&g_63.f3,&g_40,(void*)0,&l_205[1][2]},{&l_505,&g_40,&g_40,&l_505}};
                int32_t l_540 = 5L;
                int i, j;
            }
            for (l_525.f3 = 2; (l_525.f3 >= 0); l_525.f3 -= 1)
            { 
                return g_152[3].f1;
            }
            for (l_377 = (-27); (l_377 == (-3)); l_377++)
            { 
                int32_t *l_555 = &l_64[5].f1;
                int32_t *l_556 = &g_221.f2.f1;
                int32_t *l_557[6] = {&l_517,&l_517,&l_517,&l_517,&l_517,&l_517};
                int i;
                l_558++;
            }
            if (p_47.f0)
            { 
                uint8_t l_585 = 254UL;
                for (g_221.f2.f4 = (-15); (g_221.f2.f4 < 54); g_221.f2.f4 = safe_add_func_uint16_t_u_u(g_221.f2.f4, 2))
                { 
                    int32_t *****l_566 = &g_564;
                    struct S0 * const l_573 = &g_63;
                    int32_t *l_578 = &l_376;
                    int32_t *l_579 = &l_377;
                    int32_t *l_580 = &l_376;
                    int32_t *l_581 = &l_378[1][2][0];
                    int32_t *l_582 = &l_505;
                    int32_t *l_583 = &l_378[1][2][0];
                    int32_t *l_584[5][1] = {{&g_63.f1},{&l_516},{&g_63.f1},{&l_516},{&g_63.f1}};
                    int i, j;
                    l_563 = (*g_129);
                    (*l_566) = g_564;
                    (*l_513) ^= (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((*g_325) &= p_47.f1) >= ((safe_lshift_func_int8_t_s_s((p_47.f3 , (p_47.f4 > (g_446 = ((void*)0 != l_573)))), 6)) | p_47.f2)), ((*l_491)++))), (safe_sub_func_uint64_t_u_u(((*l_551) , 1UL), (*l_563)))));
                    l_585++;
                }
                (*l_513) &= p_47.f1;
            }
            else
            { 
                struct S0 *l_588 = &l_96.f2;
                (*l_588) = g_41;
            }
        }
        else
        { 
            int16_t l_594 = 0x8131L;
            int32_t l_596 = 0x42AB4852L;
            int32_t l_597 = (-6L);
            int32_t l_598[6][7][2] = {{{(-9L),0x1D4C7B61L},{0xD0F5D205L,(-9L)},{1L,(-10L)},{(-1L),1L},{0xD0F5D205L,0xD0F5D205L},{1L,(-1L)},{(-10L),1L}},{{(-9L),0xD0F5D205L},{0x1D4C7B61L,(-9L)},{(-1L),0xE161B919L},{(-1L),(-9L)},{0x1D4C7B61L,0xD0F5D205L},{(-9L),1L},{(-10L),(-1L)}},{{1L,0xD0F5D205L},{0xD0F5D205L,1L},{(-1L),(-10L)},{1L,(-9L)},{0xD0F5D205L,0x1D4C7B61L},{(-9L),(-1L)},{0xE161B919L,(-1L)}},{{(-9L),0x1D4C7B61L},{0xD0F5D205L,(-9L)},{1L,(-10L)},{(-1L),1L},{0xD0F5D205L,0xD0F5D205L},{1L,(-1L)},{(-10L),1L}},{{(-9L),0xD0F5D205L},{0x1D4C7B61L,(-9L)},{(-1L),0xE161B919L},{(-1L),(-9L)},{0x1D4C7B61L,0xD0F5D205L},{(-9L),1L},{(-10L),(-1L)}},{{1L,0xD0F5D205L},{0xD0F5D205L,1L},{(-1L),(-10L)},{1L,(-9L)},{0xD0F5D205L,(-1L)},{0xE161B919L,1L},{0L,1L}}};
            int32_t *l_602 = &l_205[1][2];
            int32_t *l_603 = &l_378[0][5][0];
            int32_t *l_604 = &l_376;
            int32_t *l_605 = &l_378[1][2][0];
            int32_t *l_606 = &g_63.f3;
            int32_t *l_607 = &g_552.f2.f3;
            int32_t *l_608[6];
            int32_t l_609 = 0x0DCCDCA8L;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_608[i] = &g_552.f2.f1;
            for (l_146 = 0; (l_146 != 36); l_146 = safe_add_func_uint32_t_u_u(l_146, 9))
            { 
                uint32_t l_599 = 4294967295UL;
                for (p_47.f0 = 0; (p_47.f0 >= 47); p_47.f0 = safe_add_func_uint8_t_u_u(p_47.f0, 3))
                { 
                    int8_t l_593 = 0L;
                    int32_t *l_595[2][2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_595[i][j] = &g_63.f1;
                    }
                    (*g_328) = (*g_328);
                    ++l_599;
                }
            }
            l_610--;
            l_563 = (**g_565);
            (**g_565) = &l_378[2][0][0];
        }
        if (p_46)
        { 
            int16_t l_613 = 0L;
            p_47.f1 |= (*l_563);
            return l_613;
        }
        else
        { 
            uint8_t l_616[7][2] = {{0xD9L,0UL},{0xD9L,0UL},{0xD9L,0UL},{0xD9L,0UL},{0xD9L,0UL},{0xD9L,0UL},{0xD9L,0UL}};
            int i, j;
            for (p_47.f1 = 0; (p_47.f1 <= (-20)); p_47.f1 = safe_sub_func_int8_t_s_s(p_47.f1, 2))
            { 
                int32_t *l_619[1][7][1] = {{{(void*)0},{(void*)0},{&l_376},{(void*)0},{(void*)0},{&l_376},{(void*)0}}};
                struct S0 *l_634[4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_634[i] = &l_64[5];
                l_616[3][1] = (-1L);
                p_47.f3 |= ((*g_328) = (safe_lshift_func_uint16_t_u_s(0xE2A7L, 6)));
                l_620++;
                (***g_565) |= (((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u(((safe_mul_func_int16_t_s_s((*g_325), p_47.f1)) != (&g_326 == (l_630 , &g_374))))), ((safe_div_func_int16_t_s_s((g_633 , (-3L)), p_47.f4)) , 0xB3L))) || p_47.f4), (*g_325))) <= 4UL) != g_552.f0);
                l_64[0] = (g_41 = p_47);
            }
        }
        return l_635;
    }
    --l_641;
    return g_374;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
    transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
    transparent_crc(g_41.f3, "g_41.f3", print_hash_value);
    transparent_crc(g_41.f4, "g_41.f4", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);

    }
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_63.f1, "g_63.f1", print_hash_value);
    transparent_crc(g_63.f2, "g_63.f2", print_hash_value);
    transparent_crc(g_63.f3, "g_63.f3", print_hash_value);
    transparent_crc(g_63.f4, "g_63.f4", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_152[i].f0, "g_152[i].f0", print_hash_value);
        transparent_crc(g_152[i].f1, "g_152[i].f1", print_hash_value);
        transparent_crc(g_152[i].f3, "g_152[i].f3", print_hash_value);

    }
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_221.f0, "g_221.f0", print_hash_value);
    transparent_crc(g_221.f1, "g_221.f1", print_hash_value);
    transparent_crc(g_221.f3, "g_221.f3", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_368[i].f0.f0, "g_368[i].f0.f0", print_hash_value);
        transparent_crc(g_368[i].f0.f1, "g_368[i].f0.f1", print_hash_value);
        transparent_crc(g_368[i].f0.f2, "g_368[i].f0.f2", print_hash_value);
        transparent_crc(g_368[i].f0.f3, "g_368[i].f0.f3", print_hash_value);
        transparent_crc(g_368[i].f0.f4, "g_368[i].f0.f4", print_hash_value);

    }
    transparent_crc(g_374, "g_374", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_380[i][j][k], "g_380[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_381[i][j][k], "g_381[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_519[i], "g_519[i]", print_hash_value);

    }
    transparent_crc(g_552.f0, "g_552.f0", print_hash_value);
    transparent_crc(g_552.f1, "g_552.f1", print_hash_value);
    transparent_crc(g_552.f3, "g_552.f3", print_hash_value);
    transparent_crc(g_633.f0, "g_633.f0", print_hash_value);
    transparent_crc(g_633.f1, "g_633.f1", print_hash_value);
    transparent_crc(g_633.f3, "g_633.f3", print_hash_value);
    transparent_crc(g_867, "g_867", print_hash_value);
    transparent_crc(g_907, "g_907", print_hash_value);
    transparent_crc(g_927.f0, "g_927.f0", print_hash_value);
    transparent_crc(g_927.f1, "g_927.f1", print_hash_value);
    transparent_crc(g_927.f3, "g_927.f3", print_hash_value);
    transparent_crc(g_960, "g_960", print_hash_value);
    transparent_crc(g_981.f0, "g_981.f0", print_hash_value);
    transparent_crc(g_981.f1, "g_981.f1", print_hash_value);
    transparent_crc(g_981.f3, "g_981.f3", print_hash_value);
    transparent_crc(g_1020, "g_1020", print_hash_value);
    transparent_crc(g_1137.f0, "g_1137.f0", print_hash_value);
    transparent_crc(g_1137.f1, "g_1137.f1", print_hash_value);
    transparent_crc(g_1137.f3, "g_1137.f3", print_hash_value);
    transparent_crc(g_1167.f0, "g_1167.f0", print_hash_value);
    transparent_crc(g_1167.f1, "g_1167.f1", print_hash_value);
    transparent_crc(g_1167.f3, "g_1167.f3", print_hash_value);
    transparent_crc(g_1244, "g_1244", print_hash_value);
    transparent_crc(g_1419, "g_1419", print_hash_value);
    transparent_crc(g_1487, "g_1487", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1522[i].f0.f0, "g_1522[i].f0.f0", print_hash_value);
        transparent_crc(g_1522[i].f0.f1, "g_1522[i].f0.f1", print_hash_value);
        transparent_crc(g_1522[i].f0.f2, "g_1522[i].f0.f2", print_hash_value);
        transparent_crc(g_1522[i].f0.f3, "g_1522[i].f0.f3", print_hash_value);
        transparent_crc(g_1522[i].f0.f4, "g_1522[i].f0.f4", print_hash_value);

    }
    transparent_crc(g_1534.f0, "g_1534.f0", print_hash_value);
    transparent_crc(g_1534.f1, "g_1534.f1", print_hash_value);
    transparent_crc(g_1534.f3, "g_1534.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1599[i], "g_1599[i]", print_hash_value);

    }
    transparent_crc(g_1634, "g_1634", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1664[i][j], "g_1664[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1759.f0, "g_1759.f0", print_hash_value);
    transparent_crc(g_1759.f1, "g_1759.f1", print_hash_value);
    transparent_crc(g_1759.f3, "g_1759.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1762[i][j][k].f0.f0, "g_1762[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_1762[i][j][k].f0.f1, "g_1762[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_1762[i][j][k].f0.f2, "g_1762[i][j][k].f0.f2", print_hash_value);
                transparent_crc(g_1762[i][j][k].f0.f3, "g_1762[i][j][k].f0.f3", print_hash_value);
                transparent_crc(g_1762[i][j][k].f0.f4, "g_1762[i][j][k].f0.f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_1764.f0.f0, "g_1764.f0.f0", print_hash_value);
    transparent_crc(g_1764.f0.f1, "g_1764.f0.f1", print_hash_value);
    transparent_crc(g_1764.f0.f2, "g_1764.f0.f2", print_hash_value);
    transparent_crc(g_1764.f0.f3, "g_1764.f0.f3", print_hash_value);
    transparent_crc(g_1764.f0.f4, "g_1764.f0.f4", print_hash_value);
    transparent_crc(g_2098, "g_2098", print_hash_value);
    transparent_crc(g_2146, "g_2146", print_hash_value);
    transparent_crc(g_2324.f0, "g_2324.f0", print_hash_value);
    transparent_crc(g_2324.f1, "g_2324.f1", print_hash_value);
    transparent_crc(g_2324.f3, "g_2324.f3", print_hash_value);
    transparent_crc(g_2354, "g_2354", print_hash_value);
    transparent_crc(g_2460, "g_2460", print_hash_value);
    transparent_crc(g_2667.f0, "g_2667.f0", print_hash_value);
    transparent_crc(g_2667.f1, "g_2667.f1", print_hash_value);
    transparent_crc(g_2667.f3, "g_2667.f3", print_hash_value);
    transparent_crc(g_2880.f0.f0, "g_2880.f0.f0", print_hash_value);
    transparent_crc(g_2880.f0.f1, "g_2880.f0.f1", print_hash_value);
    transparent_crc(g_2880.f0.f2, "g_2880.f0.f2", print_hash_value);
    transparent_crc(g_2880.f0.f3, "g_2880.f0.f3", print_hash_value);
    transparent_crc(g_2880.f0.f4, "g_2880.f0.f4", print_hash_value);
    transparent_crc(g_2939, "g_2939", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
