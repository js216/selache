// SPDX-License-Identifier: MIT
// cctest_csmith_26746e2c.c --- cctest case csmith_26746e2c (csmith seed 645164588)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfb9b14f2 */

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

// Options:   -s 645164588 -o /tmp/csmith_gen_84z4egeu/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   int16_t  f1;
   const int8_t  f2;
};

union U1 {
   uint32_t  f0;
};

union U2 {
   int16_t  f0;
};


static int32_t g_2[3][4][3] = {{{(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L)}},{{(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L)}},{{(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L)}}};
static int32_t g_13 = 0xCAFE8B0DL;
static uint8_t g_15 = 0xECL;
static uint32_t g_54 = 0xBC6C2DB6L;
static uint32_t g_64 = 5UL;
static int32_t g_66 = (-3L);
static int16_t g_71[1][4] = {{0x11BCL,0x11BCL,0x11BCL,0x11BCL}};
static int32_t g_72[1] = {(-1L)};
static struct S0 g_76 = {0x5EE8DA53L,0xC8A1L,0x61L};
static uint8_t g_77 = 0xB6L;
static uint8_t g_105 = 0xFAL;
static int32_t g_106 = 0xD055D51BL;
static uint32_t g_149 = 0x8A9104C8L;
static uint8_t g_239 = 246UL;



static const struct S0  func_1(void);
static int8_t  func_11(uint16_t  p_12);
static int16_t  func_20(uint64_t  p_21, const union U1  p_22);
static uint32_t  func_23(uint8_t  p_24);




static const struct S0  func_1(void)
{ 
    int32_t l_14 = 0L;
    union U2 l_242 = {1L};
    uint8_t l_250 = 0x88L;
    const struct S0 l_252[1] = {{2L,-2L,1L}};
    int i;
    for (g_2[0][2][1] = 0; (g_2[0][2][1] > 27); ++g_2[0][2][1])
    { 
        int64_t l_229[1];
        union U1 l_236 = {0x863CB28DL};
        int64_t l_237 = 0x97EF1F1ADF2D24EALL;
        uint32_t l_238[4][3] = {{0x0BBC23E9L,0x0BBC23E9L,0x0BBC23E9L},{0x27AFF6EFL,0xB4F93AD4L,0x27AFF6EFL},{0x0BBC23E9L,0x0BBC23E9L,0x0BBC23E9L},{0x27AFF6EFL,0xB4F93AD4L,0x27AFF6EFL}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_229[i] = 0L;
        g_239 ^= (((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(func_11((++g_15)), 3)), 6)) ^ ((safe_add_func_int64_t_s_s(((g_2[2][1][0] , (l_229[0] > (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u((l_236 , g_2[0][2][1]), l_229[0])) | (-1L)) == 3UL), l_14)), g_71[0][1])))) < l_237), 0xC0B7275D6FB8A8D5LL)) < 0x968FDB46EF48D875LL)) > l_238[2][1]);
    }
    g_72[0] = 7L;
    for (g_64 = 0; (g_64 < 30); ++g_64)
    { 
        int64_t l_245 = (-7L);
        int32_t l_251 = 0L;
        g_72[0] = (l_242 , (g_2[0][2][1] = (safe_sub_func_int32_t_s_s(l_245, ((safe_add_func_uint8_t_u_u((g_77 = g_64), (safe_add_func_int8_t_s_s((0x45CE233F4ACB368DLL | 0x68E2EF62936AD9C8LL), g_72[0])))) ^ 0xC039EE50CD27CE99LL)))));
        l_251 = l_250;
        if (l_245)
            continue;
    }
    return l_252[0];
}



static int8_t  func_11(uint16_t  p_12)
{ 
    uint64_t l_33 = 0UL;
    const struct S0 l_38[3] = {{3L,1L,0x62L},{3L,1L,0x62L},{3L,1L,0x62L}};
    const union U1 l_156 = {7UL};
    int32_t l_223[1][4][5] = {{{0xD5D7125CL,0x04D3D9F2L,0xD5D7125CL,7L,1L},{0x41EE8A5DL,0x1E81E1FAL,1L,0x1E81E1FAL,0x41EE8A5DL},{0xD5D7125CL,0x1E81E1FAL,0x04D3D9F2L,0x41EE8A5DL,0x04D3D9F2L},{0x04D3D9F2L,0x04D3D9F2L,1L,0x41EE8A5DL,0x2F1836A7L}}};
    uint8_t l_224 = 1UL;
    int i, j, k;
    if (((safe_rshift_func_int16_t_s_u(func_20(((-1L) <= (func_23((g_15 &= (((0xD5DEL | (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((l_33--) < 4UL), (safe_div_func_int16_t_s_s(((p_12 , l_38[2]) , p_12), p_12)))), g_2[0][2][1])), g_2[1][2][0])), g_2[0][0][1]))) <= (-1L)) , g_2[0][2][1]))) > g_76.f1)), l_156), g_2[2][3][0])) & p_12))
    { 
        return p_12;
    }
    else
    { 
        uint32_t l_222 = 18446744073709551615UL;
        l_222 = g_149;
    }
    --l_224;
    return l_38[2].f2;
}



