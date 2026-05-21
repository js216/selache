// SPDX-License-Identifier: MIT
// cctest_csmith_f9ae0c34.c --- cctest case csmith_f9ae0c34 (csmith seed 4188933172)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xbdbebf69 */

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

// Options:   -s 4188933172 -o /tmp/csmith_gen_b5kvetr_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S1 {
   const int8_t  f0;
   uint64_t  f1;
   uint16_t  f2;
};

struct S2 {
   int32_t  f0;
   const int8_t  f1;
   struct S1  f2;
};

union U3 {
   int16_t  f0;
   struct S1  f1;
   uint64_t  f2;
};


static int64_t g_11[1] = {0x65720B963AB1943CLL};
static int16_t g_17 = 0L;
static struct S2 g_18[3] = {{1L,0xF1L,{1L,6UL,0xD271L}},{1L,0xF1L,{1L,6UL,0xD271L}},{1L,0xF1L,{1L,6UL,0xD271L}}};
static union U3 g_37[1][2][2] = {{{{4L},{4L}},{{4L},{4L}}}};
static uint32_t g_43 = 0xEDB9CC51L;
static uint32_t g_45[1][4] = {{0x28F0E43DL,0x28F0E43DL,0x28F0E43DL,0x28F0E43DL}};
static uint64_t g_50 = 1UL;
static int16_t g_55[5][3] = {{0x7402L,0x7402L,0x7402L},{0x7402L,0x7402L,0x7402L},{0x7402L,0x7402L,0x7402L},{0x7402L,0x7402L,0x7402L},{0x7402L,0x7402L,0x7402L}};
static int8_t g_57 = (-5L);
static int32_t g_64 = (-4L);
static int32_t g_65 = 0x75B4C718L;
static uint32_t g_66[3] = {0xD7EEACC2L,0xD7EEACC2L,0xD7EEACC2L};
static uint16_t g_71[2] = {0x342BL,0x342BL};
static uint64_t g_88 = 0UL;
static int32_t g_91 = 0x767F9297L;
static uint16_t g_110 = 65535UL;
static int64_t g_112[4][2] = {{0x08ECB2A787E59EB0LL,0x08ECB2A787E59EB0LL},{0x08ECB2A787E59EB0LL,0x08ECB2A787E59EB0LL},{0x08ECB2A787E59EB0LL,0x08ECB2A787E59EB0LL},{0x08ECB2A787E59EB0LL,0x08ECB2A787E59EB0LL}};
static uint8_t g_113 = 250UL;
static uint16_t g_135 = 65528UL;
static uint16_t g_144 = 8UL;
static uint32_t g_172 = 9UL;



static uint8_t  func_1(void);
static int16_t  func_5(uint16_t  p_6, int16_t  p_7, const int16_t  p_8, const int32_t  p_9, int16_t  p_10);
static int16_t  func_12(uint32_t  p_13, int8_t  p_14, int16_t  p_15, struct S2  p_16);
static int16_t  func_28(const struct S2  p_29, uint8_t  p_30, struct S2  p_31);