static int16_t  func_20(uint64_t  p_21, const union U1  p_22)
{ 
    int64_t l_172 = 0x8B2B8B245C393FB4LL;
    uint32_t l_173 = 18446744073709551609UL;
    int32_t l_194 = 0xF22EBF56L;
    int32_t l_204 = (-1L);
    int32_t l_205[1];
    uint16_t l_206[2][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_205[i] = 0x2B228E05L;
    for (g_77 = 5; (g_77 >= 35); g_77 = safe_add_func_uint64_t_u_u(g_77, 1))
    { 
        int32_t l_171 = 0xDDF05FF3L;
        union U2 l_180 = {0x8E12L};
        if (((safe_mod_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_u((18446744073709551608UL != (p_22.f0 == g_76.f2)), (((p_22 , p_22.f0) >= 0xB3B3C507C2273286LL) , g_13))) < 0x8BF106CFL) || p_21), 2)) <= l_171), l_172)), l_173)) > g_2[2][2][1]), l_173)) >= l_172) && 7L), p_21)) == 3UL))
        { 
            return g_64;
        }
        else
        { 
            uint32_t l_176 = 4294967295UL;
            uint32_t l_192 = 0x52EA8D45L;
            int32_t l_193 = 0x2CE3EA4BL;
            for (g_76.f1 = 0; (g_76.f1 <= 0); g_76.f1 += 1)
            { 
                int i;
                g_72[g_76.f1] &= (-5L);
                if (g_72[g_76.f1])
                    continue;
            }
            l_194 ^= (safe_sub_func_int8_t_s_s(l_176, (safe_mul_func_uint16_t_u_u((+(l_180 , ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((l_193 = (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_76.f1, (safe_div_func_uint64_t_u_u((~l_192), l_192)))), 0xBAC349C0L))), 3)), 5)) && l_172))), g_71[0][1]))));
        }
        return p_21;
    }
    for (g_77 = 0; (g_77 < 15); g_77 = safe_add_func_uint8_t_u_u(g_77, 3))
    { 
        int32_t l_202 = 0xADCE77D4L;
        int32_t l_203[1][3][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_203[i][j][k] = 1L;
            }
        }
        for (g_64 = 0; (g_64 <= 0); g_64 += 1)
        { 
            int32_t l_197 = (-1L);
            int32_t l_198 = 0x3EEDCE34L;
            int32_t l_199 = (-6L);
            int32_t l_200 = 0x7AF3233EL;
            int32_t l_201[3];
            int i;
            for (i = 0; i < 3; i++)
                l_201[i] = 0x7E234033L;
            l_206[0][1]++;
        }
        l_203[0][1][0] &= (((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(g_149, (safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((g_2[0][3][2] | ((safe_mod_func_uint8_t_u_u((((g_13 = ((+(g_76 , ((0x8977L == l_202) || 0x64F3EF624C376665LL))) || g_76.f1)) , p_22.f0) <= (-1L)), l_202)) > 0x1AL)), g_149)), 254UL)))) && g_72[0]), 1UL)), 1L)) ^ p_22.f0) | p_21);
    }
    return l_173;
}