static uint8_t  func_1(void)
{ 
    uint16_t l_2 = 0xF0AAL;
    int8_t l_56 = 0x14L;
    int32_t l_87 = 0x5C5CB2EAL;
    uint32_t l_116 = 0UL;
    uint32_t l_121 = 0xF5FB1240L;
    int32_t l_129 = (-10L);
    int32_t l_134 = 0xCDD54503L;
    union U3 l_159 = {-4L};
    l_2 = (-1L);
    if ((((safe_div_func_uint16_t_u_u(l_2, func_5(g_11[0], func_12(g_11[0], (g_17 ^= g_11[0]), l_2, g_18[0]), g_18[0].f1, l_2, l_2))) | 3L) | l_2))
    { 
        uint32_t l_58 = 0x85E26160L;
        int32_t l_63 = 0x843C9D40L;
        for (g_17 = 0; (g_17 <= 0); g_17 += 1)
        { 
            int i;
            g_55[3][2] = ((g_37[0][0][1].f1.f2 = g_11[g_17]) , ((((1UL ^ (((safe_add_func_int64_t_s_s(0xF656345D18A93828LL, ((((l_2 ^ 0x83L) && g_45[0][2]) , 0xDAL) >= g_45[0][2]))) <= g_50) || (-1L))) != 0UL) && 0x0404L) , 0L));
            if (l_56)
                break;
            l_58--;
        }
        for (g_17 = 0; (g_17 == (-12)); --g_17)
        { 
            uint32_t l_85[2][5][1] = {{{0UL},{18446744073709551606UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551606UL}},{{0UL},{0UL},{0x91B20769L},{0x91B20769L},{0UL}}};
            int i, j, k;
            --g_66[2];
            for (l_58 = 20; (l_58 != 6); l_58 = safe_sub_func_int16_t_s_s(l_58, 7))
            { 
                int32_t l_86 = 0L;
                ++g_71[1];
                g_88 = (!(l_87 = ((safe_rshift_func_int16_t_s_s((safe_div_func_int64_t_s_s((((safe_sub_func_uint8_t_u_u(g_50, (0x9AF0L ^ (safe_add_func_int16_t_s_s(((g_57 = g_57) || 0L), l_85[0][0][0]))))) || l_86) == g_64), g_55[3][2])), 1)) && l_58)));
            }
        }
        g_91 = ((g_37[0][1][0] , ((l_56 >= ((safe_add_func_uint8_t_u_u(l_58, l_63)) , g_11[0])) | g_71[0])) & g_11[0]);
    }
    else
    { 
        uint16_t l_94 = 65535UL;
        int32_t l_111[4][2];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_111[i][j] = 0xD077F077L;
        }
        for (g_91 = (-9); (g_91 <= 10); g_91 = safe_add_func_int32_t_s_s(g_91, 5))
        { 
            int16_t l_95 = 0x2332L;
            l_95 = l_94;
            g_110 = (((safe_mul_func_uint8_t_u_u(0x3DL, ((l_94 || (safe_mod_func_int8_t_s_s((0x7EL & (safe_rshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((1L != 0xE01DL), l_94)), g_66[2])) > 1UL) >= 0x7406L), 9)) != g_91), 8L)) != g_55[3][2]), 15))), 255UL))) >= 0x43L))) <= l_87) < l_87);
        }
        g_91 = (-1L);
        ++g_113;
    }
    if ((l_116 ^ ((((safe_mul_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((l_129 = ((0xBEL >= (l_87 = l_121)) <= (safe_add_func_int32_t_s_s((g_91 = (safe_div_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(0xB55DL)), l_116)) , l_56), 0x9C94463EL))), g_18[0].f2.f0)))), g_112[0][0])) , l_116), 0xD4L)) ^ g_18[0].f1) , g_45[0][2]) && l_116)))
    { 
        uint8_t l_149 = 0x20L;
        int32_t l_150 = 0x515A1FB0L;
        int32_t l_161 = 0xAF6FF180L;
        uint16_t l_183 = 1UL;
lbl_174:
        for (g_113 = (-24); (g_113 == 60); ++g_113)
        { 
            int64_t l_132 = 0L;
            int32_t l_133 = 0L;
            g_135--;
            g_91 = (safe_div_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(g_57, ((g_43 || (((safe_mul_func_uint8_t_u_u(g_18[0].f2.f0, (l_133 , 0x8AL))) > 18446744073709551615UL) >= l_2)) | g_45[0][2]))) ^ g_17), 0x72L));
        }
        if (((1L ^ (g_144 = (g_57 ^= l_87))) && ((((--g_113) != (safe_mul_func_uint16_t_u_u(((((l_149 = (-1L)) <= l_150) && g_64) > 0x9DL), g_64))) != 0x06L) == (-1L))))
        { 
            int16_t l_160 = 0xE95AL;
            int16_t l_173 = 0x8484L;
            int32_t l_177 = 0L;
            int8_t l_184 = 0x4FL;
            l_161 ^= ((~((safe_mod_func_uint8_t_u_u((((((((+(safe_sub_func_uint64_t_u_u(g_11[0], (((0L && (safe_lshift_func_int8_t_s_s((l_159 , l_149), 2))) && l_116) > l_150)))) , l_150) | l_160) , l_160) <= l_150) < l_149) == 3UL), l_149)) | 0x889812E294E6100BLL)) != 0x35CC4819D74962ECLL);
            for (l_159.f0 = 0; (l_159.f0 <= 1); l_159.f0 += 1)
            { 
                int32_t l_178[4][1] = {{0x1B8A4D6DL},{1L},{0x1B8A4D6DL},{1L}};
                int i, j;
                g_91 |= ((l_173 = (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_71[l_159.f0], (g_37[0][0][1].f1.f2 = ((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint64_t_u_u(l_150, ((g_18[0].f2.f2 || g_113) >= l_129))) >= l_160) < g_43), g_172)) < l_121)))), g_88)) | l_134), 1))) ^ 0x04L);
                if (l_150)
                    goto lbl_174;
                l_177 = ((((((safe_div_func_uint8_t_u_u((((--g_50) & (g_65 >= (safe_mul_func_uint8_t_u_u(g_11[0], l_160)))) < 0x89L), g_11[0])) != g_88) > 5UL) & l_121) != l_183) >= l_116);
            }
            return l_184;
        }
        else
        { 
            for (l_150 = 0; (l_150 <= 7); ++l_150)
            { 
                uint8_t l_189 = 4UL;
                uint64_t l_190 = 0xA9AA2B5C891F83F8LL;
                int32_t l_191 = 0L;
                l_191 = (safe_rshift_func_int16_t_s_u((g_17 = ((l_190 = l_189) | 9UL)), 8));
            }
        }
        for (l_129 = 0; (l_129 <= 2); l_129 += 1)
        { 
            int32_t l_198 = 1L;
            for (g_43 = 0; (g_43 <= 1); g_43 += 1)
            { 
                int i, j;
                g_91 = g_55[(g_43 + 1)][g_43];
                l_134 = g_112[g_43][g_43];
                l_198 = (g_91 = (~(((safe_add_func_int8_t_s_s(g_45[0][2], ((g_66[0] , ((!(safe_lshift_func_uint16_t_u_s(0x52C5L, 5))) || (((3L > l_161) | g_172) <= (-6L)))) , g_43))) > 0UL) | 6UL)));
            }
            for (g_50 = 0; (g_50 <= 2); g_50 += 1)
            { 
                int i, j;
                return g_55[(g_50 + 2)][g_50];
            }
        }
    }
    else
    { 
        int16_t l_201 = 5L;
        g_91 = (l_134 > (safe_mul_func_uint16_t_u_u(l_201, (((g_57 = l_2) ^ (safe_div_func_uint16_t_u_u((g_71[1] = ((safe_mod_func_int32_t_s_s((safe_mod_func_int64_t_s_s((0x54040A6DBE89911ELL || g_43), g_11[0])), l_129)) ^ g_43)), l_201))) , l_201))));
    }
    return g_18[0].f2.f1;
}