static uint32_t  func_23(uint8_t  p_24)
{ 
    uint32_t l_39 = 0UL;
    uint16_t l_52 = 65528UL;
    int32_t l_55 = 0x85C2C102L;
    uint8_t l_132 = 255UL;
    int64_t l_150 = 0x30DB1924C0CEF9D8LL;
    if ((g_15 , (l_39 ^= (g_2[0][0][0] | g_13))))
    { 
        const uint64_t l_42 = 1UL;
        struct S0 l_51 = {1L,0x87C2L,-7L};
        int32_t l_53 = 5L;
        union U2 l_61 = {0x194EL};
        if ((((l_55 = (((4L && ((g_54 = (safe_mul_func_uint16_t_u_u(l_42, ((l_53 = (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((l_51.f0 = (l_51 , 9L)) >= (-1L)), 0xD905L)), l_52)), 0x2097756EL)), 3))) ^ g_2[0][2][1])))) < l_39)) ^ p_24) , g_15)) ^ g_15) && l_42))
        { 
            int32_t l_65 = 0xD7B1ECBCL;
            int32_t l_69 = 0x22C2642AL;
            int32_t l_70 = 0xC0BF2888L;
            l_55 = (safe_lshift_func_uint16_t_u_u(65535UL, p_24));
            g_66 = (((~(l_65 |= (safe_mod_func_uint8_t_u_u((l_61 , (p_24 <= (safe_sub_func_int16_t_s_s(g_2[0][2][1], (g_64 &= g_2[0][3][1]))))), 1UL)))) && l_65) == g_54);
            for (l_39 = 0; (l_39 >= 14); l_39 = safe_add_func_uint16_t_u_u(l_39, 2))
            { 
                uint32_t l_73[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_73[i] = 0xF2DB44E9L;
                l_55 = g_64;
                g_66 = 1L;
                l_73[1]--;
            }
        }
        else
        { 
            int8_t l_79 = (-4L);
            if ((p_24 | ((g_77 ^= (g_76 , (p_24 != g_2[0][2][1]))) < g_64)))
            { 
                int32_t l_78 = 0x1179D740L;
                int32_t l_80 = (-7L);
                l_78 = (((p_24 > l_78) & ((l_79 ^ (((l_80 = l_61.f0) & g_54) | l_55)) , 0xFCL)) <= p_24);
            }
            else
            { 
                int32_t l_98 = 0xDF2DC135L;
                g_72[0] = (g_2[0][2][1] && (+((g_2[0][2][1] | (g_77 = (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s(l_53, (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(p_24, g_66)), 0x83651A330C13F5EDLL)), p_24)), 7)) || g_72[0]), l_98)))), l_52)), p_24)))) > g_76.f1)));
            }
        }
        g_66 ^= (g_72[0] = (((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((l_55 = (g_105 = p_24)), (l_53 = (g_106 = g_76.f0)))) < g_76.f1), (safe_mul_func_int8_t_s_s((((g_2[0][2][1] == 0x0FL) , 0x80B3L) | g_71[0][1]), p_24)))), 4)) > l_39) & g_71[0][1]));
    }
    else
    { 
        int16_t l_109 = (-7L);
        l_109 = l_55;
        l_55 = (((l_55 ^ (safe_div_func_int64_t_s_s(g_13, g_72[0]))) || ((safe_add_func_int64_t_s_s(((l_109 || g_72[0]) ^ g_54), l_109)) > p_24)) | l_39);
    }
    for (g_106 = 0; (g_106 >= 0); g_106 -= 1)
    { 
        union U1 l_126 = {1UL};
        const uint16_t l_131 = 5UL;
        int i;
        for (g_66 = 0; (g_66 >= 0); g_66 -= 1)
        { 
            int i;
            return g_72[g_106];
        }
        g_72[g_106] = g_72[g_106];
        if ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((p_24--) & (-9L)), (((((1L < (l_132 = (safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s((l_126 , (safe_div_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(g_54, g_71[0][1])) , l_131) && 18446744073709551606UL), g_72[g_106]))), l_131)), l_39)), l_55)))) < 0x83892296L) == g_2[0][2][1]) ^ l_55) , 1UL))), 0)))
        { 
            uint8_t l_146[4][4][5] = {{{0x01L,0x71L,0x29L,0xA3L,0x00L},{0xCDL,0x71L,0x7EL,0x71L,0xCDL},{0UL,0x29L,250UL,0UL,0UL},{0xCEL,255UL,255UL,0xFAL,0x4AL}},{{0x96L,0x18L,8UL,0x29L,0UL},{5UL,0xFAL,0xA3L,0x8EL,0xCDL},{0UL,0xCDL,0x54L,255UL,0x00L},{0xFAL,250UL,0x54L,0x54L,250UL}},{{249UL,0x9FL,0xA3L,0x18L,0xFAL},{0x18L,0x59L,8UL,0x00L,0x71L},{250UL,8UL,255UL,0xCEL,0UL},{0x18L,0x8EL,250UL,0x9FL,8UL}},{{249UL,255UL,0x7EL,246UL,0UL},{0xFAL,0x9FL,0x29L,246UL,0x29L},{0UL,0UL,0x96L,0x9FL,246UL},{5UL,0xA3L,0x9FL,0xCEL,249UL}}};
            int32_t l_151[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_151[i] = 0xE412C475L;
            for (g_77 = (-29); (g_77 >= 49); g_77++)
            { 
                int16_t l_148 = 0L;
                l_151[2] = (safe_lshift_func_uint16_t_u_u((!(l_150 = ((p_24 && (safe_rshift_func_uint8_t_u_u(((((g_149 = ((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((l_131 == ((safe_rshift_func_uint8_t_u_s(l_146[2][1][3], 0)) , ((~g_54) <= l_132))) , g_71[0][1]) < p_24), l_126.f0)), l_148)) >= 4294967295UL)) < g_72[0]) || g_64) > p_24), g_66))) <= p_24))), 3));
            }
            return p_24;
        }
        else
        { 
            uint16_t l_153 = 0x1E7DL;
            for (l_132 = 0; (l_132 <= 0); l_132 += 1)
            { 
                int32_t l_152 = 0x18A46498L;
                int i;
                --l_153;
                if (g_72[l_132])
                    continue;
            }
        }
    }
    return g_105;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_71[i][j], "g_71[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);

    }
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_76.f2, "g_76.f2", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