static int16_t  func_5(uint16_t  p_6, int16_t  p_7, const int16_t  p_8, const int32_t  p_9, int16_t  p_10)
{ 
    const struct S2 l_32[2][2] = {{{0x67268F57L,0x54L,{0xB1L,0x079D62BFEED1B4B1LL,65535UL}},{0x67268F57L,0x54L,{0xB1L,0x079D62BFEED1B4B1LL,65535UL}}},{{0x67268F57L,0x54L,{0xB1L,0x079D62BFEED1B4B1LL,65535UL}},{0x67268F57L,0x54L,{0xB1L,0x079D62BFEED1B4B1LL,65535UL}}}};
    int16_t l_51 = (-3L);
    int32_t l_52 = (-9L);
    int i, j;
    l_52 = (safe_div_func_uint8_t_u_u(255UL, (safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u(((p_7 == g_18[0].f2.f1) && (safe_div_func_int16_t_s_s(func_28(l_32[0][0], l_32[0][0].f2.f2, l_32[0][1]), 3L))), l_51)), l_32[0][0].f0))));
    return g_37[0][0][1].f0;
}



static int16_t  func_12(uint32_t  p_13, int8_t  p_14, int16_t  p_15, struct S2  p_16)
{ 
    uint8_t l_19 = 0x13L;
    l_19 = 0x966EF3B0L;
    return g_18[0].f2.f0;
}



static int16_t  func_28(const struct S2  p_29, uint8_t  p_30, struct S2  p_31)
{ 
    uint32_t l_41 = 0xA6CBABA2L;
    int32_t l_42 = (-1L);
lbl_44:
    for (p_30 = 14; (p_30 != 33); ++p_30)
    { 
        const uint16_t l_40 = 0UL;
        g_43 |= ((((safe_mod_func_uint16_t_u_u(p_31.f0, (g_37[0][0][1] , (l_42 = (l_41 ^= (safe_div_func_uint64_t_u_u(l_40, p_31.f2.f2))))))) <= p_31.f1) < p_30) < g_18[0].f2.f2);
        if (l_41)
            goto lbl_44;
    }
    g_45[0][2]++;
    for (p_31.f2.f1 = 18; (p_31.f2.f1 < 39); p_31.f2.f1 = safe_add_func_int64_t_s_s(p_31.f2.f1, 6))
    { 
        g_50 ^= (l_42 = 1L);
    }
    return p_29.f2.f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);

    }
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_18[i].f0, "g_18[i].f0", print_hash_value);
        transparent_crc(g_18[i].f1, "g_18[i].f1", print_hash_value);
        transparent_crc(g_18[i].f2.f0, "g_18[i].f2.f0", print_hash_value);
        transparent_crc(g_18[i].f2.f1, "g_18[i].f2.f1", print_hash_value);
        transparent_crc(g_18[i].f2.f2, "g_18[i].f2.f2", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_37[i][j][k].f0, "g_37[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_43, "g_43", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_45[i][j], "g_45[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_55[i][j], "g_55[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_71[i], "g_71[i]", print_hash_value);

    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_112[i][j], "g_112[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
