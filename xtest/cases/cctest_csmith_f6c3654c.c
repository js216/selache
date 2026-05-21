// SPDX-License-Identifier: MIT
// cctest_csmith_f6c3654c.c --- cctest case csmith_f6c3654c (csmith seed 4140000588)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6580c362 */

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

// Options:   -s 4140000588 -o /tmp/csmith_gen_8kdj7dvu/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint64_t  f0;
   const int32_t  f1;
   int32_t  f2;
   int16_t  f3;
   int16_t  f4;
   const int64_t  f5;
   const int32_t  f6;
};

union U1 {
   struct S0  f0;
   const uint8_t  f1;
};

union U2 {
   int8_t * const  f0;
   struct S0  f1;
   int32_t  f2;
};

union U3 {
   struct S0  f0;
};


static int8_t g_4 = (-7L);
static int8_t *g_3 = &g_4;
static int32_t g_7 = 0x6310FECAL;
static uint16_t g_32 = 3UL;
static const union U2 g_42 = {0};
static int32_t g_45 = 0L;
static int32_t g_64[1][4] = {{0x772BE76DL,0x772BE76DL,0x772BE76DL,0x772BE76DL}};
static uint16_t g_86 = 65534UL;
static uint16_t *g_85[2][6][6] = {{{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86}},{{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86}}};
static uint16_t g_119 = 0xB61AL;
static struct S0 g_124[2] = {{0x777E27CC4FDDAEBDLL,8L,0x82719CDBL,0x8084L,0x4B6CL,0xC4D48E721F199CA3LL,-8L},{0x777E27CC4FDDAEBDLL,8L,0x82719CDBL,0x8084L,0x4B6CL,0xC4D48E721F199CA3LL,-8L}};
static int8_t g_155 = (-9L);
static int32_t g_156[5][1][3] = {{{0xD7F6A1A7L,0xD7F6A1A7L,0xD7F6A1A7L}},{{0x20917177L,(-1L),0x20917177L}},{{0xD7F6A1A7L,0xD7F6A1A7L,0xD7F6A1A7L}},{{0x20917177L,(-1L),0x20917177L}},{{0xD7F6A1A7L,0xD7F6A1A7L,0xD7F6A1A7L}}};
static uint32_t g_163 = 4294967290UL;
static struct S0 g_259 = {2UL,-1L,0x1DC6F38FL,0L,0x981DL,0x3EEEFE5E05E85FD5LL,0xD2B4CA8EL};
static int32_t *g_300 = (void*)0;
static int32_t **g_320 = &g_300;
static const int8_t * const g_340 = &g_155;
static const int8_t * const *g_339[3][4] = {{&g_340,&g_340,&g_340,&g_340},{&g_340,&g_340,&g_340,&g_340},{&g_340,&g_340,&g_340,&g_340}};
static const int8_t * const **g_338[1][7] = {{&g_339[0][0],&g_339[0][0],&g_339[0][0],&g_339[0][0],&g_339[0][0],&g_339[0][0],&g_339[0][0]}};
static int8_t **g_342[5][3] = {{&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3}};
static int8_t ***g_341 = &g_342[4][1];
static int8_t ***g_345 = &g_342[4][1];
static int64_t g_371[6][7] = {{0xA7E5A90CAF59095CLL,8L,0xFD4B3F3EEA663EB9LL,0x4B2567C547BACB7DLL,(-9L),0xBCFB39EDF9B02AEBLL,(-1L)},{0L,0x3291E2A82DE67464LL,0xA7E5A90CAF59095CLL,0x15E4A774B48B6067LL,0xA7E5A90CAF59095CLL,0x3291E2A82DE67464LL,0L},{0x2CD437CF3C3DFB06LL,0x15E4A774B48B6067LL,0x3291E2A82DE67464LL,(-1L),0xA7E5A90CAF59095CLL,4L,8L},{0xF632B0800DAFAC68LL,4L,0x4B2567C547BACB7DLL,0xA7E5A90CAF59095CLL,(-9L),(-9L),0xA7E5A90CAF59095CLL},{0x3291E2A82DE67464LL,0x43BF57C5B8ABC3ADLL,0x3291E2A82DE67464LL,0xD901D7B244248F9BLL,0xBCFB39EDF9B02AEBLL,0xF632B0800DAFAC68LL,4L},{0x3291E2A82DE67464LL,(-1L),0xA7E5A90CAF59095CLL,4L,8L,0x43BF57C5B8ABC3ADLL,0xF632B0800DAFAC68LL}};
static int32_t *g_402 = &g_64[0][3];
static uint16_t g_433[4][7] = {{65532UL,3UL,0xB9DBL,0xBA32L,0xB9DBL,3UL,65532UL},{65535UL,1UL,0UL,0x5F98L,0xBA32L,0UL,65532UL},{0xBA32L,65532UL,65533UL,65533UL,65532UL,0xBA32L,65535UL},{3UL,65533UL,0UL,65535UL,65535UL,0xBA32L,0xBA32L}};
static uint8_t g_438 = 250UL;
static uint32_t g_442 = 0x4D8F6883L;
static const uint16_t g_450[3] = {65532UL,65532UL,65532UL};
static const uint16_t g_452 = 0x2F5FL;
static uint64_t *g_468 = &g_124[0].f0;
static union U2 g_499 = {0};
static int16_t g_514 = 0x529CL;
static uint16_t g_515 = 0UL;
static int64_t *g_558 = &g_371[3][0];
static int64_t **g_557 = &g_558;
static int32_t ***g_566 = (void*)0;
static int32_t ****g_565 = &g_566;
static union U1 g_579[2] = {{{18446744073709551607UL,1L,7L,0x2E2AL,-1L,1L,0L}},{{18446744073709551607UL,1L,7L,0x2E2AL,-1L,1L,0L}}};
static union U1 ** const g_626 = (void*)0;
static union U3 g_645[4][6][1] = {{{{{0xFA9B123C6BB37CA7LL,0x6FECE31EL,0x7823978BL,-1L,0x943FL,0x2D11B9019512955FLL,2L}}},{{{1UL,0x563A4C6FL,0x0153A059L,1L,7L,4L,1L}}},{{{0x8DDFC343078D3A61LL,-1L,-1L,1L,0x3E07L,0x90D696C140D1A472LL,0x90B76121L}}},{{{1UL,0x563A4C6FL,0x0153A059L,1L,7L,4L,1L}}},{{{0xFA9B123C6BB37CA7LL,0x6FECE31EL,0x7823978BL,-1L,0x943FL,0x2D11B9019512955FLL,2L}}},{{{1UL,0x3435E349L,-1L,0x6B66L,-9L,0x6B3B71F17BE4AF97LL,-3L}}}},{{{{0xFA9B123C6BB37CA7LL,0x6FECE31EL,0x7823978BL,-1L,0x943FL,0x2D11B9019512955FLL,2L}}},{{{1UL,0x563A4C6FL,0x0153A059L,1L,7L,4L,1L}}},{{{0x8DDFC343078D3A61LL,-1L,-1L,1L,0x3E07L,0x90D696C140D1A472LL,0x90B76121L}}},{{{1UL,0x563A4C6FL,0x0153A059L,1L,7L,4L,1L}}},{{{0xFA9B123C6BB37CA7LL,0x6FECE31EL,0x7823978BL,-1L,0x943FL,0x2D11B9019512955FLL,2L}}},{{{1UL,0x3435E349L,-1L,0x6B66L,-9L,0x6B3B71F17BE4AF97LL,-3L}}}},{{{{0xFA9B123C6BB37CA7LL,0x6FECE31EL,0x7823978BL,-1L,0x943FL,0x2D11B9019512955FLL,2L}}},{{{1UL,0x563A4C6FL,0x0153A059L,1L,7L,4L,1L}}},{{{0x8DDFC343078D3A61LL,-1L,-1L,1L,0x3E07L,0x90D696C140D1A472LL,0x90B76121L}}},{{{1UL,0x563A4C6FL,0x0153A059L,1L,7L,4L,1L}}},{{{0xFA9B123C6BB37CA7LL,0x6FECE31EL,0x7823978BL,-1L,0x943FL,0x2D11B9019512955FLL,2L}}},{{{1UL,0x3435E349L,-1L,0x6B66L,-9L,0x6B3B71F17BE4AF97LL,-3L}}}},{{{{0xFA9B123C6BB37CA7LL,0x6FECE31EL,0x7823978BL,-1L,0x943FL,0x2D11B9019512955FLL,2L}}},{{{1UL,0x563A4C6FL,0x0153A059L,1L,7L,4L,1L}}},{{{0x8DDFC343078D3A61LL,-1L,-1L,1L,0x3E07L,0x90D696C140D1A472LL,0x90B76121L}}},{{{1UL,0x563A4C6FL,0x0153A059L,1L,7L,4L,1L}}},{{{0xFA9B123C6BB37CA7LL,0x6FECE31EL,0x7823978BL,-1L,0x943FL,0x2D11B9019512955FLL,2L}}},{{{1UL,0x3435E349L,-1L,0x6B66L,-9L,0x6B3B71F17BE4AF97LL,-3L}}}}};
static int64_t g_670 = 0x118B52A92A884094LL;
static uint32_t g_823 = 18446744073709551609UL;
static const int64_t g_833[2][1][6] = {{{0x75C2B5CDD2FB7183LL,0x75C2B5CDD2FB7183LL,1L,0x75C2B5CDD2FB7183LL,0x75C2B5CDD2FB7183LL,1L}},{{0x75C2B5CDD2FB7183LL,0x75C2B5CDD2FB7183LL,1L,0x75C2B5CDD2FB7183LL,0x75C2B5CDD2FB7183LL,0x75C2B5CDD2FB7183LL}}};
static uint64_t g_873 = 18446744073709551615UL;
static union U2 *g_885[6] = {&g_499,&g_499,&g_499,&g_499,&g_499,&g_499};
static union U2 **g_884[3] = {&g_885[3],&g_885[3],&g_885[3]};
static const int32_t *g_924 = &g_7;
static uint16_t ***g_1005 = (void*)0;
static struct S0 *g_1048[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t g_1183 = 0xDB6B517F6618D465LL;
static uint32_t g_1237[2] = {4294967286UL,4294967286UL};
static union U3 **g_1269 = (void*)0;
static struct S0 ****g_1287 = (void*)0;
static int32_t *****g_1292 = &g_565;
static uint64_t g_1300 = 0xB7ADD5F5DF801FC2LL;
static uint64_t g_1340 = 1UL;
static int32_t g_1369 = 0x44A19D9AL;
static int32_t g_1381 = (-1L);
static union U2 ***g_1457[2] = {&g_884[2],&g_884[2]};
static union U2 ****g_1456[3][7] = {{&g_1457[1],&g_1457[1],&g_1457[1],&g_1457[1],&g_1457[1],&g_1457[1],&g_1457[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1457[1],&g_1457[1],&g_1457[1],&g_1457[1],&g_1457[1],&g_1457[1],&g_1457[1]}};
static int8_t **g_1496 = &g_3;
static union U3 g_1598 = {{0x67B7F3A0FF0C9D7DLL,1L,0xA5042EA5L,0xA954L,1L,0x1E063398E9BCC42ALL,0xBA4993E8L}};
static union U3 g_1633 = {{0xFFAFB7DB5E667A6DLL,1L,-1L,0x3E58L,0xCD8AL,3L,-4L}};
static struct S0 **g_1674[3][2][7] = {{{&g_1048[4],&g_1048[2],&g_1048[2],&g_1048[2],&g_1048[4],&g_1048[2],&g_1048[4]},{&g_1048[4],&g_1048[2],(void*)0,&g_1048[3],&g_1048[2],&g_1048[3],&g_1048[2]}},{{&g_1048[2],&g_1048[2],&g_1048[2],&g_1048[2],&g_1048[2],&g_1048[2],&g_1048[2]},{&g_1048[4],&g_1048[3],&g_1048[4],&g_1048[2],(void*)0,&g_1048[2],&g_1048[2]}},{{&g_1048[4],&g_1048[0],&g_1048[3],&g_1048[2],&g_1048[2],&g_1048[4],&g_1048[2]},{&g_1048[2],&g_1048[4],&g_1048[2],&g_1048[0],&g_1048[0],&g_1048[2],&g_1048[4]}}};
static struct S0 ***g_1673 = &g_1674[0][0][4];
static struct S0 g_1689 = {18446744073709551609UL,0x1FF87DDBL,0x997C466DL,0xC399L,-9L,0xA9909C8652A9A653LL,0xEBFB9CD6L};
static uint64_t g_1696[7][4][1] = {{{1UL},{0xDE7D26AE68827029LL},{1UL},{0x18F510C7A27F8CCBLL}},{{0xD03785962D82D68ALL},{0x41183FF16E7D8327LL},{0x6FA723309A2158A9LL},{0x41183FF16E7D8327LL}},{{0xD03785962D82D68ALL},{0x18F510C7A27F8CCBLL},{1UL},{0xDE7D26AE68827029LL}},{{1UL},{0x18F510C7A27F8CCBLL},{0xD03785962D82D68ALL},{0x41183FF16E7D8327LL}},{{0x6FA723309A2158A9LL},{0x41183FF16E7D8327LL},{0xD03785962D82D68ALL},{0x18F510C7A27F8CCBLL}},{{1UL},{0xDE7D26AE68827029LL},{1UL},{0x18F510C7A27F8CCBLL}},{{0xD03785962D82D68ALL},{0x41183FF16E7D8327LL},{0x6FA723309A2158A9LL},{0x41183FF16E7D8327LL}}};
static int8_t *** const *g_1728 = &g_345;
static const union U2 ***g_1783 = (void*)0;
static const int16_t g_1976[2][2] = {{0xA253L,0xA253L},{0xA253L,0xA253L}};
static union U2 ** const *g_1983 = (void*)0;
static union U2 ** const **g_1982 = &g_1983;
static union U2 ** const ***g_1981 = &g_1982;
static uint32_t *g_2046 = (void*)0;
static uint32_t **g_2045 = &g_2046;
static uint32_t ***g_2044 = &g_2045;
static uint32_t *g_2066[2] = {&g_1237[1],&g_1237[1]};
static int8_t g_2115 = 0L;
static struct S0 g_2301 = {18446744073709551607UL,0x8E9C8498L,0x79BA1A3DL,-2L,-3L,0x2E90868B9EE848C4LL,0x17037489L};
static const struct S0 *g_2300[6][3][5] = {{{&g_2301,&g_1689,&g_1633.f0,&g_124[1],&g_124[1]},{&g_259,(void*)0,&g_259,&g_2301,&g_1598.f0},{&g_579[1].f0,&g_259,&g_124[1],&g_259,&g_579[1].f0}},{{&g_259,&g_645[2][3][0].f0,(void*)0,&g_124[0],(void*)0},{&g_2301,&g_2301,&g_124[1],&g_579[1].f0,&g_579[1].f0},{&g_645[2][3][0].f0,&g_259,&g_259,&g_645[2][3][0].f0,(void*)0}},{{&g_259,&g_579[1].f0,&g_1633.f0,&g_1633.f0,&g_579[1].f0},{(void*)0,&g_259,&g_2301,&g_1598.f0,&g_1598.f0},{&g_1689,&g_2301,&g_1689,&g_1633.f0,&g_124[1]}},{{&g_124[0],&g_645[2][3][0].f0,&g_1598.f0,&g_645[2][3][0].f0,&g_124[0]},{&g_1689,&g_259,&g_2301,&g_579[1].f0,&g_2301},{(void*)0,(void*)0,&g_1598.f0,&g_124[0],&g_1598.f0}},{{&g_259,&g_1689,&g_1689,&g_259,&g_2301},{&g_645[2][3][0].f0,&g_124[0],&g_2301,&g_2301,&g_124[0]},{&g_2301,&g_1689,&g_1633.f0,&g_124[1],&g_2301}},{{&g_124[0],&g_1598.f0,&g_124[0],&g_1598.f0,(void*)0},{&g_1633.f0,&g_1689,&g_2301,&g_1689,&g_1633.f0},{&g_124[0],&g_259,&g_1598.f0,&g_2301,&g_1598.f0}}};
static uint32_t *g_2434 = (void*)0;
static uint32_t **g_2433 = &g_2434;
static uint32_t **g_2439[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_2434,&g_2434,&g_2434,&g_2434,&g_2434}};
static int32_t g_2445[1][3] = {{0x0BF4E508L,0x0BF4E508L,0x0BF4E508L}};
static uint8_t g_2446 = 0x89L;
static uint8_t g_2488 = 9UL;
static uint64_t g_2542[2][3] = {{0x64149788E6973024LL,1UL,0x64149788E6973024LL},{0x64149788E6973024LL,1UL,0x64149788E6973024LL}};
static uint8_t *g_2558 = &g_2446;
static uint8_t **g_2557 = &g_2558;
static uint8_t g_2600 = 0xB8L;
static int32_t g_2601 = 0x23697F72L;
static int32_t g_2637 = 1L;
static union U2 g_2713 = {0};
static int8_t ****g_2745 = &g_341;
static uint16_t g_2769 = 0xAC2AL;
static int8_t g_2818 = 2L;
static uint16_t ** const g_2830 = &g_85[0][0][1];
static uint16_t ** const *g_2829 = &g_2830;
static uint16_t ** const **g_2828 = &g_2829;
static uint16_t ** const ***g_2827 = &g_2828;
static int64_t g_2981 = 0x50DF93EAD146938ELL;
static int32_t *g_2995 = &g_259.f2;
static int32_t **g_2994 = &g_2995;
static union U2 g_2998 = {0};
static uint8_t g_3015 = 0x0AL;
static int8_t g_3036 = (-1L);
static const uint32_t **g_3122 = (void*)0;
static const uint32_t ***g_3121 = &g_3122;
static union U1 **g_3160[2] = {(void*)0,(void*)0};
static union U1 ***g_3159 = &g_3160[0];
static union U1 *** const *g_3158 = &g_3159;
static union U3 g_3167 = {{0UL,0x57D2C79BL,0xBA237789L,0x5AE3L,0xB791L,0x05305628D09B0107LL,-3L}};
static union U3 g_3233 = {{18446744073709551609UL,1L,0x4B6F08AFL,0xED76L,0x1240L,0x178AF33E0CF12FEDLL,-8L}};
static union U3 *g_3232 = &g_3233;



static const uint8_t  func_1(void);
static uint8_t  func_15(const int16_t  p_16, union U2  p_17);
static union U2  func_19(union U2  p_20, int32_t  p_21, int32_t * p_22, int32_t * p_23, int32_t * p_24);
static union U2  func_25(uint16_t  p_26, int32_t * p_27, int32_t * p_28, int8_t * p_29, int8_t  p_30);
static int32_t * func_33(uint32_t  p_34, uint16_t  p_35, uint32_t  p_36);
static int16_t  func_40(const union U2  p_41);
static const int16_t  func_81(uint16_t * p_82, uint16_t * p_83, union U3  p_84);
static uint16_t * func_87(int8_t * p_88, int32_t * p_89);




static const uint8_t  func_1(void)
{ 
    const int8_t *l_2 = (void*)0;
    int8_t *l_5[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_6[5];
    const int8_t l_18 = 0x3BL;
    int32_t *l_1380 = &g_1381;
    union U2 *l_2484[2][6][5] = {{{&g_499,&g_499,&g_499,&g_499,&g_499},{&g_499,(void*)0,&g_499,(void*)0,&g_499},{&g_499,&g_499,&g_499,&g_499,&g_499},{&g_499,&g_499,&g_499,(void*)0,&g_499},{&g_499,&g_499,&g_499,&g_499,&g_499},{(void*)0,(void*)0,(void*)0,&g_499,&g_499}},{{&g_499,&g_499,&g_499,&g_499,&g_499},{&g_499,(void*)0,&g_499,(void*)0,&g_499},{&g_499,&g_499,&g_499,&g_499,&g_499},{&g_499,&g_499,(void*)0,(void*)0,(void*)0},{&g_499,&g_499,&g_499,&g_499,&g_499},{&g_499,(void*)0,&g_499,&g_499,&g_499}}};
    union U1 l_2499 = {{0x098D1089F1A0015FLL,0L,2L,0x6311L,0xE799L,0L,-7L}};
    uint8_t l_2506 = 0x27L;
    int8_t ***l_2517 = &g_342[0][1];
    uint32_t ***l_2651[3];
    uint32_t l_2656 = 18446744073709551615UL;
    uint16_t l_2691 = 1UL;
    struct S0 ***l_2762 = &g_1674[0][0][0];
    union U3 l_2786 = {{18446744073709551615UL,0xBEF2439EL,0x47795FA3L,0x1A00L,5L,0x26CF183CB670C031LL,0L}};
    int8_t ****l_2787 = &g_341;
    const int16_t l_2855 = 0L;
    const int8_t l_2892 = (-7L);
    uint8_t l_2928 = 2UL;
    uint16_t l_2960 = 4UL;
    uint64_t l_2964 = 1UL;
    int64_t l_2972 = 0x7EEDF8D2B177E483LL;
    uint32_t l_2987 = 0x1D2D32C4L;
    struct S0 *l_3022[7];
    int8_t l_3038[3][1];
    int32_t *l_3070 = &g_2637;
    union U1 **l_3103 = (void*)0;
    uint32_t l_3104 = 18446744073709551615UL;
    const uint32_t ***l_3124[6];
    uint32_t **l_3135[7] = {&g_2434,&g_2434,&g_2434,&g_2434,&g_2434,&g_2434,&g_2434};
    uint64_t l_3192 = 0xE57C7D1AC973B55BLL;
    int8_t l_3209 = 0xF7L;
    union U3 *l_3231 = (void*)0;
    struct S0 *l_3261[3];
    int32_t l_3277 = 0x6A586102L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_6[i] = &g_7;
    for (i = 0; i < 3; i++)
        l_2651[i] = &g_2439[1][3];
    for (i = 0; i < 7; i++)
        l_3022[i] = &g_1633.f0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_3038[i][j] = 0xBDL;
    }
    for (i = 0; i < 6; i++)
        l_3124[i] = &g_3122;
    for (i = 0; i < 3; i++)
        l_3261[i] = &l_2499.f0;
    g_7 ^= (l_2 != (l_5[0] = g_3));
    for (g_4 = 0; (g_4 <= 8); g_4 = safe_add_func_int64_t_s_s(g_4, 4))
    { 
        uint16_t *l_31[1][6][1] = {{{&g_32},{&g_32},{&g_32},{&g_32},{&g_32},{&g_32}}};
        int32_t l_37 = 1L;
        uint32_t **l_2456 = &g_2434;
        int8_t l_2489 = (-8L);
        int32_t l_2490 = 0L;
        int32_t *l_2522 = &g_579[1].f0.f2;
        struct S0 l_2551 = {18446744073709551612UL,1L,1L,0xA04FL,2L,0L,0x921C5DF8L};
        uint16_t l_2581[3][7][6] = {{{0UL,1UL,65535UL,65535UL,7UL,7UL},{65535UL,7UL,7UL,65535UL,65535UL,1UL},{0UL,65535UL,1UL,1UL,0x5403L,65527UL},{0x5403L,65535UL,0x1558L,65535UL,0x5403L,5UL},{65527UL,65535UL,65528UL,1UL,65535UL,1UL},{1UL,7UL,65535UL,65535UL,7UL,1UL},{1UL,1UL,65528UL,0x5403L,1UL,5UL}},{{7UL,65527UL,0x1558L,1UL,0x1558L,65527UL},{7UL,5UL,1UL,0x5403L,65528UL,1UL},{1UL,1UL,7UL,65535UL,65535UL,7UL},{1UL,1UL,65535UL,1UL,65528UL,65535UL},{65527UL,5UL,0x5403L,65535UL,0x1558L,65535UL},{0x5403L,65527UL,0x5403L,5UL,65535UL,7UL},{0x5403L,5UL,65527UL,1UL,65535UL,65535UL}},{{1UL,65535UL,65535UL,1UL,65527UL,5UL},{0x5403L,7UL,65535UL,5UL,65535UL,1UL},{65535UL,65527UL,0UL,65527UL,65535UL,65528UL},{1UL,7UL,0x1558L,1UL,65527UL,65535UL},{65535UL,65535UL,7UL,7UL,65535UL,65535UL},{1UL,5UL,0x1558L,65535UL,65535UL,65528UL},{65535UL,1UL,0UL,65535UL,0UL,1UL}}};
        uint32_t l_2589 = 0x0AE588BFL;
        union U3 l_2618 = {{0xF8DE7480A74E29A5LL,0x9834A58DL,0xFDB63F0BL,-1L,0x9E81L,-1L,0x5E2911D6L}};
        int32_t l_2630 = (-6L);
        int32_t l_2631 = (-2L);
        int32_t l_2632 = 0x85EA884DL;
        int32_t l_2633 = (-1L);
        int32_t l_2634 = 0xEDBBB95FL;
        int16_t l_2636 = 0L;
        int32_t l_2638 = 0x7DF98F84L;
        uint32_t l_2639 = 4294967291UL;
        int64_t l_2642 = (-1L);
        union U1 **l_2646 = (void*)0;
        union U1 *l_2648 = &l_2499;
        union U1 **l_2647 = &l_2648;
        int i, j, k;
        for (g_7 = 0; (g_7 > 29); g_7++)
        { 
            const uint16_t l_12 = 0xCF79L;
            return l_12;
        }
    }
    for (g_1633.f0.f2 = 9; (g_1633.f0.f2 == (-30)); g_1633.f0.f2 = safe_sub_func_uint64_t_u_u(g_1633.f0.f2, 2))
    { 
        const int32_t **l_2661[2];
        int32_t l_2669 = (-1L);
        union U2 l_2679 = {0};
        uint64_t l_2690 = 0UL;
        int64_t l_2693 = 0x78596ECC18A5D37CLL;
        union U2 *l_2712 = &g_2713;
        const int32_t l_2746 = (-1L);
        int32_t l_2799 = 0xCCE11440L;
        uint8_t l_2812 = 0x19L;
        int32_t l_2817 = 0xAAD3D773L;
        int32_t l_2819[1][5][3] = {{{0x93302288L,1L,0x93302288L},{0xEDB2C3F3L,0xEDB2C3F3L,0xEDB2C3F3L},{0x93302288L,1L,0x93302288L},{0xEDB2C3F3L,0xEDB2C3F3L,0xEDB2C3F3L},{0x93302288L,1L,0x93302288L}}};
        const union U3 *l_2845[4] = {&l_2786,&l_2786,&l_2786,&l_2786};
        const union U3 **l_2844 = &l_2845[2];
        union U3 *l_2848 = &l_2786;
        union U3 **l_2847 = &l_2848;
        uint8_t l_2891 = 0xE0L;
        const uint32_t l_2930 = 0UL;
        uint16_t ****l_3004 = &g_1005;
        uint16_t *****l_3003 = &l_3004;
        const union U1 ***l_3026 = (void*)0;
        const union U1 ****l_3025 = &l_3026;
        int16_t l_3032[7][4][1] = {{{0xA56EL},{0x3C05L},{0L},{0x3C05L}},{{0xA56EL},{0xA56EL},{0x3C05L},{0L}},{{0x3C05L},{0xA56EL},{0xA56EL},{0x3C05L}},{{0L},{0x3C05L},{0xA56EL},{0xA56EL}},{{0x3C05L},{0L},{0x3C05L},{0xA56EL}},{{0xA56EL},{0x3C05L},{0L},{0x3C05L}},{{0xA56EL},{0xA56EL},{0x3C05L},{0L}}};
        struct S0 l_3049[2] = {{7UL,0xCB4A0630L,0x79F38116L,0xE11AL,0x2139L,0L,0x84D17FA7L},{7UL,0xCB4A0630L,0x79F38116L,0xE11AL,0x2139L,0L,0x84D17FA7L}};
        uint32_t l_3067 = 0UL;
        uint16_t l_3082[7][7][5] = {{{8UL,0x96D6L,65534UL,0x90A9L,0x018BL},{0xC56AL,0x57E1L,0x121EL,0xDA54L,0x704DL},{65529UL,65530UL,0UL,65526UL,0x8F41L},{0x5159L,8UL,5UL,65530UL,65530UL},{0UL,65528UL,0x7F3DL,0x5159L,0xE86CL},{0x9D88L,0xFA39L,0x8B2EL,65526UL,0x08D8L},{0x9D88L,0xEAF9L,2UL,0x8FFFL,65535UL}},{{0UL,0x839EL,65528UL,0x018BL,65529UL},{0x5159L,65526UL,0x96D6L,0xE86CL,0xEAF9L},{65529UL,4UL,0x5159L,5UL,0x5159L},{0xC56AL,0xC56AL,0xE86CL,65535UL,65528UL},{8UL,65527UL,65535UL,65528UL,0UL},{9UL,65535UL,4UL,0UL,1UL},{0x90A9L,65527UL,65528UL,65530UL,6UL}},{{2UL,0xC56AL,0x57E1L,0x121EL,0xDA54L},{0x018BL,4UL,65531UL,0x9D88L,0x0466L},{6UL,65526UL,0x90A9L,65528UL,0xC6F2L},{0xFA39L,0x839EL,0xEAF9L,0x8B2EL,0x01D1L},{5UL,65528UL,0x9491L,65529UL,65528UL},{65530UL,0xDFDCL,0x9491L,0UL,0UL},{2UL,65535UL,65528UL,0xE86CL,8UL}},{{0x8F41L,0x96D6L,0xEAF9L,0x9491L,0xC6F2L},{0x9D88L,0x01D1L,65535UL,65535UL,0xE86CL},{0x28EAL,0UL,0UL,0x28EAL,0x61D2L},{0x57E1L,5UL,65535UL,0x8B2EL,0x121EL},{0x839EL,1UL,0x121EL,8UL,0xDA54L},{1UL,0xDA54L,0x8F41L,0x8B2EL,65531UL},{0x90A9L,65533UL,0x93E4L,0x28EAL,0xEAF9L}},{{65529UL,0x9D88L,0UL,65535UL,65530UL},{65529UL,65529UL,5UL,0x9491L,0xA95FL},{0x8FFFL,0x08D8L,65530UL,0xE86CL,0x28EAL},{6UL,0xA95FL,0x08D8L,0UL,65526UL},{0x704DL,0xC06DL,65526UL,65529UL,65526UL},{0x978EL,0x93E4L,0xE86CL,65526UL,0x28EAL},{1UL,65526UL,0x84A1L,65530UL,0xA95FL}},{{65531UL,2UL,0xD1FAL,65535UL,65530UL},{0xE86CL,0xEAF9L,65527UL,65527UL,0xEAF9L},{0xD1FAL,0x28EAL,0x5DA7L,0x0466L,65531UL},{1UL,0x84A1L,0UL,0xFA39L,0xDA54L},{0x9491L,1UL,0x1312L,4UL,0x121EL},{1UL,0x7F3DL,65535UL,0UL,0x61D2L},{0xD1FAL,65530UL,65535UL,0x84A1L,0xE86CL}},{{0xE86CL,0x839EL,65531UL,0x93E4L,0xC6F2L},{65531UL,0x8F41L,6UL,0x264AL,8UL},{1UL,0x8B2EL,0x96D6L,0x90A9L,0UL},{0x978EL,65528UL,0xB797L,0x704DL,65528UL},{0x704DL,65528UL,0xFA39L,0UL,0x839EL},{6UL,0x8B2EL,0UL,0x01D1L,1UL},{0x8FFFL,0x8F41L,0x01D1L,0x018BL,65533UL}}};
        struct S0 **l_3096 = &g_1048[2];
        int16_t l_3099[2];
        uint32_t * const *l_3119 = &g_2066[0];
        uint32_t * const **l_3118 = &l_3119;
        struct S0 l_3131 = {0xD3F6542FA3BC13CCLL,0x3AFE89C9L,0x3BE870B8L,9L,-8L,0x97B3637C2A95F9D8LL,6L};
        int32_t l_3143[3];
        uint64_t l_3183 = 0UL;
        uint8_t l_3187 = 0xE3L;
        uint32_t l_3190 = 18446744073709551612UL;
        int32_t l_3191[1];
        uint32_t l_3213 = 1UL;
        int32_t l_3229 = 4L;
        uint16_t l_3244[4];
        uint8_t l_3249 = 0xA0L;
        union U2 *l_3273[4];
        uint8_t ***l_3295 = &g_2557;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2661[i] = &g_924;
        for (i = 0; i < 2; i++)
            l_3099[i] = 0xCC93L;
        for (i = 0; i < 3; i++)
            l_3143[i] = 0xDF4F68B9L;
        for (i = 0; i < 1; i++)
            l_3191[i] = 0x7648B5AFL;
        for (i = 0; i < 4; i++)
            l_3244[i] = 7UL;
        for (i = 0; i < 4; i++)
            l_3273[i] = &g_2998;
    }
    return (*g_2558);
}



static uint8_t  func_15(const int16_t  p_16, union U2  p_17)
{ 
    uint32_t l_1583 = 1UL;
    union U3 *l_1596 = &g_645[2][3][0];
    union U3 *l_1597 = &g_1598;
    int32_t l_1624 = (-1L);
    int32_t l_1626 = 0x4D3F24BDL;
    union U1 *l_1635 = &g_579[0];
    const struct S0 **l_1642 = (void*)0;
    const struct S0 ***l_1641[6] = {&l_1642,&l_1642,&l_1642,&l_1642,&l_1642,&l_1642};
    const struct S0 ****l_1640[7][7] = {{&l_1641[5],&l_1641[5],&l_1641[5],&l_1641[5],&l_1641[5],&l_1641[5],&l_1641[5]},{&l_1641[5],(void*)0,(void*)0,&l_1641[5],&l_1641[5],(void*)0,(void*)0},{&l_1641[1],&l_1641[5],&l_1641[1],&l_1641[5],&l_1641[1],&l_1641[5],&l_1641[1]},{&l_1641[5],&l_1641[5],(void*)0,(void*)0,&l_1641[5],&l_1641[5],(void*)0},{&l_1641[5],&l_1641[5],&l_1641[5],&l_1641[5],&l_1641[5],&l_1641[5],&l_1641[5]},{&l_1641[5],(void*)0,(void*)0,&l_1641[5],&l_1641[5],(void*)0,(void*)0},{&l_1641[1],&l_1641[5],&l_1641[1],&l_1641[5],&l_1641[1],&l_1641[5],&l_1641[1]}};
    uint64_t l_1675 = 8UL;
    int32_t l_1694 = 0x60B12617L;
    union U2 *****l_1710 = &g_1456[2][3];
    int8_t *l_1732 = &g_155;
    int32_t *l_1735 = &g_1369;
    union U2 ***l_1782 = &g_884[2];
    int32_t l_1841 = 0x1EF4AC15L;
    int32_t l_1842 = 1L;
    int32_t l_1846 = 1L;
    uint32_t *l_1906 = &g_1237[1];
    uint32_t **l_1905[4];
    int32_t ****l_1977 = (void*)0;
    uint32_t l_1997[3];
    int64_t l_1998[5][1] = {{(-7L)},{0xA2CA4E2BC7966B1DLL},{(-7L)},{0xA2CA4E2BC7966B1DLL},{(-7L)}};
    uint32_t l_2086 = 0UL;
    int8_t ***l_2129 = &g_342[4][1];
    uint16_t **l_2159 = &g_85[0][2][3];
    uint16_t ***l_2158 = &l_2159;
    int16_t l_2205[5][7] = {{0L,1L,0L,0L,1L,0L,0L},{1L,1L,(-1L),1L,1L,(-1L),1L},{1L,0L,0L,1L,0L,0L,1L},{0L,1L,0L,0L,1L,0L,0L},{1L,1L,(-1L),1L,1L,(-1L),1L}};
    uint16_t l_2208 = 0xD68CL;
    int32_t l_2218 = (-9L);
    int64_t l_2219 = 3L;
    int32_t l_2227[4] = {0x67AB6CE1L,0x67AB6CE1L,0x67AB6CE1L,0x67AB6CE1L};
    uint32_t l_2234[5] = {0x1060F33EL,0x1060F33EL,0x1060F33EL,0x1060F33EL,0x1060F33EL};
    int8_t l_2253 = 0x90L;
    union U1 *l_2255 = &g_579[1];
    int64_t l_2336[4] = {0xDCE6FA7176104541LL,0xDCE6FA7176104541LL,0xDCE6FA7176104541LL,0xDCE6FA7176104541LL};
    uint16_t ** const **l_2358 = (void*)0;
    uint16_t ** const *** const l_2357 = &l_2358;
    int64_t l_2374 = 0x58ABCB274CCDA9BALL;
    uint64_t l_2380 = 0x34624548396DE925LL;
    int32_t l_2396 = 6L;
    uint64_t **l_2442 = &g_468;
    int32_t *l_2443 = &g_64[0][2];
    int32_t *l_2444[7] = {&l_1694,&l_1694,&l_1694,&l_1694,&l_1694,&l_1694,&l_1694};
    uint64_t l_2449[4][1][7] = {{{0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0x26A9A2554C3ABCC5LL,1UL,0x26A9A2554C3ABCC5LL,1UL,0x26A9A2554C3ABCC5LL,1UL,0x26A9A2554C3ABCC5LL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0x26A9A2554C3ABCC5LL,1UL,0x26A9A2554C3ABCC5LL,1UL,0x26A9A2554C3ABCC5LL,1UL,0x26A9A2554C3ABCC5LL}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1905[i] = &l_1906;
    for (i = 0; i < 3; i++)
        l_1997[i] = 0x51684F9DL;
    g_64[0][3] |= l_1583;
    for (g_32 = 0; (g_32 > 11); g_32++)
    { 
        uint64_t l_1593[3];
        int8_t l_1600[2];
        int32_t l_1625 = 0x7F691811L;
        union U3 *l_1632 = &g_1633;
        union U2 l_1634 = {0};
        uint8_t *l_1652[1][6];
        int32_t *l_1653 = &l_1634.f2;
        int32_t *l_1654 = &l_1626;
        int32_t l_1684 = 0xC9F2A2ADL;
        struct S0 l_1687 = {0x8B92EB03C9C32AAELL,9L,0xB9527D04L,3L,6L,5L,0L};
        int32_t l_1692 = 0x70143451L;
        int32_t l_1693 = 6L;
        int32_t l_1695[6];
        union U2 *** const * const l_1709 = (void*)0;
        union U2 *** const * const *l_1708[4][1];
        union U2 *****l_1711 = &g_1456[0][5];
        struct S0 *** const *l_1716 = &g_1673;
        const uint16_t ***l_1742 = (void*)0;
        const uint16_t ****l_1741 = &l_1742;
        union U2 ***l_1780 = &g_884[2];
        uint32_t l_1858 = 4294967295UL;
        int32_t *l_1946 = &l_1694;
        uint32_t l_1947 = 4294967291UL;
        const int32_t l_1948 = (-1L);
        int16_t *l_1975 = &g_579[1].f0.f4;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1593[i] = 1UL;
        for (i = 0; i < 2; i++)
            l_1600[i] = (-1L);
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_1652[i][j] = &g_438;
        }
        for (i = 0; i < 6; i++)
            l_1695[i] = 1L;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_1708[i][j] = &l_1709;
        }
    }
    if ((p_16 >= ((void*)0 == l_1732)))
    { 
        int8_t *l_1984[1];
        int16_t *l_1985 = &g_1598.f0.f3;
        uint16_t *l_1986 = &g_433[2][5];
        int32_t l_1989 = (-7L);
        union U2 l_1992 = {0};
        struct S0 *l_2022 = &g_1633.f0;
        const int32_t l_2030[5] = {1L,1L,1L,1L,1L};
        const union U1 l_2052 = {{18446744073709551607UL,0x6F880EE9L,0L,0xA5B1L,1L,0x8A7DC677DB47A44FLL,9L}};
        int32_t l_2074 = (-1L);
        int32_t l_2075 = (-2L);
        int32_t l_2076 = 0xCB45EB97L;
        int32_t l_2078 = 0L;
        uint8_t l_2128 = 6UL;
        int32_t l_2200 = 1L;
        int64_t l_2201 = 0xC1BC46120E29EE0CLL;
        uint8_t l_2202 = 0xBAL;
        int8_t l_2206[4][4][2] = {{{0xF0L,0x25L},{0xF0L,5L},{0xBEL,0xBEL},{5L,0xF0L}},{{0x25L,0xF0L},{5L,0xBEL},{0xBEL,5L},{0xF0L,0x25L}},{{0xF0L,5L},{0xBEL,0xBEL},{5L,0xF0L},{0x25L,0xF0L}},{{5L,0xBEL},{0xBEL,5L},{0xF0L,0x25L},{0xF0L,5L}}};
        int32_t l_2207 = 0x476F5E73L;
        uint8_t l_2220 = 0x24L;
        int32_t *l_2231 = &l_2076;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1984[i] = (void*)0;
        (*g_320) = &l_1842;
        (*l_1735) = ((l_1989 = (+(safe_rshift_func_int8_t_s_u((((l_1710 == (g_1981 = (void*)0)) >= (l_1732 != l_1984[0])) == (((*l_1985) &= g_259.f4) ^ (++(*l_1986)))), 2)))) ^ (safe_div_func_uint64_t_u_u(((*g_468) | p_16), p_16)));
        if ((18446744073709551614UL >= (((l_1992 , g_1633.f0.f6) < 0x0BEE009FL) , (g_1300 >= ((*l_1735) ^= ((*l_1732) = (((safe_add_func_int8_t_s_s(((l_1997[2] != 0L) , 0x13L), (-1L))) < l_1989) , l_1998[0][0])))))))
        { 
            uint8_t l_2007[2][5][5] = {{{1UL,252UL,1UL,0xA3L,0xA3L},{1UL,252UL,1UL,0xA3L,0xA3L},{1UL,252UL,1UL,0xA3L,0xA3L},{1UL,252UL,1UL,0xA3L,0xA3L},{1UL,252UL,1UL,0xA3L,0xA3L}},{{1UL,252UL,1UL,0xA3L,0xA3L},{1UL,252UL,1UL,0xA3L,0xA3L},{1UL,252UL,1UL,0xA3L,0xA3L},{1UL,252UL,1UL,0xA3L,0xA3L},{1UL,252UL,248UL,1UL,1UL}}};
            int64_t *l_2019[4][7] = {{&g_371[0][5],&g_371[1][5],&g_371[0][5],&l_1998[2][0],&l_1998[2][0],&g_371[0][5],&g_371[1][5]},{&l_1998[2][0],&g_371[1][5],&l_1998[1][0],&l_1998[1][0],&g_371[1][5],&l_1998[2][0],&g_371[1][5]},{&g_371[0][5],&l_1998[2][0],&l_1998[2][0],&g_371[0][5],&g_371[1][5],&g_371[0][5],&l_1998[2][0]},{&g_371[2][0],&g_371[2][0],&l_1998[2][0],&l_1998[1][0],&l_1998[2][0],&g_371[2][0],&g_371[2][0]}};
            int32_t *l_2029 = (void*)0;
            uint32_t **l_2057[1][6][3] = {{{&l_1906,&g_2046,&l_1906},{&l_1906,&g_2046,&g_2046},{(void*)0,&g_2046,(void*)0},{&l_1906,&l_1906,&g_2046},{&l_1906,&g_2046,&l_1906},{&l_1906,&g_2046,&g_2046}}};
            struct S0 *l_2067 = &g_1689;
            int64_t l_2068 = 0x93F6502E53DFB2B8LL;
            int32_t *l_2069 = &l_1842;
            int32_t *l_2070 = &l_1992.f2;
            int32_t *l_2071 = &g_499.f2;
            int32_t *l_2072 = &l_1846;
            int32_t *l_2073[1];
            int16_t l_2077[6][4] = {{(-1L),0L,(-1L),3L},{0xFD55L,0L,5L,0L},{0xFD55L,3L,(-1L),0L},{(-1L),0L,(-1L),3L},{0xFD55L,0L,5L,0L},{0xFD55L,3L,(-1L),0L}};
            uint8_t l_2079 = 0x5AL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2073[i] = &g_64[0][0];
            for (l_1846 = 29; (l_1846 >= (-5)); l_1846--)
            { 
                int32_t l_2012[2];
                uint16_t **l_2027 = &g_85[0][0][1];
                uint32_t **l_2056 = &l_1906;
                int i;
                for (i = 0; i < 2; i++)
                    l_2012[i] = 8L;
            }
            (**g_320) = (((safe_mod_func_int8_t_s_s((p_16 > (safe_rshift_func_uint8_t_u_u(((p_16 == ((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint64_t_u_u((((*g_2045) == (g_2066[0] = (**g_2044))) , p_16), ((*g_468) = (l_2067 == (void*)0)))) & g_433[1][5]) , p_16), 2)) == 4294967286UL)) , p_16), 0))), 0x25L)) , 0x030E53CEL) , l_2068);
            l_2079++;
            return p_16;
        }
        else
        { 
            int16_t l_2084 = 0xCC59L;
            int32_t *l_2104 = &l_2075;
            int32_t l_2114[5] = {0x3FE8836DL,0x3FE8836DL,0x3FE8836DL,0x3FE8836DL,0x3FE8836DL};
            uint8_t l_2116[6][4] = {{247UL,247UL,247UL,247UL},{247UL,247UL,247UL,247UL},{247UL,247UL,247UL,247UL},{247UL,247UL,247UL,247UL},{247UL,247UL,247UL,247UL},{247UL,247UL,247UL,247UL}};
            struct S0 l_2183 = {0x343FE56DC6F9F033LL,-2L,0L,-6L,0xBE40L,0x7414E48EB96D01BALL,-1L};
            uint16_t ***l_2196 = &l_2159;
            int32_t *l_2211 = &l_1842;
            int32_t *l_2212 = &g_1381;
            int32_t *l_2213 = &g_499.f2;
            int32_t *l_2214 = &l_1992.f2;
            int32_t *l_2215 = &l_1846;
            int32_t *l_2216 = (void*)0;
            int32_t *l_2217[6] = {&l_2075,&l_2075,&l_2075,&l_2075,&l_2075,&l_2075};
            union U1 l_2230 = {{0UL,0x4CE10B49L,1L,0x8262L,0x3A5DL,0xD34108FA7AD11E75LL,0x7697AB83L}};
            int i, j;
            for (l_1846 = 0; (l_1846 <= 26); l_1846 = safe_add_func_uint64_t_u_u(l_1846, 1))
            { 
                int32_t *l_2085[2][7][1] = {{{&l_2078},{(void*)0},{&l_2078},{(void*)0},{&l_2078},{(void*)0},{&l_2078}},{{(void*)0},{&l_2078},{(void*)0},{&l_2078},{(void*)0},{&l_2078},{(void*)0}}};
                int i, j, k;
                l_2086--;
            }
            for (l_2078 = (-29); (l_2078 >= (-29)); l_2078--)
            { 
                int32_t *l_2107 = &l_1989;
                int32_t *l_2108 = &l_1841;
                int32_t *l_2109 = (void*)0;
                int32_t *l_2110 = &g_1381;
                int32_t *l_2111 = &g_499.f2;
                int32_t *l_2112 = &l_1624;
                int32_t *l_2113[1][5] = {{&l_1694,&l_1694,&l_1694,&l_1694,&l_1694}};
                const int8_t *l_2132 = &g_2115;
                const int8_t **l_2131 = &l_2132;
                const int8_t ***l_2130[2][4];
                union U1 l_2134 = {{0x12868075CB090980LL,0L,0x6F1B9267L,0x18C1L,0xF179L,-10L,0L}};
                uint8_t l_2197[1][7];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_2130[i][j] = &l_2131;
                }
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_2197[i][j] = 0x0FL;
                }
                l_2116[4][0]--;
                for (g_670 = (-17); (g_670 > 24); g_670 = safe_add_func_uint16_t_u_u(g_670, 3))
                { 
                    return g_1689.f5;
                }
                for (g_1633.f0.f3 = 1; (g_1633.f0.f3 >= 0); g_1633.f0.f3 -= 1)
                { 
                    const int8_t ****l_2133 = &l_2130[1][0];
                    const uint16_t l_2140[7] = {65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL};
                    int8_t l_2155 = 0x32L;
                    int i;
                    (*l_2104) = (0x0DL > (safe_div_func_int16_t_s_s(g_1237[g_1633.f0.f3], (safe_unary_minus_func_int8_t_s(((*l_1732) = (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((g_1237[g_1633.f0.f3] & 0xA61FL), (((**g_557) & (((void*)0 != &g_873) | l_2128)) & 0UL))) & 0xED7EDB2CL), 7))))))));
                    (**g_320) &= (l_2104 != ((((g_156[2][0][1] != (((l_2129 == ((*l_2133) = l_2130[0][1])) < 3UL) , (l_2134 , (((void*)0 == (*g_557)) && 6L)))) , l_2074) || 6L) , (void*)0));
                    l_2155 |= (safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_s(((l_2140[6] > 0L) != ((0xBEEFL || ((safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((*l_2104), 0x52L)), (safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_s((4L ^ (safe_add_func_uint8_t_u_u(l_2140[5], 255UL))), (*l_1735))) ^ (*l_2108)) > 0xEBC8L), (*l_2104))), l_1989)))), 0x11FE8C3A2D866431LL)) || p_16)) < p_16)), 4))));
                }
                for (l_2134.f0.f2 = (-16); (l_2134.f0.f2 == (-1)); l_2134.f0.f2++)
                { 
                    uint16_t ****l_2160 = &g_1005;
                    int32_t l_2176 = 0xF1F5E9D9L;
                    (*l_2160) = l_2158;
                    (*g_320) = &l_2114[2];
                    (*l_2112) &= 2L;
                }
                for (g_1300 = (-26); (g_1300 <= 4); g_1300 = safe_add_func_uint8_t_u_u(g_1300, 2))
                { 
                    int8_t l_2198 = 0L;
                    int32_t l_2199[2][6] = {{0xC2DD5D25L,0xC2DD5D25L,0x2667F7C7L,0L,0x2667F7C7L,0xC2DD5D25L},{0x2667F7C7L,1L,0L,0L,1L,0x2667F7C7L}};
                    int i, j;
                    (*l_2104) &= (((*l_1732) |= ((safe_mul_func_uint16_t_u_u(p_16, g_259.f2)) > (safe_mod_func_uint64_t_u_u((((safe_sub_func_int8_t_s_s(((**g_557) != ((*g_468) ^= (safe_add_func_uint32_t_u_u(((((p_16 && (((safe_mul_func_int8_t_s_s(((void*)0 == l_2196), l_2197[0][0])) & (*l_2108)) ^ (*l_1735))) | p_16) , p_17) , p_16), l_2074)))), 249UL)) , g_450[2]) ^ 255UL), 0x62BA07FD036C9343LL)))) || (*g_340));
                    l_2202--;
                    l_2208--;
                    return p_16;
                }
            }
            ++l_2220;
            (*g_320) = l_2231;
            return g_1633.f0.f6;
        }
    }
    else
    { 
        int32_t *l_2232 = &l_1842;
        int32_t *l_2233[7] = {&l_2218,&l_2218,&l_2218,&l_2218,&l_2218,&l_2218,&l_2218};
        uint32_t * const *l_2248[5][1][4];
        int64_t *l_2251 = &l_1998[4][0];
        int64_t **l_2252 = &l_2251;
        int8_t *l_2254 = &g_2115;
        int64_t l_2272 = 3L;
        union U3 l_2351 = {{0xC474EC6952951BB2LL,0L,0x6E755697L,-5L,0x5801L,0xA5C6CDFC5EED3F46LL,0xE8B4D24BL}};
        const struct S0 *l_2400 = (void*)0;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_2248[i][j][k] = &g_2046;
            }
        }
        ++l_2234[1];
        if ((safe_mod_func_uint8_t_u_u(((((((safe_add_func_int8_t_s_s(((*l_2254) = ((*l_1732) = (+(l_2253 = ((*l_1735) = ((0x01F9D99D06D0C81CLL >= (safe_add_func_int64_t_s_s((((((*l_1735) >= (((l_2218 &= ((*l_1906)++)) > (safe_mul_func_uint8_t_u_u((l_2248[3][0][3] != ((*g_2044) = &l_1906)), (safe_lshift_func_int16_t_s_u((((((((*g_557) = (*g_557)) != ((*l_2252) = l_2251)) , 0x27L) > g_823) || 0xE7CE9F33L) ^ p_16), p_16))))) > 0xC032BE65A1B20D9FLL)) & p_16) > p_16) != p_16), 0UL))) ^ 0xF3DD08C6L)))))), 1L)) >= 1UL) , p_16) , (-10L)) , l_1635) != l_2255), (***g_345))))
        { 
            uint16_t * const *l_2258 = &g_85[0][0][1];
            int32_t l_2259 = 1L;
            uint8_t *l_2260[2];
            int32_t l_2261[4] = {0L,0L,0L,0L};
            int32_t l_2262 = 0x23CF742FL;
            int32_t l_2263 = (-1L);
            union U3 l_2297 = {{0x44AA6C347B9C4F6ALL,-1L,-1L,8L,1L,3L,0L}};
            int32_t ***l_2328[4][6][6] = {{{&g_320,&g_320,&g_320,&g_320,(void*)0,&g_320},{&g_320,&g_320,&g_320,&g_320,&g_320,&g_320},{&g_320,(void*)0,&g_320,&g_320,(void*)0,(void*)0},{&g_320,&g_320,(void*)0,&g_320,&g_320,&g_320},{&g_320,&g_320,&g_320,&g_320,&g_320,(void*)0},{&g_320,(void*)0,&g_320,&g_320,&g_320,&g_320}},{{(void*)0,&g_320,&g_320,&g_320,(void*)0,&g_320},{&g_320,&g_320,&g_320,&g_320,&g_320,&g_320},{&g_320,&g_320,&g_320,&g_320,&g_320,&g_320},{(void*)0,(void*)0,&g_320,&g_320,&g_320,&g_320},{&g_320,&g_320,&g_320,&g_320,&g_320,&g_320},{(void*)0,&g_320,(void*)0,&g_320,&g_320,&g_320}},{{&g_320,&g_320,&g_320,&g_320,&g_320,&g_320},{&g_320,&g_320,(void*)0,&g_320,&g_320,(void*)0},{(void*)0,&g_320,&g_320,&g_320,&g_320,(void*)0},{&g_320,(void*)0,(void*)0,&g_320,&g_320,&g_320},{&g_320,&g_320,&g_320,(void*)0,&g_320,&g_320},{&g_320,&g_320,(void*)0,&g_320,(void*)0,&g_320}},{{&g_320,&g_320,&g_320,&g_320,&g_320,&g_320},{(void*)0,&g_320,&g_320,&g_320,(void*)0,&g_320},{&g_320,&g_320,&g_320,&g_320,&g_320,&g_320},{&g_320,&g_320,&g_320,&g_320,&g_320,&g_320},{(void*)0,(void*)0,&g_320,&g_320,&g_320,&g_320},{&g_320,&g_320,&g_320,&g_320,&g_320,&g_320}}};
            uint16_t *l_2337 = &g_515;
            const struct S0 *l_2399 = &l_2351.f0;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_2260[i] = (void*)0;
            if ((((((*g_558) |= (((safe_add_func_int16_t_s_s(((*l_2158) != (p_16 , l_2258)), l_2259)) & (g_259.f6 >= (g_438++))) || (***g_345))) & (safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((*l_2232), l_2272)), l_2261[0])), 65535UL))) & 0xE97EL) | l_2263))
            { 
                uint16_t l_2277 = 0UL;
                const struct S0 *l_2299 = &g_124[0];
                uint32_t ***l_2310 = &l_1905[2];
                uint32_t **l_2312[2][5] = {{&l_1906,&g_2046,&l_1906,&g_2046,&l_1906},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                uint32_t ***l_2311 = &l_2312[0][4];
                const union U3 **l_2313 = (void*)0;
                union U3 **l_2314 = &l_1597;
                int32_t **l_2315 = (void*)0;
                int32_t *l_2317[1][2][5] = {{{&g_1633.f0.f2,&g_1689.f2,(void*)0,&g_1689.f2,&g_1633.f0.f2},{&g_1633.f0.f2,&g_1689.f2,(void*)0,&g_1689.f2,&g_1633.f0.f2}}};
                int32_t **l_2316 = &l_2317[0][1][1];
                int32_t *l_2318[4] = {&g_1369,&g_1369,&g_1369,&g_1369};
                int i, j, k;
                for (g_45 = 0; (g_45 <= 18); g_45++)
                { 
                    union U3 *l_2296[2];
                    int32_t l_2298 = (-1L);
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2296[i] = &g_1633;
                    (*l_1735) = ((((safe_mul_func_uint8_t_u_u(0x12L, l_2277)) , (safe_add_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((g_124[0].f4 | (l_2259 && (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((((safe_rshift_func_uint8_t_u_s((l_2296[1] == (l_2297 , &g_1598)), l_2277)) | (**g_1496)) <= l_2298) < 0xA0C2L) && 0x41D7298CL), 7)), p_16)), (*l_2232))), p_16)), (*g_3))))) > 4294967293UL) | (*g_468)), l_2298)), p_16)), (*g_558)))) && p_16) >= l_2277);
                    g_2300[1][1][0] = l_2299;
                    (*l_2232) |= l_2277;
                }
                (*l_2314) = ((safe_mod_func_int32_t_s_s((p_16 == (~(((safe_div_func_uint64_t_u_u(((0xE4L < ((safe_lshift_func_uint16_t_u_s((l_2262 = ((~p_16) > ((p_16 != (p_16 < (((*g_2044) = (*g_2044)) == ((*l_2311) = ((*l_2310) = (void*)0))))) != 0x50E9L))), 8)) , (*l_1735))) != p_16), (**g_557))) ^ p_16) > (*l_2232)))), (-6L))) , (void*)0);
                l_2318[0] = l_2317[0][0][1];
                g_2300[1][1][0] = l_2299;
            }
            else
            { 
                union U2 *l_2319 = &g_499;
                union U2 *l_2320 = (void*)0;
                int32_t l_2325 = 0xA8B7766AL;
                (*l_1735) = ((*l_2232) &= ((p_16 , l_2319) != (l_2320 = &p_17)));
                for (g_1689.f0 = 0; (g_1689.f0 <= 30); g_1689.f0 = safe_add_func_int32_t_s_s(g_1689.f0, 3))
                { 
                    return p_16;
                }
                for (l_2259 = 0; (l_2259 != 18); l_2259 = safe_add_func_int32_t_s_s(l_2259, 9))
                { 
                    l_2233[1] = &l_2262;
                }
                for (g_1633.f0.f2 = 0; g_1633.f0.f2 < 3; g_1633.f0.f2 += 1)
                {
                    for (l_2259 = 0; l_2259 < 4; l_2259 += 1)
                    {
                        g_339[g_1633.f0.f2][l_2259] = (void*)0;
                    }
                }
                return l_2325;
            }
            if ((l_1694 &= (safe_mod_func_uint32_t_u_u(((((*g_565) = (void*)0) == l_2328[1][4][5]) <= (((*l_1735) = ((*l_1906) = ((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_u(255UL, p_16)))) < (+((safe_mul_func_uint16_t_u_u((!((*l_2337)--)), 0x438FL)) > p_16))))) > (((!((!((safe_sub_func_uint16_t_u_u((*l_2232), p_16)) >= (***g_341))) | (*g_340))) & 65535UL) < (**g_557)))), p_16))))
            { 
                union U3 *l_2344 = &g_645[2][3][0];
                uint8_t l_2354 = 0xE1L;
                int32_t *l_2356 = &l_2351.f0.f2;
                int32_t **l_2355 = &l_2356;
                uint16_t *l_2371 = &g_433[1][0];
                int32_t l_2372 = 0xAABBA4A2L;
                int16_t *l_2373[3][4][3] = {{{&g_1598.f0.f4,&l_2351.f0.f3,&g_645[2][3][0].f0.f3},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_1598.f0.f4,&g_645[2][3][0].f0.f3},{&g_1598.f0.f4,&g_1598.f0.f4,&g_1598.f0.f3}},{{(void*)0,&g_1598.f0.f4,&g_1598.f0.f4},{&g_1598.f0.f3,(void*)0,&g_645[2][3][0].f0.f3},{(void*)0,&l_2351.f0.f3,(void*)0},{&g_1598.f0.f4,&g_1598.f0.f3,&g_645[2][3][0].f0.f3}},{{(void*)0,(void*)0,&g_1598.f0.f4},{(void*)0,&g_1598.f0.f3,&g_1598.f0.f3},{&g_1598.f0.f4,&l_2351.f0.f3,&g_645[2][3][0].f0.f3},{(void*)0,(void*)0,(void*)0}}};
                int32_t l_2375 = 0x80ACD65FL;
                int32_t l_2376 = 0L;
                uint64_t l_2377 = 18446744073709551615UL;
                int i, j, k;
                for (g_1300 = 0; (g_1300 <= 1); g_1300 += 1)
                { 
                    union U3 **l_2345 = &l_2344;
                    int32_t l_2346 = 3L;
                    (*l_2345) = l_2344;
                    l_2346 &= (*l_1735);
                }
                (*l_2232) |= ((*l_1735) = (((((&g_1005 != (void*)0) | ((&g_45 != ((*l_2355) = l_2232)) || (*l_1735))) , l_2357) != (void*)0) , l_2354));
                (*l_2232) = ((safe_div_func_uint32_t_u_u((p_16 >= (safe_rshift_func_int16_t_s_u((g_1598.f0.f3 = (safe_rshift_func_uint16_t_u_u((--(*l_2337)), ((&l_1640[5][4] == (g_670 , &l_1640[5][4])) == (safe_mod_func_uint16_t_u_u(p_16, (safe_sub_func_uint16_t_u_u(((*l_2371) = (*l_2232)), (l_2372 &= p_16))))))))), 14))), 5UL)) | (*l_1735));
                l_2377++;
            }
            else
            { 
                int32_t *l_2385 = &l_1626;
                union U1 *l_2397 = &g_579[1];
                int8_t *l_2401 = &l_2253;
                union U3 l_2407 = {{18446744073709551615UL,0xF8A826ADL,0xA5F32683L,-2L,-4L,1L,0x32BE48C0L}};
                uint32_t ***l_2408 = &l_1905[3];
                --l_2380;
                if (p_16)
                { 
                    const int32_t *l_2383 = &g_579[1].f0.f1;
                    const int32_t **l_2384 = &l_2383;
                    (*l_2384) = l_2383;
                    (*l_2384) = l_2385;
                }
                else
                { 
                    return (*l_1735);
                }
                if ((safe_mod_func_uint8_t_u_u((((((((((((*l_1735) = (safe_lshift_func_int16_t_s_u((p_16 >= ((~(~((g_438 = (((p_16 <= ((safe_mul_func_uint8_t_u_u((*l_1735), ((g_124[0].f5 < (**g_1496)) && (safe_mod_func_uint16_t_u_u(p_16, (*l_2385)))))) || p_16)) , p_16) , g_442)) <= 0x0BL))) ^ l_2396)), 3))) , (***g_2044)) || p_16) >= (**g_1496)) > p_16) != 4UL) , p_16) , (*l_2385)) != p_16) | p_16), (**g_1496))))
                { 
                    union U1 **l_2398 = &l_2397;
                    (*l_2398) = l_2397;
                    l_2400 = (p_17 , l_2399);
                    return g_1633.f0.f1;
                }
                else
                { 
                    uint16_t l_2402[2];
                    int32_t l_2417 = 1L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2402[i] = 0x3E45L;
                    (*l_1735) = (((***g_1728) = l_2401) == (l_2402[1] , l_2401));
                    (*l_2385) = (+(((*l_2337) = p_16) >= (!(safe_div_func_uint64_t_u_u((((((l_2407 , l_2408) == (l_2351 , &g_2045)) & (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_2417 ^= ((void*)0 != &g_558)), p_16)), 0x4FL)) , (-3L)), 0)), 0x9297L))) ^ p_16) , (*g_468)), 0xD734A936E5EAA200LL)))));
                    l_2385 = l_2385;
                }
                for (g_1598.f0.f2 = 0; (g_1598.f0.f2 <= 4); g_1598.f0.f2 += 1)
                { 
                    uint16_t l_2432[3][3] = {{1UL,0xB6D9L,1UL},{0xB33DL,0xB33DL,0xB33DL},{1UL,0xB6D9L,1UL}};
                    int i, j;
                    (*g_320) = l_2233[1];
                    return g_1300;
                }
            }
            return g_645[2][3][0].f0.f0;
        }
        else
        { 
            uint32_t ***l_2435 = &g_2433;
            uint32_t ***l_2436 = (void*)0;
            uint32_t **l_2438 = &g_2434;
            uint32_t ***l_2437[2];
            uint64_t **l_2440 = (void*)0;
            uint64_t ***l_2441[3];
            int i;
            for (i = 0; i < 2; i++)
                l_2437[i] = &l_2438;
            for (i = 0; i < 3; i++)
                l_2441[i] = &l_2440;
            g_2439[0][1] = ((*l_2435) = g_2433);
            l_2442 = l_2440;
        }
    }
    g_2446--;
    return l_2449[3][0][2];
}



static union U2  func_19(union U2  p_20, int32_t  p_21, int32_t * p_22, int32_t * p_23, int32_t * p_24)
{ 
    uint8_t l_1389[7][1] = {{0xB0L},{249UL},{0xB0L},{249UL},{0xB0L},{249UL},{0xB0L}};
    uint32_t l_1400 = 0UL;
    int16_t *l_1401 = &g_499.f1.f3;
    int32_t l_1402 = 0x689DC97BL;
    int16_t *l_1403 = &g_579[1].f0.f3;
    union U2 l_1404[5][3] = {{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}};
    union U3 * const l_1432 = &g_645[2][5][0];
    union U3 * const *l_1431 = &l_1432;
    int32_t *l_1473 = &l_1404[2][0].f2;
    union U1 ** const *l_1491 = &g_626;
    int64_t **l_1495 = &g_558;
    const union U3 l_1504[3] = {{{0xCB10F1AE6D935E7DLL,0L,0L,-1L,0xF59AL,0x8488177DC351DB28LL,-1L}},{{0xCB10F1AE6D935E7DLL,0L,0L,-1L,0xF59AL,0x8488177DC351DB28LL,-1L}},{{0xCB10F1AE6D935E7DLL,0L,0L,-1L,0xF59AL,0x8488177DC351DB28LL,-1L}}};
    int32_t l_1541 = 0x61D2715CL;
    int32_t l_1542 = 0x18971437L;
    int32_t l_1543 = 0xBC491F32L;
    int32_t l_1544 = 1L;
    int32_t l_1545[3][6][4] = {{{1L,1L,(-9L),1L},{1L,0xD1F38A88L,0xD1F38A88L,1L},{0xD1F38A88L,1L,0xD1F38A88L,0xD1F38A88L},{1L,1L,(-9L),1L},{1L,0xD1F38A88L,0xD1F38A88L,1L},{0xD1F38A88L,1L,0xD1F38A88L,0xD1F38A88L}},{{1L,1L,(-9L),1L},{1L,0xD1F38A88L,0xD1F38A88L,1L},{0xD1F38A88L,1L,0xD1F38A88L,0xD1F38A88L},{1L,1L,(-9L),1L},{1L,0xD1F38A88L,0xD1F38A88L,1L},{0xD1F38A88L,1L,0xD1F38A88L,0xD1F38A88L}},{{1L,1L,(-9L),1L},{1L,0xD1F38A88L,0xD1F38A88L,1L},{0xD1F38A88L,1L,0xD1F38A88L,0xD1F38A88L},{1L,1L,(-9L),1L},{1L,0xD1F38A88L,0xD1F38A88L,1L},{0xD1F38A88L,1L,0xD1F38A88L,0xD1F38A88L}}};
    uint32_t l_1561 = 18446744073709551615UL;
    union U2 l_1582 = {0};
    int i, j, k;
    if ((4294967286UL >= 0x80A01ED4L))
    { 
        return p_20;
    }
    else
    { 
        for (g_45 = 14; (g_45 == 13); g_45--)
        { 
            union U3 ***l_1384 = &g_1269;
            (*l_1384) = g_1269;
        }
        (*p_24) ^= (*p_22);
    }
    (*p_23) &= (0xB0F25229L && ((((*l_1403) = (safe_sub_func_int8_t_s_s((l_1402 &= (((*g_468) = (((safe_div_func_uint8_t_u_u(l_1389[2][0], g_645[2][3][0].f0.f4)) == (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((p_21 & (((*l_1401) = (safe_lshift_func_uint8_t_u_s((l_1389[2][0] || 0x3D5AAB5AL), (safe_mul_func_int16_t_s_s((l_1389[2][0] & l_1400), p_21))))) < p_21)) >= g_645[2][3][0].f0.f4), l_1400)), 7)), 4))) | p_21)) | l_1389[2][0])), 1L))) & p_21) == p_21));
    for (g_155 = 0; (g_155 <= 0); g_155 += 1)
    { 
        int32_t * const *l_1406 = (void*)0;
        int32_t * const **l_1405 = &l_1406;
        uint8_t *l_1420 = &g_438;
        struct S0 ** const *l_1428 = (void*)0;
        struct S0 ** const **l_1427[4] = {&l_1428,&l_1428,&l_1428,&l_1428};
        union U1 l_1451 = {{8UL,5L,0L,-1L,-4L,0x63CCB94F76060D71LL,-1L}};
        union U2 ***l_1454 = &g_884[1];
        union U2 ****l_1453 = &l_1454;
        int32_t l_1467[6] = {0xF912D97FL,0xF912D97FL,0xF912D97FL,0xF912D97FL,0xF912D97FL,0xF912D97FL};
        union U2 l_1474 = {0};
        uint64_t *l_1479 = (void*)0;
        int i;
    }
    (*g_320) = &l_1541;
    return l_1582;
}



static union U2  func_25(uint16_t  p_26, int32_t * p_27, int32_t * p_28, int8_t * p_29, int8_t  p_30)
{ 
    int16_t l_303 = 0x3C30L;
    union U3 l_313 = {{18446744073709551609UL,0L,0x46BA2ED9L,4L,0xBC60L,0x1E18071D578C2FD5LL,0x84A3BBF8L}};
    int32_t **l_318 = &g_300;
    int32_t ***l_319[2];
    int8_t **l_334 = (void*)0;
    const union U1 l_424 = {{0x9A62F582253970C2LL,0xEC6D0834L,2L,-5L,0xAF42L,0xCAEBDBC00466806CLL,1L}};
    const uint16_t *l_451 = &g_452;
    uint16_t l_455 = 1UL;
    union U2 *l_498 = &g_499;
    uint64_t *l_513[2][3];
    int32_t *l_623 = &g_64[0][2];
    union U1 *l_628[1];
    union U1 **l_627 = &l_628[0];
    int8_t l_679 = 1L;
    struct S0 **l_722 = (void*)0;
    struct S0 ***l_721 = &l_722;
    int64_t **l_765 = &g_558;
    int16_t l_812 = 0x06E6L;
    const int64_t *l_832 = &g_833[0][0][4];
    uint16_t l_835 = 4UL;
    uint8_t l_872 = 0x90L;
    uint16_t ***l_913 = (void*)0;
    uint16_t ****l_912 = &l_913;
    int32_t l_985 = 0x8A20FF6DL;
    int32_t *****l_1026 = &g_565;
    uint8_t l_1045 = 0x57L;
    int16_t l_1076 = 7L;
    struct S0 ****l_1145 = (void*)0;
    int8_t * const ***l_1163 = (void*)0;
    int32_t l_1229 = 0xAEC20275L;
    int32_t l_1324 = 0x46F59BC7L;
    int32_t l_1332 = 0x787F3B1BL;
    int32_t l_1333 = 0L;
    int32_t *l_1379[3];
    int i, j;
    for (i = 0; i < 2; i++)
        l_319[i] = &l_318;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_513[i][j] = &g_124[0].f0;
    }
    for (i = 0; i < 1; i++)
        l_628[i] = &g_579[1];
    for (i = 0; i < 3; i++)
        l_1379[i] = (void*)0;
lbl_1154:
    if ((((safe_sub_func_uint16_t_u_u(l_303, ((safe_rshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((~(l_303 <= (safe_add_func_int64_t_s_s((l_313 , (safe_lshift_func_int16_t_s_u(g_7, 9))), (safe_mod_func_uint8_t_u_u((l_303 | ((g_320 = l_318) == &g_300)), g_156[4][0][2])))))) | p_30), (*p_29))), p_26)) , p_30), p_30)) | p_26))) , g_163) || (*p_27)))
    { 
        int8_t **l_333 = &g_3;
        int32_t l_336 = 0xCBEDF935L;
        int32_t l_373 = (-1L);
        int64_t l_374 = (-1L);
        int64_t *l_407 = &l_374;
        uint16_t *l_432 = &g_433[1][0];
        uint16_t *l_434 = &g_433[1][0];
        uint32_t *l_439 = (void*)0;
        uint32_t *l_440 = &g_163;
        uint32_t *l_441[1][3];
        uint16_t **l_445[2];
        const uint16_t **l_446 = (void*)0;
        const uint16_t **l_447 = (void*)0;
        const uint16_t *l_449 = &g_450[0];
        const uint16_t **l_448[6][3] = {{(void*)0,&l_449,(void*)0},{&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449},{(void*)0,&l_449,(void*)0},{&l_449,&l_449,&l_449}};
        int64_t l_456 = 0x88AE86BC2898F298LL;
        struct S0 *l_459 = (void*)0;
        union U1 l_469[6] = {{{0x27FEC2BBE005F245LL,-1L,0x2F34FC1FL,0x35EBL,-10L,0x80D50EBDB3E87075LL,-1L}},{{0x27FEC2BBE005F245LL,-1L,0x2F34FC1FL,0x35EBL,-10L,0x80D50EBDB3E87075LL,-1L}},{{0x27FEC2BBE005F245LL,-1L,0x2F34FC1FL,0x35EBL,-10L,0x80D50EBDB3E87075LL,-1L}},{{0x27FEC2BBE005F245LL,-1L,0x2F34FC1FL,0x35EBL,-10L,0x80D50EBDB3E87075LL,-1L}},{{0x27FEC2BBE005F245LL,-1L,0x2F34FC1FL,0x35EBL,-10L,0x80D50EBDB3E87075LL,-1L}},{{0x27FEC2BBE005F245LL,-1L,0x2F34FC1FL,0x35EBL,-10L,0x80D50EBDB3E87075LL,-1L}}};
        union U3 *l_495 = (void*)0;
        uint16_t ** const l_538[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint16_t ** const *l_537 = &l_538[2];
        struct S0 ***l_564 = (void*)0;
        union U2 l_577 = {0};
        union U1 *l_578 = &g_579[1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_441[i][j] = &g_442;
        }
        for (i = 0; i < 2; i++)
            l_445[i] = &l_434;
lbl_617:
        for (p_26 = (-3); (p_26 > 13); p_26++)
        { 
            uint8_t l_326[1][6][1];
            int8_t ***l_335 = &l_334;
            uint64_t l_375 = 0x959D6D241831B6B6LL;
            int32_t l_380[7];
            union U2 l_403 = {0};
            int64_t *l_404 = &g_371[3][4];
            int64_t *l_406[3][1][3];
            int64_t **l_405[1][6];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_326[i][j][k] = 0x5CL;
                }
            }
            for (i = 0; i < 7; i++)
                l_380[i] = 0x1C9A9BA0L;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_406[i][j][k] = &g_371[1][4];
                }
            }
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_405[i][j] = &l_406[0][0][1];
            }
            if ((safe_sub_func_uint32_t_u_u(((g_259.f5 | ((safe_unary_minus_func_uint32_t_u(l_326[0][5][0])) & g_156[2][0][1])) != (safe_add_func_uint32_t_u_u(((((((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(l_326[0][5][0], p_26)), ((l_333 != ((*l_335) = l_334)) || g_259.f2))) ^ (*p_28)) || p_26) ^ p_26) || p_26) , p_30), 0x41FC93D0L))), l_336)))
            { 
                uint64_t *l_337 = &g_259.f0;
                int8_t ****l_343 = (void*)0;
                int8_t ****l_344 = (void*)0;
                int16_t *l_355 = &g_259.f3;
                (*p_27) |= (((0L && ((*l_337) = g_259.f3)) , g_338[0][1]) == (g_345 = g_341));
                if ((*p_28))
                    break;
                if ((safe_mul_func_uint16_t_u_u((!(safe_add_func_int16_t_s_s((p_26 | 0xC71DCDE16B010913LL), ((*l_355) &= (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_30, p_26)), 0xA234L)))))), (safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((*l_337) = (0xC6A9D26FC89DAF2ELL & (&l_318 == &g_320))), p_26)), 5)) , p_30), (-1L))))))
                { 
                    int64_t *l_370[4][4];
                    int32_t l_372 = 0x71AC47DBL;
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_370[i][j] = &g_371[2][5];
                    }
                    l_373 ^= ((safe_add_func_int8_t_s_s((l_336 = (safe_sub_func_int64_t_s_s(0x1F58EE1654555B17LL, (((safe_mod_func_int32_t_s_s(((0xA7A37D46L & (*p_28)) & (l_372 = (g_42 , ((*p_27) & ((g_259.f4 <= g_124[0].f3) && 5UL))))), p_30)) ^ 0xC093L) == 0xDE80L)))), (*p_29))) == p_30);
                    if (l_374)
                        continue;
                    (*p_27) |= l_375;
                }
                else
                { 
                    if (g_155)
                        break;
                }
            }
            else
            { 
                int32_t l_376 = 0L;
                uint32_t l_392 = 18446744073709551608UL;
                for (l_303 = 5; (l_303 >= 0); l_303 -= 1)
                { 
                    uint8_t l_377 = 0UL;
                    int16_t *l_393[7] = {&g_124[0].f3,&g_124[0].f3,&g_259.f4,&g_124[0].f3,&g_124[0].f3,&g_259.f4,&g_124[0].f3};
                    int i, j;
                    ++l_377;
                    l_380[2] = l_376;
                    l_376 &= (l_380[2] ^ (l_377 == ((safe_mul_func_uint8_t_u_u(((((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((+l_377), p_26)), (l_326[0][5][0] || (g_259.f4 = (safe_add_func_int8_t_s_s(((g_371[l_303][l_303] = (((*p_29) >= (((safe_rshift_func_int8_t_s_s((*p_29), (*p_29))) , 2UL) == 0x23C35DBA0FE4CBD1LL)) <= 5L)) || 18446744073709551614UL), l_392)))))) == 0x8E0BL) < p_26) , g_7), 0x60L)) < (*p_29))));
                }
                l_336 |= (((0xD5L && (safe_add_func_int16_t_s_s((-1L), l_326[0][5][0]))) && ((safe_sub_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u(((1UL | (l_313.f0 , (safe_mod_func_int32_t_s_s(((*g_320) == (g_402 = (*g_320))), (*p_27))))) && (*g_3)), 0x77D1D343L)) || (-6L)) , p_26) , (*p_27)), (*p_28))) & l_376)) , (*p_28));
                return l_403;
            }
            (*g_402) ^= (l_404 == (l_407 = &g_371[2][5]));
        }
        for (g_32 = 0; (g_32 >= 37); g_32++)
        { 
            uint16_t *l_410 = &g_86;
            uint16_t *l_413 = &g_119;
            int32_t l_414 = 6L;
            int32_t l_435 = (-10L);
            uint16_t *l_436 = &g_433[0][4];
            uint8_t *l_437 = &g_438;
            (*g_402) |= ((l_414 |= (g_119 && ((*l_413) &= (++(*l_410))))) ^ (!(((safe_sub_func_int16_t_s_s((((*l_437) = ((safe_sub_func_uint32_t_u_u(((*p_29) && ((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint16_t_u_u(((*p_29) , (~(l_424 , (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((((((*l_407) = (safe_mod_func_uint16_t_u_u((~g_45), ((*l_436) = (((l_432 = &g_32) != (l_434 = &p_26)) , l_435))))) | 0x55AAA0CE58E331A5LL) < (-8L)) || 0x045B6AFC406785D5LL) < p_26), l_336)), 65530UL))))), 65535UL)))) > (-5L))), l_373)) >= (*p_29))) < p_30), p_26)) , g_259.f4) && (*p_29))));
            (*g_402) = (*p_28);
        }
lbl_502:
        l_456 ^= (((g_442 = ((*l_440) ^= p_26)) < 0x0FB5DF2AL) >= (safe_sub_func_uint8_t_u_u((((g_85[0][2][2] = &p_26) != (l_451 = &g_86)) , (safe_sub_func_uint16_t_u_u((l_374 , p_26), (((p_30 = l_374) && 0xBFL) && (*p_28))))), l_455)));
        for (g_163 = 7; (g_163 != 7); g_163 = safe_add_func_int32_t_s_s(g_163, 7))
        { 
            struct S0 **l_460 = &l_459;
            int32_t l_482 = 0x5828B368L;
            uint64_t l_486 = 0x3148886D9A1ABF29LL;
            int32_t l_504 = (-1L);
            int32_t l_505 = (-1L);
            int32_t l_507 = (-4L);
            uint32_t l_508 = 0UL;
            union U2 l_512[7][5][2] = {{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}}};
            uint8_t l_533 = 251UL;
            struct S0 ***l_563 = &l_460;
            struct S0 ***l_584 = (void*)0;
            int16_t *l_585 = (void*)0;
            int16_t *l_586 = &g_514;
            int i, j, k;
            (*l_460) = l_459;
            for (l_313.f0.f3 = 0; (l_313.f0.f3 != 0); l_313.f0.f3 = safe_add_func_uint16_t_u_u(l_313.f0.f3, 3))
            { 
                uint16_t l_484 = 1UL;
                int32_t l_485 = 0L;
                int32_t l_503 = 0L;
                int32_t l_506[7] = {0x653E7B28L,0x653E7B28L,0x653E7B28L,0x653E7B28L,0x653E7B28L,0x653E7B28L,0x653E7B28L};
                int i;
                for (g_32 = 0; (g_32 <= 0); g_32 += 1)
                { 
                    uint64_t *l_467[6][1];
                    uint16_t l_483[4][4][1];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_467[i][j] = &g_124[0].f0;
                    }
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_483[i][j][k] = 0xD034L;
                        }
                    }
                    (*p_27) = ((g_442 |= ((safe_add_func_int16_t_s_s(0L, ((*l_434) = (p_30 > g_124[0].f4)))) > (safe_sub_func_uint64_t_u_u(((g_438 & ((l_467[2][0] != g_468) , p_30)) < l_374), (*g_468))))) <= 1UL);
                    (*p_28) &= (l_469[0] , (((*g_468) , ((safe_mod_func_int32_t_s_s((l_485 = (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(p_30, (safe_mod_func_uint16_t_u_u(((*l_434) = ((((safe_sub_func_int32_t_s_s(0xC1AD29EEL, ((l_482 && l_483[3][0][0]) && (&g_320 != &g_320)))) >= g_259.f1) ^ p_30) , p_30)), 0x8874L)))) , l_484), 1L)), 5))), l_486)) , l_483[0][0][0])) >= 0L));
                }
                if ((safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((0x50L | (safe_sub_func_int32_t_s_s((*p_28), (safe_mod_func_int16_t_s_s(l_469[0].f0.f3, p_26))))) < ((p_30 || g_259.f5) || (l_469[0].f0.f2 >= g_119))), p_30)), g_124[0].f3)))
                { 
                    union U3 **l_496 = &l_495;
                    uint16_t ***l_497 = &l_445[0];
                    (*l_496) = l_495;
                    (*l_497) = &g_85[0][5][0];
                }
                else
                { 
                    union U2 **l_500 = &l_498;
                    int32_t l_501 = 0L;
                    (*l_500) = l_498;
                    l_485 = (l_482 > ((*g_402) = l_501));
                    (*p_27) |= (*g_402);
                    (*g_320) = (*g_320);
                    l_501 |= l_469[0].f0.f4;
                }
                if (p_30)
                    goto lbl_502;
                --l_508;
            }
            if (((-1L) >= (!(g_514 = ((p_26 >= ((l_512[6][1][0] , l_513[0][0]) != (void*)0)) & (p_30 || 0xA832L))))))
            { 
                --g_515;
            }
            else
            { 
                uint64_t l_530[2][6][5] = {{{0UL,18446744073709551615UL,0xA665D2036AAA67C8LL,0UL,18446744073709551611UL},{0xBF54EFDE7A61B208LL,18446744073709551615UL,0x2C2A37C8F8841D4ALL,0x3E1779E86BA603C4LL,7UL},{18446744073709551615UL,0xC0DE20CBC915C015LL,0x02DCE9277E1AD441LL,18446744073709551615UL,18446744073709551611UL},{0x8D580F7F7A8F2237LL,0x3E1779E86BA603C4LL,0x3184231680E0D4D8LL,18446744073709551611UL,0xFC28E5D746EFB6F2LL},{18446744073709551611UL,8UL,0UL,0x6FC7E8403ED3FD90LL,0xB8CBF27536C391E9LL},{0x02DCE9277E1AD441LL,8UL,8UL,0x02DCE9277E1AD441LL,1UL}},{{0xA665D2036AAA67C8LL,0x3E1779E86BA603C4LL,0xFC28E5D746EFB6F2LL,0x8D580F7F7A8F2237LL,0xC0DE20CBC915C015LL},{7UL,0xC0DE20CBC915C015LL,0xBF54EFDE7A61B208LL,18446744073709551615UL,0UL},{0x6FC7E8403ED3FD90LL,18446744073709551615UL,0xB8CBF27536C391E9LL,0x8D580F7F7A8F2237LL,0xBF54EFDE7A61B208LL},{8UL,18446744073709551615UL,7UL,0x02DCE9277E1AD441LL,0xF97B7E1D37EA1967LL},{0UL,0xBF54EFDE7A61B208LL,0UL,0x6FC7E8403ED3FD90LL,0x6FC7E8403ED3FD90LL},{0UL,0x1B1CD861BEFA6CD6LL,0UL,18446744073709551611UL,1UL}}};
                int32_t l_539 = 0L;
                struct S0 **l_552[4][3][6] = {{{&l_459,&l_459,&l_459,&l_459,&l_459,&l_459},{&l_459,&l_459,&l_459,&l_459,&l_459,&l_459},{&l_459,&l_459,&l_459,&l_459,&l_459,&l_459}},{{&l_459,&l_459,&l_459,&l_459,&l_459,&l_459},{&l_459,&l_459,&l_459,&l_459,&l_459,&l_459},{&l_459,&l_459,&l_459,&l_459,&l_459,&l_459}},{{&l_459,&l_459,&l_459,&l_459,&l_459,&l_459},{&l_459,&l_459,&l_459,&l_459,&l_459,&l_459},{&l_459,&l_459,&l_459,&l_459,&l_459,&l_459}},{{&l_459,&l_459,&l_459,&l_459,&l_459,&l_459},{&l_459,&l_459,&l_459,&l_459,&l_459,&l_459},{&l_459,&l_459,&l_459,&l_459,&l_459,&l_459}}};
                struct S0 ****l_562 = (void*)0;
                int i, j, k;
                for (g_45 = 0; (g_45 != (-25)); --g_45)
                { 
                    l_504 = (((((safe_lshift_func_uint16_t_u_u(65527UL, 13)) == (safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((*p_29), (safe_sub_func_int16_t_s_s(0x3F90L, (l_469[0].f0.f6 & (((p_30 = (*p_29)) & (((*p_28) = (*g_402)) , g_124[0].f4)) > (-4L))))))), l_469[0].f0.f1)) <= 65532UL), l_469[0].f0.f4))) > p_26) | l_469[0].f0.f4) , (*g_402));
                    (*p_28) = l_530[0][4][2];
                    l_373 |= ((*p_27) = (*p_28));
                }
                (*p_28) &= (safe_mod_func_int64_t_s_s(0xD42F2E42B0E42C6CLL, (l_533 = 0x9F3A0E683CA41CC1LL)));
                if ((*p_28))
                { 
                    uint32_t l_534 = 0x3B9253CDL;
                    uint16_t ** const *l_535[4][5] = {{&l_445[1],&l_445[1],&l_445[1],(void*)0,(void*)0},{&l_445[0],&l_445[1],(void*)0,&l_445[1],&l_445[0]},{&l_445[1],&l_445[1],&l_445[1],&l_445[0],&l_445[1]},{&l_445[1],&l_445[1],(void*)0,&l_445[0],&l_445[1]}};
                    uint16_t ** const **l_536[4];
                    union U1 *l_554[5][7][4] = {{{&l_469[0],&l_469[2],&l_469[2],&l_469[0]},{&l_469[2],&l_469[0],&l_469[0],&l_469[0]},{&l_469[2],&l_469[0],&l_469[2],(void*)0},{&l_469[0],&l_469[0],(void*)0,(void*)0},{&l_469[0],&l_469[0],&l_469[1],&l_469[0]},{&l_469[0],&l_469[2],&l_469[0],&l_469[2]},{&l_469[0],&l_469[0],&l_469[1],&l_469[0]}},{{&l_469[2],&l_469[0],&l_469[0],&l_469[2]},{&l_469[0],&l_469[2],&l_469[0],(void*)0},{&l_469[0],&l_469[0],&l_469[0],&l_469[1]},{&l_469[2],(void*)0,&l_469[1],&l_469[1]},{&l_469[0],&l_469[0],&l_469[0],(void*)0},{(void*)0,&l_469[2],&l_469[0],&l_469[2]},{&l_469[0],&l_469[0],&l_469[1],&l_469[0]}},{{&l_469[2],&l_469[0],&l_469[0],&l_469[2]},{&l_469[0],&l_469[2],&l_469[0],(void*)0},{&l_469[0],&l_469[0],&l_469[0],&l_469[1]},{&l_469[2],(void*)0,&l_469[1],&l_469[1]},{&l_469[0],&l_469[0],&l_469[0],(void*)0},{(void*)0,&l_469[2],&l_469[0],&l_469[2]},{&l_469[0],&l_469[0],&l_469[1],&l_469[0]}},{{&l_469[2],&l_469[0],&l_469[0],&l_469[2]},{&l_469[0],&l_469[2],&l_469[0],(void*)0},{&l_469[0],&l_469[0],&l_469[0],&l_469[1]},{&l_469[2],(void*)0,&l_469[1],&l_469[1]},{&l_469[0],&l_469[0],&l_469[0],(void*)0},{(void*)0,&l_469[2],&l_469[0],&l_469[2]},{&l_469[0],&l_469[0],&l_469[1],&l_469[0]}},{{&l_469[2],&l_469[0],&l_469[0],&l_469[2]},{&l_469[0],&l_469[2],&l_469[0],(void*)0},{&l_469[0],&l_469[0],&l_469[0],&l_469[1]},{&l_469[2],(void*)0,&l_469[1],&l_469[1]},{&l_469[0],&l_469[0],&l_469[0],(void*)0},{(void*)0,&l_469[2],&l_469[0],&l_469[2]},{&l_469[0],&l_469[0],&l_469[1],&l_469[0]}}};
                    union U1 **l_553 = &l_554[1][0][2];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_536[i] = (void*)0;
                    l_539 |= ((l_534 = l_482) || ((l_537 = l_535[2][4]) == (void*)0));
                    if ((*p_27))
                        continue;
                    if ((*g_402))
                        break;
                    (*p_28) ^= (safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((p_30 = (g_515 < ((0x6FEAL ^ (((*g_320) = p_28) == (p_27 = p_28))) , (safe_mod_func_int16_t_s_s(((p_26 | (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((l_460 == l_552[1][0][3]), (***g_345))) == p_26), p_30))) <= p_30), l_530[1][4][0]))))), 7)) > 0UL), g_124[0].f3)), 0x6A10L));
                    (*l_553) = (void*)0;
                }
                else
                { 
                    struct S0 **l_559 = (void*)0;
                    struct S0 ***l_560 = (void*)0;
                    struct S0 ***l_561 = &l_552[3][1][0];
                    (*p_27) = ((safe_add_func_int8_t_s_s(((void*)0 == g_557), (&l_459 == ((*l_561) = l_559)))) , (((*g_402) = (-6L)) ^ ((4UL <= 0xECL) , (*p_27))));
                    if ((*g_402))
                        continue;
                }
                if ((((*g_3) != ((l_563 = &l_552[2][2][4]) == l_564)) < 1UL))
                { 
                    int32_t *****l_567[6][7][6] = {{{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{(void*)0,&g_565,&g_565,&g_565,&g_565,(void*)0},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565}},{{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565}},{{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,(void*)0},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565}},{{&g_565,(void*)0,&g_565,&g_565,&g_565,&g_565},{&g_565,(void*)0,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,(void*)0},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565}},{{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565}},{{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,(void*)0},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565},{&g_565,&g_565,&g_565,&g_565,&g_565,&g_565}}};
                    union U2 l_568 = {0};
                    int i, j, k;
                    g_565 = g_565;
                    return l_568;
                }
                else
                { 
                    const union U3 l_571 = {{0x1CD204F492B3935BLL,0x5A58B6C9L,0x207CD332L,-1L,4L,0x117549A97B196A92LL,0L}};
                    (*p_27) &= (safe_lshift_func_uint16_t_u_s((l_571 , (safe_rshift_func_int16_t_s_u((~((safe_lshift_func_int16_t_s_u(g_155, 6)) & p_30)), 15))), p_30));
                    (*g_402) = 7L;
                    return l_577;
                }
            }
            l_578 = &l_469[3];
            if ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((((void*)0 != l_584) >= ((*l_586) = p_30)), 9)), (*p_28))))
            { 
                for (g_155 = 0; (g_155 == (-25)); g_155 = safe_sub_func_int16_t_s_s(g_155, 2))
                { 
                    uint8_t l_600 = 0x52L;
                    if (l_313.f0.f6)
                        goto lbl_502;
                    (*g_402) = (safe_div_func_int8_t_s_s(((l_600 |= (p_30 ^ (safe_lshift_func_int8_t_s_u((((*g_468) = (*g_468)) && l_469[0].f0.f6), ((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((***g_341), 0L)), 12)) | ((*g_402) , (!(safe_mul_func_uint8_t_u_u(250UL, (*p_29)))))))))) < 4UL), 0xA7L));
                }
            }
            else
            { 
                uint64_t l_601 = 18446744073709551615UL;
                (*p_27) = l_504;
                if ((*p_27))
                    break;
                if (((((l_601 > (safe_mul_func_int8_t_s_s(((((g_259.f5 & g_259.f0) , (void*)0) != g_558) || (((safe_sub_func_uint16_t_u_u((((*l_432) |= p_26) , 0xA0EEL), g_163)) != 7UL) || p_30)), (*p_29)))) , (void*)0) != &l_601) , (*p_27)))
                { 
                    (*l_318) = p_27;
                }
                else
                { 
                    (*p_28) = l_469[0].f0.f1;
                    (*p_27) = (safe_unary_minus_func_int32_t_s(((((*g_468) = (safe_mod_func_int8_t_s_s((((((void*)0 != l_513[0][2]) >= ((((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((l_577 , ((0xEFB6DCFB0D52E298LL != (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_s(((l_507 = ((void*)0 != p_27)) >= 0x4DB0F646L), 4)) < p_30) || g_155), 4))) , &l_486)) != (void*)0) == l_505), p_26)), g_64[0][3])) < p_26) || l_469[0].f0.f0) != 0x1AL)) && 1L) || (*p_29)), (***g_345)))) | p_30) == 0L)));
                }
            }
        }
        if (g_259.f0)
            goto lbl_617;
    }
    else
    { 
        union U1 l_622 = {{18446744073709551613UL,0x73F45733L,0x4085D119L,2L,0xCD82L,-6L,5L}};
        int32_t l_651 = 0xE29BB0A5L;
        uint8_t l_654[3];
        union U2 l_671[5] = {{0},{0},{0},{0},{0}};
        int32_t l_677 = 0L;
        int32_t l_678 = (-2L);
        int32_t l_680[2];
        int16_t l_684 = 0x5495L;
        uint16_t l_685[2][5][4] = {{{1UL,0UL,8UL,0UL},{0UL,0x95D4L,1UL,0UL},{8UL,1UL,0x1F5BL,1UL},{0UL,0xC44DL,1UL,8UL},{0UL,0x4E66L,0x1F5BL,0x1F5BL}},{{8UL,8UL,1UL,0UL},{3UL,1UL,0UL,0x95D4L},{0x1F5BL,65528UL,0x2CE9L,0UL},{0UL,65528UL,8UL,0x95D4L},{65528UL,1UL,65528UL,0UL}}};
        int8_t l_709[3][7] = {{0x30L,0x59L,0x59L,0x30L,0x59L,0x59L,0x30L},{0L,0x44L,0L,0L,0x44L,0L,0L},{0x30L,0x30L,1L,0x30L,0x30L,1L,0x30L}};
        struct S0 * const l_766[3] = {&l_622.f0,&l_622.f0,&l_622.f0};
        struct S0 ****l_773 = &l_721;
        uint32_t *l_784 = (void*)0;
        uint32_t *l_785 = &g_442;
        int32_t l_786[3];
        uint16_t *l_787 = &g_433[1][6];
        const int64_t *l_830 = &g_645[2][3][0].f0.f5;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_654[i] = 255UL;
        for (i = 0; i < 2; i++)
            l_680[i] = 0L;
        for (i = 0; i < 3; i++)
            l_786[i] = 1L;
lbl_746:
        if (((*p_28) = (*g_402)))
        { 
            uint8_t l_636 = 246UL;
            union U3 *l_644 = &g_645[2][3][0];
            int32_t l_648 = 0x5C2C123FL;
            int32_t l_649 = 1L;
            for (g_438 = 0; (g_438 < 3); g_438++)
            { 
                uint16_t *l_637 = &g_433[1][0];
                int32_t l_638 = 0xF448DF9EL;
                int8_t *l_639[4] = {&g_4,&g_4,&g_4,&g_4};
                int32_t l_650 = (-1L);
                int32_t l_652 = 0L;
                int64_t *l_669[6] = {&g_371[4][4],&g_371[4][4],&g_371[4][4],&g_371[4][4],&g_371[4][4],&g_371[4][4]};
                int i;
                (*g_402) ^= ((((safe_lshift_func_uint16_t_u_s((l_622 , ((*l_637) = (((*g_320) != l_623) && ((l_636 = ((safe_mul_func_uint16_t_u_u((((p_30 , g_626) == l_627) || ((~(safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_438, (-4L))), 0xBC31L)), (-9L)))) < 255UL)), p_26)) >= 1UL)) == (-1L))))), 12)) & l_638) , (void*)0) == l_639[0]);
                (*g_402) = (*p_28);
                for (g_442 = 0; (g_442 != 8); g_442 = safe_add_func_int32_t_s_s(g_442, 8))
                { 
                    union U3 *l_643 = &l_313;
                    union U3 **l_642[5][5][6] = {{{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,(void*)0,&l_643},{&l_643,(void*)0,&l_643,&l_643,(void*)0,&l_643}},{{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643}},{{&l_643,&l_643,&l_643,&l_643,(void*)0,&l_643},{&l_643,(void*)0,&l_643,&l_643,(void*)0,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643}},{{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,(void*)0,&l_643},{&l_643,(void*)0,&l_643,&l_643,(void*)0,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643}},{{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643},{&l_643,&l_643,&l_643,&l_643,&l_643,&l_643}}};
                    int64_t l_646[7];
                    int32_t l_647 = 0xF5C02C04L;
                    int32_t l_653[3];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_646[i] = 0x6AA11D72F8A2BCB9LL;
                    for (i = 0; i < 3; i++)
                        l_653[i] = 1L;
                    l_644 = &l_313;
                    ++l_654[2];
                    (*g_320) = (*g_320);
                    l_648 ^= (-5L);
                }
                (*l_627) = &l_622;
                (*g_402) = (((safe_add_func_uint64_t_u_u((*g_468), 0x6C4F837703C8B079LL)) & (((*g_468) >= (((((safe_sub_func_int32_t_s_s((((*p_29) , ((safe_sub_func_int64_t_s_s((9L && (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(l_638, 5)) >= (g_670 &= (**g_557))) <= l_622.f0.f4), 0)), p_30))), p_30)) < 0xA315014E698989CALL)) >= l_636), 4294967295UL)) && (*p_29)) < (*p_29)) > 0xBA85E7BBECF8D4C4LL) != 6UL)) , l_648)) | p_30);
            }
            (*l_318) = (l_671[2] , (void*)0);
        }
        else
        { 
            int32_t l_672 = 0L;
            int32_t l_673 = 0L;
            int32_t l_674 = 0xB5B1F210L;
            int32_t l_675 = 0x94D625CAL;
            int32_t l_676 = 0xB7CE9BBFL;
            int32_t l_681 = 0x6EAB7C1DL;
            int32_t l_682 = 0L;
            int32_t l_683[1];
            int i;
            for (i = 0; i < 1; i++)
                l_683[i] = 0x50FC51D3L;
            (*g_320) = p_28;
            ++l_685[1][4][2];
        }
        for (g_45 = 0; (g_45 < 4); g_45 = safe_add_func_int8_t_s_s(g_45, 5))
        { 
            uint16_t l_707 = 0xF1ACL;
            int32_t l_708 = 0x8F2207BCL;
            union U3 *l_720 = &g_645[2][3][0];
            union U3 **l_719 = &l_720;
            uint8_t *l_739 = &l_654[2];
            union U2 l_747 = {0};
            for (l_622.f0.f3 = 4; (l_622.f0.f3 <= 16); l_622.f0.f3++)
            { 
                uint16_t *l_705 = &g_515;
                int32_t l_706 = 0xFFA251B3L;
                (*p_27) = ((((*l_623) = ((safe_div_func_uint32_t_u_u(p_26, (((((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s((!g_124[0].f4), ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((((*l_705) = 3UL) >= (((((((((0UL < (0UL || 65535UL)) & 0UL) != g_124[0].f6) && (-1L)) && l_706) , (*l_623)) > p_30) > p_26) ^ p_26)) , p_26), 5)), 1)) > g_124[0].f2))), g_119)), (*p_29))) | l_622.f0.f3) && 4294967295UL) || p_30) ^ l_707))) != p_26)) , (*p_29)) && 0xE4L);
                if (((l_706 = ((*g_558) = l_706)) | l_622.f0.f6))
                { 
                    if ((*g_402))
                        break;
                    (*p_27) &= (p_30 <= (0xCD6AD43FL != (&g_558 == &g_558)));
                }
                else
                { 
                    uint8_t l_710 = 0x70L;
                    ++l_710;
                    (*g_402) = (safe_div_func_uint16_t_u_u(65535UL, ((*l_705) ^= p_26)));
                    (*p_27) = (((void*)0 == &l_707) && ((safe_add_func_uint64_t_u_u((--(*g_468)), (l_706 == l_707))) > (p_30 <= ((void*)0 == l_719))));
                }
                if ((*p_28))
                    break;
            }
            (*p_27) = ((void*)0 != l_721);
            (*l_318) = &l_678;
            if (((**g_320) | (safe_sub_func_int32_t_s_s((*p_28), (safe_mod_func_uint8_t_u_u((((((g_645[2][3][0].f0.f3 , &g_566) == (void*)0) & g_124[0].f2) == (*p_28)) <= 0x70L), g_32))))))
            { 
                int32_t l_738 = 0L;
                union U2 l_740 = {0};
                int32_t *****l_764[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_764[i] = &g_565;
                for (l_455 = 6; (l_455 < 12); l_455 = safe_add_func_int64_t_s_s(l_455, 6))
                { 
                    int8_t *l_731 = (void*)0;
                    int8_t *l_732 = &l_709[0][5];
                    int16_t *l_737[2][2] = {{&l_684,&l_684},{&l_684,&l_684}};
                    int i, j;
                    (*g_402) |= ((void*)0 == &g_85[0][5][2]);
                    (*p_28) = (0UL | ((safe_lshift_func_int8_t_s_s((((((((*l_732) = (-1L)) == (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_30, g_259.f4)), (l_738 = g_259.f2)))) , l_739) != &g_438) & p_30) | l_680[1]), (***g_345))) , 0x1DL));
                }
                for (g_259.f2 = 0; (g_259.f2 <= 3); g_259.f2 += 1)
                { 
                    return l_740;
                }
                for (p_30 = (-8); (p_30 < 12); p_30 = safe_add_func_int8_t_s_s(p_30, 2))
                { 
                    uint64_t l_743[4][3][6] = {{{0xA4933FB0F99C4308LL,1UL,0x5E5A978B7C1C4E5ALL,0UL,0UL,0UL},{0xA4933FB0F99C4308LL,0UL,0xA4933FB0F99C4308LL,1UL,0x5E5A978B7C1C4E5ALL,0UL},{0xAFE043D1BE2387B2LL,0x0C67401A631BBB6CLL,0x5E5A978B7C1C4E5ALL,0x99A18E8ED90F1718LL,0x5E5A978B7C1C4E5ALL,0x0C67401A631BBB6CLL}},{{0x5E5A978B7C1C4E5ALL,0UL,0x74F21FF52359B556LL,0x99A18E8ED90F1718LL,0UL,1UL},{0xAFE043D1BE2387B2LL,1UL,0x74F21FF52359B556LL,1UL,0xAFE043D1BE2387B2LL,0x0C67401A631BBB6CLL},{0xA4933FB0F99C4308LL,1UL,0x5E5A978B7C1C4E5ALL,0UL,0UL,0UL}},{{0xA4933FB0F99C4308LL,0UL,0xA4933FB0F99C4308LL,1UL,0x5E5A978B7C1C4E5ALL,0UL},{0xAFE043D1BE2387B2LL,0x0C67401A631BBB6CLL,0x5E5A978B7C1C4E5ALL,0x99A18E8ED90F1718LL,0x5E5A978B7C1C4E5ALL,0x0C67401A631BBB6CLL},{0x5E5A978B7C1C4E5ALL,0UL,0x74F21FF52359B556LL,0x99A18E8ED90F1718LL,0UL,1UL}},{{0xAFE043D1BE2387B2LL,1UL,0x74F21FF52359B556LL,1UL,0xAFE043D1BE2387B2LL,0x0C67401A631BBB6CLL},{0xA4933FB0F99C4308LL,1UL,0x5E5A978B7C1C4E5ALL,0UL,0UL,0UL},{0xA4933FB0F99C4308LL,0UL,0xA4933FB0F99C4308LL,1UL,0x5E5A978B7C1C4E5ALL,0UL}}};
                    int i, j, k;
                    l_743[2][1][2]++;
                    if (g_259.f3)
                        goto lbl_746;
                    return l_747;
                }
                if (l_738)
                { 
                    uint32_t l_748 = 2UL;
                    union U1 ***l_751 = &l_627;
                    int16_t *l_752 = &l_684;
                    int32_t *****l_763 = &g_565;
                    (*g_300) = ((void*)0 == &l_671[4]);
                    ++l_748;
                    (*p_27) = (((*l_752) |= (g_626 == (l_738 , ((*l_751) = &l_628[0])))) || (safe_mul_func_uint8_t_u_u((((p_30 = l_708) , 0xD8C95347L) <= (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((safe_sub_func_int16_t_s_s((((**g_557) &= ((*p_29) > (l_763 != l_764[0]))) || (*g_468)), p_26)) , (*p_29)) <= 0x82L), l_707)), g_32)), 12))), 1UL)));
                    (*g_300) |= (l_765 == l_765);
                    if (l_424.f0.f5)
                        goto lbl_746;
                }
                else
                { 
                    if (l_303)
                        goto lbl_746;
                }
                (*g_402) = (**l_318);
            }
            else
            { 
                struct S0 *l_768[2][5][2] = {{{&g_124[0],&g_124[0]},{&g_124[0],(void*)0},{&g_645[2][3][0].f0,&g_259},{(void*)0,&g_259},{&g_645[2][3][0].f0,(void*)0}},{{&g_124[0],&g_124[0]},{&g_124[0],(void*)0},{&g_645[2][3][0].f0,&g_259},{(void*)0,&g_259},{&g_645[2][3][0].f0,(void*)0}}};
                struct S0 **l_767 = &l_768[0][2][1];
                int i, j, k;
                (*l_767) = (((*l_739) |= g_124[0].f0) , l_766[0]);
                if ((*p_27))
                    continue;
            }
            if (l_424.f0.f1)
                goto lbl_746;
        }
        if ((safe_mul_func_int8_t_s_s(((safe_mul_func_int64_t_s_s(p_30, ((*g_468) = ((void*)0 != l_773)))) && (((safe_mul_func_uint16_t_u_u(((((safe_sub_func_uint64_t_u_u(((**l_773) == (*l_721)), (safe_mod_func_uint16_t_u_u(((*l_787) = ((safe_add_func_uint16_t_u_u(((*p_28) & ((*l_785) = (safe_mod_func_int16_t_s_s(p_30, p_30)))), g_579[1].f0.f5)) , l_786[0])), p_26)))) && 0x119E6BF7A905D459LL) & p_30) < 1UL), l_786[0])) || 1L) <= 0x02F2E9FA6B6F23D5LL)), 0UL)))
        { 
            int32_t l_803 = (-5L);
            uint32_t *l_822 = &g_823;
            int64_t *l_829 = &g_371[2][5];
            const int64_t **l_831[6];
            int32_t l_834[7];
            int i;
            for (i = 0; i < 6; i++)
                l_831[i] = &l_830;
            for (i = 0; i < 7; i++)
                l_834[i] = (-1L);
            for (g_45 = 2; (g_45 >= 0); g_45 -= 1)
            { 
                int64_t l_798 = 4L;
                int32_t *l_799 = &l_678;
                for (l_622.f0.f2 = 0; (l_622.f0.f2 <= 2); l_622.f0.f2 += 1)
                { 
                    int i, j;
                    if (l_709[g_45][(g_45 + 1)])
                        break;
                }
                for (g_259.f2 = 2; (g_259.f2 >= 0); g_259.f2 -= 1)
                { 
                    int8_t *l_797 = &g_155;
                    int32_t *l_800 = &l_677;
                    uint8_t *l_813[5][6][4] = {{{&g_438,&g_438,&l_654[1],&g_438},{&l_654[2],&g_438,(void*)0,&l_654[2]},{&g_438,&l_654[0],&g_438,&l_654[0]},{&g_438,&l_654[0],&g_438,&l_654[1]},{&l_654[2],&l_654[0],(void*)0,(void*)0},{&l_654[0],&g_438,&g_438,&l_654[0]}},{{&l_654[2],&l_654[2],&g_438,&l_654[0]},{&l_654[0],&g_438,(void*)0,&l_654[2]},{&l_654[2],&g_438,&g_438,&l_654[2]},{&g_438,&l_654[2],&g_438,&l_654[2]},{&g_438,&l_654[0],(void*)0,(void*)0},{&l_654[2],&l_654[2],&l_654[1],(void*)0}},{{&g_438,&l_654[0],&g_438,&l_654[2]},{&l_654[0],&l_654[2],&l_654[2],&l_654[2]},{&l_654[0],&g_438,&l_654[1],&l_654[2]},{&l_654[0],&g_438,&g_438,&l_654[0]},{&g_438,&l_654[2],&l_654[2],&l_654[1]},{&l_654[2],&l_654[1],(void*)0,&g_438}},{{(void*)0,&l_654[1],&l_654[2],&l_654[2]},{&l_654[2],&l_654[2],&l_654[0],&l_654[1]},{&l_654[1],(void*)0,&l_654[2],&g_438},{&l_654[1],&l_654[2],&l_654[2],&l_654[2]},{&g_438,&l_654[2],&l_654[0],&g_438},{&l_654[2],(void*)0,&l_654[1],&l_654[1]}},{{(void*)0,&l_654[2],(void*)0,&l_654[2]},{&g_438,&l_654[1],&l_654[2],&g_438},{&l_654[2],&l_654[1],&l_654[2],&l_654[1]},{(void*)0,&g_438,&l_654[2],(void*)0},{&l_654[2],&l_654[2],&l_654[2],&g_438},{&g_438,(void*)0,(void*)0,&g_438}}};
                    int i, j, k;
                    (*p_27) |= (safe_mod_func_uint16_t_u_u((+(safe_div_func_int8_t_s_s(l_709[g_45][(g_45 + 4)], (((0UL >= (l_677 |= (safe_mul_func_int16_t_s_s((l_709[g_45][(g_45 + 4)] == p_30), ((safe_div_func_uint16_t_u_u((l_786[2] | ((*l_797) = l_709[2][0])), (((g_124[0] , g_163) , p_26) ^ 0x82EF7E0EL))) & l_798))))) && (**g_557)) || (*g_558))))), g_124[0].f4));
                    if ((*p_28))
                        break;
                    if (l_798)
                        continue;
                    (*g_402) = ((g_124[0].f4 & ((*l_787) = ((l_799 = p_28) == l_800))) | 0x3FD9F80EL);
                    l_680[1] |= (l_803 < ((((*l_799) ^= (safe_lshift_func_uint16_t_u_s((((g_259.f6 == ((safe_mul_func_uint8_t_u_u((*l_800), g_645[2][3][0].f0.f0)) & (p_26 && (safe_lshift_func_int16_t_s_s((((*l_800) | ((safe_sub_func_int64_t_s_s(((**g_557) = (g_645[2][3][0].f0.f4 ^ 6UL)), p_26)) && 0UL)) || (**g_557)), g_645[2][3][0].f0.f4))))) , 0x6974L) > l_812), l_622.f0.f2))) >= 0x4DL) >= p_26));
                }
            }
            (*p_27) &= (((safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(0x4439L, (safe_mod_func_uint64_t_u_u((((safe_lshift_func_int8_t_s_u((((((++(*l_822)) , (~(safe_mul_func_int8_t_s_s((p_30 <= g_670), (((*g_468) <= (l_829 != (l_832 = l_830))) >= p_26))))) , l_803) | p_26) , l_680[0]), g_452)) == 0x356EC2C820765121LL) & (*p_29)), p_26)))) && (*l_623)), l_803)) != 0x17A1EFCA824E97C0LL) | p_30);
            (*l_623) = (*l_623);
            l_835--;
        }
        else
        { 
            return g_42;
        }
    }
    for (g_155 = 7; (g_155 <= (-24)); g_155--)
    { 
        int64_t l_863 = (-1L);
        const int32_t ****l_876 = (void*)0;
        union U2 **l_883 = &l_498;
        int32_t l_887 = 0x9F584455L;
        int32_t l_911 = (-7L);
        uint16_t ****l_916 = (void*)0;
        uint32_t *l_925[3][4] = {{&g_442,&g_442,(void*)0,&g_163},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        union U1 * const *l_974 = &l_628[0];
        union U1 * const **l_973 = &l_974;
        int8_t l_1022[6] = {0L,0x4CL,0L,0L,0x4CL,0L};
        int32_t *****l_1025 = &g_565;
        struct S0 *l_1047 = (void*)0;
        int32_t l_1055 = 0L;
        int32_t l_1060 = 0xAE1CBC60L;
        int32_t l_1061 = 0x4EA02DD6L;
        int32_t l_1062 = 4L;
        int32_t l_1063 = 0x879AE677L;
        uint32_t l_1064 = 4294967295UL;
        int32_t l_1072 = 8L;
        int32_t l_1074[6];
        uint64_t l_1077 = 0x27FEBB095EFC85CCLL;
        int i, j;
        for (i = 0; i < 6; i++)
            l_1074[i] = 1L;
    }
    for (g_259.f2 = 0; (g_259.f2 >= 13); g_259.f2++)
    { 
        int64_t l_1085 = 0xA978F7E6C2ABB39CLL;
        int32_t l_1086 = 0xE255BB07L;
        int32_t l_1087[2];
        uint8_t l_1088 = 0xA3L;
        union U2 *l_1095 = &g_499;
        struct S0 l_1096 = {0x15B0041F9A5E9AD6LL,0xCAFDA1C0L,-2L,4L,8L,0x803441E3066E0979LL,0x739E1370L};
        int8_t * const *l_1123 = &g_3;
        int8_t * const **l_1122 = &l_1123;
        struct S0 ****l_1142 = &l_721;
        union U1 l_1149 = {{1UL,0xB15511E3L,0x047CD45CL,0x4E4FL,0x95D7L,-5L,1L}};
        int8_t *l_1164 = &l_679;
        uint16_t l_1198 = 0UL;
        uint32_t l_1321 = 0xF2445130L;
        uint16_t l_1336 = 1UL;
        struct S0 l_1356 = {18446744073709551613UL,0x9ABADE66L,2L,8L,1L,0xAE7C5AAF0392D909LL,1L};
        int i;
        for (i = 0; i < 2; i++)
            l_1087[i] = 3L;
        ++l_1088;
        if ((((*g_468) < p_30) > (safe_lshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s((p_30 != (l_1095 == (void*)0)), (*p_29))) , l_1096) , p_30), 4))))
        { 
            uint16_t l_1110[5][4] = {{1UL,65535UL,65535UL,1UL},{0UL,65535UL,65535UL,65535UL},{65535UL,6UL,65535UL,65535UL},{0UL,0UL,65535UL,65535UL},{1UL,6UL,1UL,65535UL}};
            int8_t ****l_1124 = &g_345;
            int16_t *l_1125 = (void*)0;
            int16_t *l_1126[2];
            uint32_t *l_1133[1];
            int32_t l_1134 = 0x1BE510C0L;
            int32_t l_1135 = 0x37A1CB47L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1126[i] = &g_579[1].f0.f4;
            for (i = 0; i < 1; i++)
                l_1133[i] = &g_163;
            (*l_623) = ((safe_add_func_uint32_t_u_u(p_26, (l_313 , (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(0xC149FFA0271A1A02LL, (&g_884[2] == ((safe_sub_func_uint32_t_u_u((l_1110[0][1] == ((!(g_579[1] , p_30)) == l_1096.f0)), l_1096.f5)) , (void*)0)))), 9)))), 3)), l_1096.f5))))) != (-5L));
            l_1135 ^= (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s((((l_1087[0] |= ((!(((safe_add_func_int64_t_s_s((p_26 != (l_1110[0][1] >= ((((safe_lshift_func_int16_t_s_u(((g_645[2][3][0].f0.f3 ^= (safe_rshift_func_int8_t_s_s((l_1122 != ((*l_1124) = &g_342[4][2])), 6))) || (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((*p_29), 0)), 0xD3L)), ((l_1134 = g_579[1].f0.f4) != (*g_924))))), p_26)) <= (*g_402)) & (*l_623)) >= g_45))), l_1088)) > l_1096.f1) >= 1UL)) | l_1110[0][1])) & 0x72304381AF4F5486LL) < p_30))) | l_1110[0][1]), 5UL));
        }
        else
        { 
            uint32_t l_1138[4][7] = {{0UL,1UL,1UL,0UL,0x3FEB2922L,0UL,1UL},{4294967295UL,4294967295UL,0xA2C84816L,0xD5863B5EL,0xA2C84816L,4294967295UL,4294967295UL},{0xEE5BE8CFL,1UL,0x3701D0ADL,1UL,0xEE5BE8CFL,0xEE5BE8CFL,1UL},{0xCD8B3CB6L,0xC85C67E7L,0xCD8B3CB6L,0xA2C84816L,0xA2C84816L,0xCD8B3CB6L,0xC85C67E7L}};
            int32_t l_1139 = 0x1D46CA2FL;
            struct S0 ****l_1144 = &l_721;
            struct S0 *****l_1143[3];
            int32_t l_1155 = 1L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1143[i] = &l_1144;
            l_1139 |= (safe_rshift_func_int8_t_s_u((l_1138[3][6] = (*p_29)), 5));
            (*l_318) = func_33(g_7, (safe_div_func_uint8_t_u_u(((l_1142 == (l_1145 = l_1142)) < (safe_mod_func_int64_t_s_s((((+p_30) ^ g_124[0].f1) && (((l_1149 , (void*)0) == &l_1122) != (*l_623))), p_26))), 1L)), g_371[2][5]);
            for (l_1149.f0.f2 = 0; (l_1149.f0.f2 < (-28)); l_1149.f0.f2 = safe_sub_func_uint8_t_u_u(l_1149.f0.f2, 3))
            { 
                uint64_t l_1156 = 18446744073709551615UL;
                for (g_86 = (-13); (g_86 < 36); g_86 = safe_add_func_int16_t_s_s(g_86, 9))
                { 
                    if (l_313.f0.f4)
                        goto lbl_1154;
                    (*g_300) &= l_1138[3][6];
                    l_1156++;
                }
            }
        }
        (*l_627) = (void*)0;
        (*g_402) = ((((l_313 , ((((void*)0 == l_513[0][0]) ^ ((((*g_924) | (*p_27)) & (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(p_30, (l_1163 == &g_338[0][4]))), g_645[2][3][0].f0.f6))) , p_26)) | g_433[1][0])) < l_1149.f0.f0) , l_1149.f0) , 0L);
        if ((((*l_1164) &= ((void*)0 != &g_565)) | (&g_558 == &l_832)))
        { 
            (*g_402) &= (safe_mul_func_int8_t_s_s((-1L), (*p_29)));
        }
        else
        { 
            int16_t l_1187 = 0xA194L;
            int32_t l_1188 = (-5L);
            int32_t l_1191 = 0x89B02BD4L;
            int32_t l_1193 = 0x36F00904L;
            int32_t l_1196[6][7] = {{0x7B825199L,0L,0x7B825199L,0L,0x7B825199L,0L,0x7B825199L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x7B825199L,0L,0x7B825199L,0L,0x7B825199L,0L,0x7B825199L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x7B825199L,0L,0x7B825199L,0L,0x7B825199L,0L,0x7B825199L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
            union U1 *l_1231 = &g_579[1];
            int8_t l_1235[4] = {0x6DL,0x6DL,0x6DL,0x6DL};
            struct S0 l_1266 = {8UL,0x4E7A7DF2L,0x9454C3C1L,-1L,0x7FF8L,9L,0x671BA526L};
            union U3 *l_1268 = &l_313;
            union U3 **l_1267 = &l_1268;
            uint16_t l_1270 = 0xD693L;
            uint8_t *l_1271 = (void*)0;
            int64_t l_1290 = 0x73CBAB1C37350673LL;
            int64_t l_1308 = 1L;
            int32_t *l_1339 = &l_1229;
            int16_t l_1345 = 2L;
            const uint64_t l_1378 = 0xD805D5EFACC519D9LL;
            int i, j;
            if (l_1096.f1)
                break;
            for (l_455 = 0; (l_455 <= 0); l_455 += 1)
            { 
                uint8_t *l_1178 = &g_438;
                int32_t **l_1181 = &g_402;
                uint8_t *l_1182[1];
                int32_t l_1184 = (-1L);
                int32_t l_1186 = 0xE774386EL;
                int32_t l_1192 = 0xBA8C2DDFL;
                int32_t l_1194 = 0L;
                int32_t l_1195 = 1L;
                int32_t l_1197 = 0x76D427F5L;
                union U1 ***l_1211 = &l_627;
                int8_t ***l_1230 = &g_342[4][1];
                union U1 **l_1232 = &l_1231;
                union U1 *l_1234 = &l_1149;
                union U1 **l_1233 = &l_1234;
                int32_t l_1236[4][2][7] = {{{6L,0L,(-6L),0L,6L,6L,0L},{0xD060581AL,1L,0xD060581AL,0x1A5282B3L,0x1A5282B3L,0xD060581AL,1L}},{{0L,0xD5A8E11EL,(-6L),(-6L),0xD5A8E11EL,0L,0xD5A8E11EL},{0xD060581AL,0x1A5282B3L,0x1A5282B3L,0xD060581AL,1L,0x39B228CCL,0xD060581AL}},{{0L,0L,0xFF065D93L,0xD5A8E11EL,0xFF065D93L,0L,0L},{0x1A5282B3L,0xD060581AL,1L,0xD060581AL,0x1A5282B3L,0x1A5282B3L,0xD060581AL}},{{(-6L),6L,(-6L),0xFF065D93L,0xFF065D93L,(-6L),6L},{0xD060581AL,4L,1L,1L,4L,0xD060581AL,4L}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1182[i] = &l_1088;
                (*l_318) = func_33(g_32, p_26, (0UL == (safe_rshift_func_int8_t_s_u((((~(safe_add_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((g_1183 = (safe_mul_func_uint8_t_u_u(g_514, (safe_add_func_int16_t_s_s(((((((--(*l_1178)) ^ p_30) < ((l_1181 = l_1181) == (void*)0)) < 0x6CL) , 2L) , p_30), p_26))))) | 0xA0L), l_1184)), (***g_341)))) | g_124[0].f2) ^ g_124[0].f1), 0))));
                for (l_1045 = 0; (l_1045 <= 0); l_1045 += 1)
                { 
                    int32_t l_1185 = 0xAE601EFFL;
                    int32_t l_1189 = 0x8AD362F7L;
                    int32_t l_1190[7][2][6] = {{{0x9CECBCBCL,(-3L),0x004367D5L,0xD91D1362L,0L,(-9L)},{(-3L),0x142538F4L,(-2L),0xD91D1362L,0L,0xC5BE5AFCL}},{{0x9CECBCBCL,(-7L),1L,0xC5BE5AFCL,0xC5BE5AFCL,1L},{0xB9DC208DL,0xB9DC208DL,0xEE9EAF04L,(-7L),(-5L),(-3L)}},{{(-2L),0x004367D5L,(-5L),5L,0L,0xEE9EAF04L},{(-7L),(-2L),(-5L),1L,0xB9DC208DL,(-3L)}},{{(-2L),1L,0xEE9EAF04L,0L,0xEE9EAF04L,1L},{0L,0xEE9EAF04L,1L,(-2L),(-1L),0xC5BE5AFCL}},{{1L,(-5L),(-2L),(-7L),5L,(-9L)},{5L,(-5L),0x004367D5L,(-2L),(-1L),0x9CECBCBCL}},{{(-7L),0xEE9EAF04L,0xB9DC208DL,0xB9DC208DL,0xEE9EAF04L,(-7L)},{0xC5BE5AFCL,1L,(-7L),0x9CECBCBCL,0xB9DC208DL,(-2L)}},{{0xD91D1362L,(-2L),0x142538F4L,(-3L),0L,0x004367D5L},{0xD91D1362L,0x004367D5L,(-3L),0x9CECBCBCL,(-5L),0L}}};
                    uint32_t *l_1226 = &g_163;
                    int i, j, k;
                    l_1198++;
                    (*p_28) = (((g_645[1][5][0] , (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_1190[2][1][3] |= ((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((((*l_1178) = ((&l_627 == l_1211) , (safe_mul_func_uint16_t_u_u(g_156[(l_1045 + 1)][l_455][(l_1045 + 2)], (((safe_lshift_func_int16_t_s_u((((!(safe_div_func_uint8_t_u_u(0x5CL, l_1096.f0))) > (0x4CL | 0xC4L)) || 4294967295UL), l_1193)) && l_1193) >= (-1L)))))) , 0x3CL), (**l_1181))), g_259.f3)) < g_259.f6)), 8)), l_1196[5][4])), p_26))) != l_1149.f0.f2) == l_1149.f0.f1);
                    l_1086 |= (safe_add_func_int16_t_s_s(((g_442 |= ((0x3E533B4DL && ((safe_unary_minus_func_uint32_t_u(0xFC11A3D6L)) , (safe_add_func_uint64_t_u_u((l_1190[3][1][3] &= (safe_lshift_func_uint8_t_u_s(((*p_27) <= (((*l_1226) ^= g_259.f1) & (((((((((0xD070F561L == ((safe_lshift_func_uint8_t_u_u(0x0FL, ((*g_468) <= p_26))) || 0xFAL)) >= l_1229) == (*l_623)) > (-1L)) & g_579[1].f0.f4) , l_1230) != (void*)0) > (-1L)) ^ p_30))), (**l_318)))), (**g_557))))) >= p_26)) <= 1L), p_26));
                    (*l_318) = &l_1191;
                }
                (*l_1233) = ((*l_1232) = ((**l_1211) = l_1231));
                ++g_1237[1];
                for (l_1149.f0.f2 = 0; (l_1149.f0.f2 <= 0); l_1149.f0.f2 += 1)
                { 
                    union U2 *l_1245 = &g_499;
                    int i, j, k;
                    (**l_1181) = (safe_unary_minus_func_int16_t_s(((safe_div_func_uint8_t_u_u((g_156[(l_455 + 4)][l_455][(l_455 + 2)] >= ((*g_558) = (((*l_1178) = ((0xB2L < (safe_mod_func_uint16_t_u_u((4UL == (((l_1245 == (void*)0) | (((*p_27) = g_156[(l_455 + 4)][l_455][(l_455 + 2)]) == (**l_1181))) && g_124[0].f6)), p_30))) & 1UL)) >= p_30))), p_26)) , l_1096.f4)));
                }
            }
            (*p_27) ^= ((safe_mod_func_int64_t_s_s((*g_558), (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_1193 < (safe_rshift_func_int16_t_s_u(g_579[1].f0.f2, (p_26 = (0xED30L > ((g_438 = ((safe_div_func_int64_t_s_s((p_30 < (safe_mod_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((l_1266 , l_1267) == g_1269), (*g_468))), (*g_3)))), l_1096.f2)) , l_1270)) || g_4)))))), 0xB1L)), 0x15L)), g_259.f2)) <= l_1193), (*g_3))), (*g_3))))) < g_124[0].f3);
            if ((safe_div_func_int16_t_s_s(((p_26 | 4UL) & (((l_1086 = ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((p_30 > (((safe_mod_func_int64_t_s_s(0x841561F734E815B8LL, ((0x01E4D4E5L >= ((l_313 , g_1269) == &l_1268)) && 0xB1L))) , 1UL) & 0UL)), p_30)), g_371[2][5])) | 0L)) , l_1196[2][2]) >= 0x6EBCL)), (-10L))))
            { 
                uint8_t *l_1280 = (void*)0;
                uint8_t *l_1281 = &l_1045;
                struct S0 ****l_1289 = (void*)0;
                int32_t *****l_1291 = &g_565;
                union U1 **l_1294 = (void*)0;
                int32_t l_1325 = 0xFA10B892L;
                int32_t l_1335 = 0xAD345DF3L;
                if ((((*l_1281) = g_124[0].f1) && p_26))
                { 
                    struct S0 l_1286 = {0xF5FB0A22C27053DBLL,4L,0x2086EB66L,-8L,0x7296L,0L,-1L};
                    struct S0 *****l_1288[4][6] = {{&l_1142,&l_1142,&l_1145,&g_1287,&l_1145,(void*)0},{(void*)0,&g_1287,&l_1145,&g_1287,(void*)0,&l_1142},{(void*)0,&l_1142,&g_1287,&g_1287,&l_1142,&l_1142},{&l_1142,&l_1145,&l_1145,&l_1142,&l_1145,&l_1142}};
                    int i, j;
                    g_1292 = ((p_30 = (g_124[0].f2 <= ((void*)0 != &l_913))) , ((safe_mod_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((((l_1286 , (g_1287 != (l_1289 = (void*)0))) & 0x6FF7A3777EAA0DA1LL) , 0UL), g_259.f2)), l_1290)) , l_1291));
                }
                else
                { 
                    int16_t l_1293[2];
                    const int8_t l_1295 = (-1L);
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1293[i] = 0x1854L;
                    (*p_28) ^= (l_1293[0] <= (g_645[2][3][0] , ((((void*)0 == l_1294) && 18446744073709551615UL) ^ (-5L))));
                    if (l_1295)
                        break;
                    l_1087[0] ^= (safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(g_1300, (safe_add_func_int16_t_s_s(l_1086, ((l_1096.f2 & (safe_rshift_func_uint16_t_u_u(p_30, 11))) | 65535UL))))), (((*g_557) = (*g_557)) == &l_1085)));
                    if (l_1149.f0.f0)
                        continue;
                    l_1325 &= (safe_add_func_int32_t_s_s(((((0UL <= ((**g_557) = (~((((p_26 > l_1308) || ((safe_sub_func_int16_t_s_s(g_433[1][0], (safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_1321, (safe_lshift_func_int16_t_s_s((-1L), 13)))), 1)), (g_514 = ((((void*)0 == &l_1268) < l_1293[0]) , (*l_623))))), 0xF2739A8BL)), g_873)))) , (*l_623))) ^ p_26) < 1L)))) < (*g_468)) | l_1324) > p_26), 0xF6E6B784L));
                }
                if (((*g_402) = ((*p_28) && (g_119 || (l_1290 == 0UL)))))
                { 
                    int8_t l_1330 = (-9L);
                    int32_t l_1331 = 1L;
                    int32_t l_1334 = 0L;
                    l_1191 |= (*p_28);
                    l_1336++;
                    l_1339 = p_27;
                    ++g_1340;
                }
                else
                { 
                    int16_t *l_1357 = (void*)0;
                    int16_t *l_1358 = &g_499.f1.f3;
                    int16_t *l_1359 = &l_313.f0.f4;
                    int32_t l_1360[1][2][3] = {{{(-3L),(-3L),(-3L)},{0x5543EE43L,0x5543EE43L,0x5543EE43L}}};
                    union U2 l_1361 = {0};
                    const int64_t *l_1364[1][5] = {{&l_1096.f5,&l_1096.f5,&l_1096.f5,&l_1096.f5,&l_1096.f5}};
                    int i, j, k;
                    (*p_27) = ((safe_mod_func_int16_t_s_s(((*l_1359) = ((((*g_468) |= l_1345) & p_30) < ((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u((*p_29), (((*p_27) | (((((*l_1339) = ((safe_rshift_func_int8_t_s_u((((*l_623) = (safe_mod_func_int16_t_s_s(((*l_1358) = ((l_1356 , g_4) ^ g_1300)), p_26))) | g_579[1].f0.f3), l_1149.f0.f4)) || (***g_345))) , g_32) , 0xCBL) || g_645[2][3][0].f0.f2)) , 0x44L))) , (void*)0) == &l_1123) , 0xFAL), 3)), (-1L))) , (*p_29)))), l_1360[0][1][1])) ^ 18446744073709551615UL);
                    (*l_318) = func_33((p_29 == &l_1088), (l_1361 , (safe_mod_func_int32_t_s_s((*p_27), ((*l_623) &= (*l_1339))))), (l_1364[0][2] != ((*g_557) = (*g_557))));
                    (*g_300) &= 0x1232D6A6L;
                }
            }
            else
            { 
                int64_t *l_1367 = &g_670;
                int64_t l_1368 = 0x10E3C66A30A8CD4DLL;
                g_1369 ^= ((*p_27) = (((*g_468) = (safe_add_func_int64_t_s_s(((**g_557) = ((*p_28) == 0L)), ((*l_1367) = (-4L))))) && ((**g_557) = (((*l_1339) = ((*g_402) = l_1368)) < (l_1368 >= (g_259.f4 >= ((*l_498) , (*p_29))))))));
            }
            if ((*g_402))
            { 
                struct S0 l_1370 = {0xE02B8190BB68D750LL,0L,2L,7L,0xC106L,0x61E6CF36CA73ED53LL,0L};
                (*l_627) = (l_1370 , &l_1149);
                for (g_1340 = 0; (g_1340 <= 3); g_1340 += 1)
                { 
                    return (*l_1095);
                }
            }
            else
            { 
                uint16_t l_1371 = 0x4254L;
                (*p_28) |= l_1371;
                (*p_27) = (safe_add_func_int16_t_s_s((((*l_1164) = ((*l_1339) >= ((*l_1339) && ((**g_557) ^ (p_30 != ((((safe_sub_func_uint64_t_u_u(((((((*l_1339) && 0x1233L) > (*p_27)) < g_124[0].f1) & l_1371) ^ l_1378), p_30)) && l_1149.f0.f3) , p_26) > (*l_1339))))))) | l_1356.f1), (*l_623)));
                (*g_320) = l_1379[0];
            }
        }
    }
    return (*l_498);
}



static int32_t * func_33(uint32_t  p_34, uint16_t  p_35, uint32_t  p_36)
{ 
    int32_t *l_46 = &g_7;
    int32_t *l_47 = &g_7;
    int32_t *l_48 = &g_7;
    int32_t *l_49 = &g_7;
    int32_t *l_50 = &g_7;
    int32_t *l_51 = (void*)0;
    int32_t *l_52 = &g_7;
    int32_t *l_53 = &g_7;
    int32_t *l_54 = &g_7;
    int32_t *l_55 = (void*)0;
    int32_t l_56 = 0x63523E24L;
    int32_t *l_57 = &g_7;
    int32_t *l_58 = &l_56;
    int32_t *l_59 = &l_56;
    int32_t *l_60 = (void*)0;
    int32_t *l_61 = &l_56;
    int32_t *l_62 = (void*)0;
    int32_t *l_63 = &l_56;
    int32_t *l_65 = &g_7;
    int32_t *l_66 = &g_64[0][0];
    int32_t l_67[3];
    int32_t *l_68 = &l_67[1];
    int32_t *l_69 = &l_67[0];
    int32_t *l_70 = &g_7;
    int32_t *l_71[3];
    uint64_t l_72 = 0xE9E5145DB5E4941ALL;
    union U3 l_161 = {{0xE0B0FEF90807700CLL,0x73DCB5AAL,0xB81C1D83L,0x8CC7L,6L,0x54DDF52832AB4624LL,-9L}};
    int32_t l_231 = 1L;
    int16_t l_236 = (-7L);
    int32_t *l_299 = &g_7;
    int i;
    for (i = 0; i < 3; i++)
        l_67[i] = 0x6AECE011L;
    for (i = 0; i < 3; i++)
        l_71[i] = &g_7;
lbl_240:
    --l_72;
    for (l_56 = 0; (l_56 > 27); l_56 = safe_add_func_uint32_t_u_u(l_56, 4))
    { 
        int8_t *l_90 = &g_4;
        int32_t l_229[3];
        int8_t *l_266 = &g_4;
        int32_t l_295 = (-1L);
        uint32_t l_296 = 1UL;
        int i;
        for (i = 0; i < 3; i++)
            l_229[i] = 2L;
        if (((*l_48) = ((((((safe_div_func_int8_t_s_s((9UL ^ ((safe_lshift_func_int16_t_s_u(func_81(g_85[0][0][1], func_87(l_90, &g_7), l_161), p_36)) < g_45)), g_124[0].f6)) , g_64[0][0]) != p_35) <= l_229[0]) , (*l_70)) ^ p_35)))
        { 
            int32_t l_230 = (-1L);
            int32_t l_232 = 0x918DBAE1L;
            int32_t l_233 = 0xF78D3223L;
            int32_t l_234 = (-4L);
            int32_t l_235[3];
            uint32_t l_237 = 0x5A79CFEFL;
            int i;
            for (i = 0; i < 3; i++)
                l_235[i] = 1L;
            ++l_237;
        }
        else
        { 
            int32_t *l_254 = &l_67[1];
            struct S0 *l_258 = &g_259;
            int32_t l_292 = (-3L);
            int32_t l_293[6][2] = {{0x4098CC03L,5L},{0x4098CC03L,0x4098CC03L},{5L,0x4098CC03L},{0x4098CC03L,5L},{0x4098CC03L,0x4098CC03L},{5L,0x4098CC03L}};
            int8_t l_294 = (-2L);
            int i, j;
            for (g_119 = 0; (g_119 <= 0); g_119 += 1)
            { 
                int i, j;
                if (g_45)
                    goto lbl_240;
                if (g_64[g_119][g_119])
                    continue;
                for (g_163 = 0; (g_163 <= 0); g_163 += 1)
                { 
                    return &g_7;
                }
            }
            for (l_161.f0.f2 = 0; (l_161.f0.f2 == (-8)); --l_161.f0.f2)
            { 
                uint8_t l_261 = 0x0CL;
                uint16_t *l_280 = &g_119;
                uint16_t *l_281 = &g_86;
                int8_t *l_286 = &g_155;
                int32_t l_289[3][2][5] = {{{6L,1L,6L,(-1L),(-1L)},{0x67BA512DL,1L,0x67BA512DL,0L,0L}},{{6L,1L,6L,(-1L),(-1L)},{0x67BA512DL,1L,0x67BA512DL,0L,0L}},{{6L,1L,6L,(-1L),(-1L)},{0x67BA512DL,1L,0x67BA512DL,0L,0x67BA512DL}}};
                int i, j, k;
                if ((safe_mod_func_int8_t_s_s((p_36 != (((0x2539A142L & (safe_add_func_uint8_t_u_u(g_64[0][3], 0x58L))) <= ((-1L) | (safe_rshift_func_uint8_t_u_s((l_229[0] != ((safe_div_func_int64_t_s_s(((&p_35 == (void*)0) >= (-5L)), g_45)) <= 0x1D21E9CEL)), l_229[0])))) == l_229[1])), 0x67L)))
                { 
                    if (g_124[0].f0)
                        break;
                    g_64[0][3] = (g_7 = (!p_35));
                }
                else
                { 
                    int32_t **l_255 = &l_49;
                    struct S0 *l_257 = &l_161.f0;
                    struct S0 **l_256[3];
                    int32_t l_260[3][1];
                    int8_t **l_267[7][2][4] = {{{&l_266,&l_266,&l_266,&g_3},{&l_266,&g_3,&g_3,&l_266}},{{&l_266,&g_3,&l_90,&g_3},{&g_3,&l_266,&l_90,&l_90}},{{&l_266,&l_266,&g_3,&l_90},{&l_266,&l_266,&l_266,&g_3}},{{&l_266,&g_3,&g_3,&l_266},{&l_266,&g_3,&l_90,&g_3}},{{&g_3,&l_266,&l_90,&l_90},{&l_266,&l_266,&g_3,&l_90}},{{&l_266,&l_266,&l_266,&g_3},{&l_266,&g_3,&g_3,&l_266}},{{&l_266,&g_3,&l_90,&g_3},{&g_3,&l_266,&l_90,&l_90}}};
                    int8_t *l_268 = &g_155;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_256[i] = &l_257;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_260[i][j] = 0xC62D4CC2L;
                    }
                    if (p_36)
                        goto lbl_240;
                    (*l_255) = l_254;
                    l_258 = &g_124[0];
                    ++l_261;
                    l_229[1] |= ((*l_54) = ((safe_sub_func_int64_t_s_s(((((*l_254) ^= ((g_3 = l_266) != (l_268 = (void*)0))) || ((l_261 , (safe_rshift_func_int16_t_s_s((*l_254), (safe_add_func_int32_t_s_s((((5L || 1UL) && ((((safe_mod_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(((*l_254) == 1L), g_64[0][3])) != (*l_254)), p_35)) != 0x6AE6BA4FL) > p_34) <= p_36)) , p_35), 2UL))))) && (*l_254))) < p_34), l_261)) >= 0x75L));
                }
                if ((g_42 , (((safe_lshift_func_uint8_t_u_s((0x2F5B1EEFL == l_261), ((!((*l_281) = ((*l_280) &= 0xFAA0L))) != (safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(((*l_286) = p_36), ((((safe_rshift_func_uint8_t_u_s(0xC9L, 4)) , g_156[3][0][1]) && (*l_254)) ^ (*l_254)))), 0x5071L))))) == 0x2844BE889EB94F8DLL) && l_261)))
                { 
                    g_64[0][3] |= (g_86 || ((*l_46) = (l_289[0][0][0] |= ((void*)0 == &g_155))));
                }
                else
                { 
                    int32_t **l_291 = &l_46;
                    int32_t ***l_290 = &l_291;
                    if (p_36)
                        break;
                    (*l_290) = (void*)0;
                }
                return &g_64[0][1];
            }
            --l_296;
        }
        return l_299;
    }
    g_300 = &g_7;
    return &g_64[0][3];
}



static int16_t  func_40(const union U2  p_41)
{ 
    uint32_t l_43[4][4] = {{7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL}};
    int32_t *l_44 = &g_7;
    int i, j;
    (*l_44) = l_43[2][0];
    return g_7;
}



static const int16_t  func_81(uint16_t * p_82, uint16_t * p_83, union U3  p_84)
{ 
    int64_t l_162 = 1L;
    int32_t l_166 = 1L;
    int8_t *l_183 = &g_4;
    int32_t *l_184 = &g_64[0][3];
    int8_t *l_185[6][4][4] = {{{&g_155,(void*)0,(void*)0,&g_155},{(void*)0,&g_155,(void*)0,(void*)0},{&g_155,&g_155,&g_155,&g_155},{&g_155,(void*)0,(void*)0,&g_155}},{{(void*)0,&g_155,(void*)0,(void*)0},{&g_155,&g_155,&g_155,&g_155},{&g_155,(void*)0,(void*)0,&g_155},{(void*)0,&g_155,(void*)0,(void*)0}},{{&g_155,&g_155,&g_155,&g_155},{&g_155,(void*)0,(void*)0,&g_155},{(void*)0,&g_155,(void*)0,(void*)0},{&g_155,&g_155,&g_155,&g_155}},{{&g_155,(void*)0,(void*)0,&g_155},{(void*)0,&g_155,(void*)0,(void*)0},{&g_155,&g_155,&g_155,&g_155},{&g_155,(void*)0,(void*)0,&g_155}},{{(void*)0,&g_155,(void*)0,(void*)0},{&g_155,&g_155,&g_155,&g_155},{&g_155,(void*)0,(void*)0,&g_155},{(void*)0,&g_155,(void*)0,(void*)0}},{{&g_155,&g_155,&g_155,&g_155},{&g_155,(void*)0,(void*)0,&g_155},{(void*)0,&g_155,(void*)0,(void*)0},{&g_155,&g_155,&g_155,&g_155}}};
    int32_t l_186 = 7L;
    int32_t l_200[7][3] = {{(-1L),0L,1L},{0x0411A2B8L,0x0411A2B8L,0x5851E5C6L},{0x841FF86EL,0L,0L},{0x5851E5C6L,0xC0140F11L,0x672A85B3L},{0x841FF86EL,4L,0x841FF86EL},{0x0411A2B8L,0x5851E5C6L,0x672A85B3L},{(-1L),(-1L),0L}};
    uint32_t l_201 = 18446744073709551606UL;
    uint32_t l_225 = 0x55EE233FL;
    int i, j, k;
    l_166 ^= (l_162 | ((++g_163) , 5L));
    if ((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_162, ((safe_lshift_func_int8_t_s_s((l_186 = ((safe_mod_func_int8_t_s_s(0xF7L, (g_155 = (l_166 || ((safe_add_func_int16_t_s_s(((((((*l_184) = ((safe_add_func_uint8_t_u_u(p_84.f0.f5, ((safe_sub_func_int32_t_s_s(0L, (l_166 < ((l_183 == &g_155) , 0x0B67L)))) | p_84.f0.f2))) >= (*p_83))) , 0x561E7CC754962DFELL) , (*l_184)) & 0L) || (*l_184)), (*p_82))) || 0x9EF8L))))) ^ p_84.f0.f5)), p_84.f0.f4)) == p_84.f0.f3))), p_84.f0.f3)), 0xFBL)))
    { 
        int8_t *l_189 = (void*)0;
        int32_t *l_190 = &l_186;
        int32_t *l_191 = &g_64[0][0];
        int32_t l_192 = (-5L);
        int32_t *l_193 = &g_64[0][3];
        int32_t *l_194 = &g_64[0][1];
        int32_t *l_195 = (void*)0;
        int32_t l_196 = 0xB12A1AFCL;
        int32_t *l_197 = &l_186;
        int32_t *l_198 = (void*)0;
        int32_t *l_199[5] = {&g_64[0][3],&g_64[0][3],&g_64[0][3],&g_64[0][3],&g_64[0][3]};
        int8_t l_208[3][3];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_208[i][j] = 0x75L;
        }
lbl_204:
        (*l_184) = (safe_lshift_func_int8_t_s_s((0UL != (1L != (((0x62L || ((((*l_184) , &l_186) != &g_64[0][3]) | (l_189 == l_185[1][1][1]))) < p_84.f0.f4) , (-1L)))), p_84.f0.f5));
        ++l_201;
        if (g_163)
            goto lbl_204;
        for (l_186 = 1; (l_186 >= 0); l_186 -= 1)
        { 
            int64_t l_205 = 0L;
            int32_t l_206 = 0x49DBCD60L;
            int32_t l_207 = 1L;
            for (g_86 = 0; (g_86 <= 1); g_86 += 1)
            { 
                uint8_t l_209 = 1UL;
                ++l_209;
                for (l_166 = 0; (l_166 <= 1); l_166 += 1)
                { 
                    (*l_184) &= g_124[0].f3;
                }
            }
            return p_84.f0.f0;
        }
    }
    else
    { 
        int16_t l_223 = 1L;
        int32_t l_224 = 1L;
        for (l_162 = (-30); (l_162 == (-4)); ++l_162)
        { 
            int32_t * const *l_215 = (void*)0;
            int32_t *l_216 = &l_186;
            int32_t *l_217 = &l_186;
            int32_t *l_218 = &g_64[0][3];
            int32_t *l_219 = (void*)0;
            int32_t *l_220 = &l_186;
            int32_t *l_221 = &g_64[0][2];
            int32_t *l_222[5][5] = {{&l_186,&l_186,&l_186,&l_186,&l_186},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_186,&l_186,&l_186,&l_186,&l_186},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_186,&l_186,&l_186,&l_186,&l_186}};
            int32_t **l_228 = &l_219;
            int i, j;
            for (l_166 = 0; (l_166 <= 0); l_166 += 1)
            { 
                int i, j;
                g_64[l_166][l_166] = (g_64[l_166][(l_166 + 1)] | 0x75L);
                for (l_186 = 0; (l_186 <= 2); l_186 += 1)
                { 
                    int32_t **l_214 = &l_184;
                    int i, j;
                    (*l_214) = &g_64[l_166][l_166];
                    l_200[(l_166 + 1)][(l_166 + 1)] = (l_215 != l_215);
                    if (g_124[0].f4)
                        continue;
                    l_184 = &g_64[0][0];
                    (*l_184) = 0x700F83C9L;
                }
            }
            ++l_225;
            (*l_228) = &g_64[0][3];
        }
    }
    return g_124[0].f6;
}



static uint16_t * func_87(int8_t * p_88, int32_t * p_89)
{ 
    int32_t *l_93 = &g_7;
    int32_t *l_94 = (void*)0;
    int32_t *l_95 = &g_64[0][3];
    int32_t *l_96 = &g_64[0][1];
    int32_t *l_97 = &g_64[0][3];
    int32_t *l_98 = &g_64[0][3];
    int32_t *l_99[5] = {&g_64[0][3],&g_64[0][3],&g_64[0][3],&g_64[0][3],&g_64[0][3]};
    int64_t l_100 = (-3L);
    int32_t l_101 = 1L;
    int32_t l_102[4][4];
    uint64_t l_103 = 0x4D8CA7F0EEFAAB16LL;
    uint32_t l_106 = 0xE1B71C95L;
    uint16_t *l_117[3];
    uint32_t l_133 = 0x78092CFCL;
    union U2 l_153 = {0};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_102[i][j] = 0x70A5D863L;
    }
    for (i = 0; i < 3; i++)
        l_117[i] = &g_86;
    (*p_89) = (safe_add_func_uint32_t_u_u(1UL, 0x33ED7856L));
    l_103--;
    ++l_106;
    if (((safe_mod_func_uint64_t_u_u(((*l_97) | (((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s(((((l_117[0] != (void*)0) != (((&g_4 == (p_88 = p_88)) > (!((*g_3) , 0x1BL))) <= g_45)) , 65535UL) || (*l_93)), g_64[0][1])) , (*l_93)), (*l_98))) & g_7), (*l_98))) && (*p_89)) <= g_119)), 0xB88E0C3C7F25558BLL)) , (*l_96)))
    { 
        int32_t *l_120 = &l_102[1][3];
        struct S0 *l_123 = &g_124[0];
        int32_t l_130[6] = {0x8E7733B7L,0x8E7733B7L,(-1L),0x8E7733B7L,0x8E7733B7L,(-1L)};
        int i;
        l_120 = p_89;
        for (g_86 = 0; (g_86 > 9); ++g_86)
        { 
            struct S0 **l_125 = &l_123;
            int32_t l_126 = 6L;
            int32_t l_127 = 0x53BAC825L;
            int32_t l_128 = 5L;
            int32_t l_129 = (-1L);
            int32_t l_131 = (-1L);
            int32_t l_132 = (-6L);
            (*l_125) = l_123;
            ++l_133;
            for (l_126 = 0; (l_126 < (-3)); l_126 = safe_sub_func_int32_t_s_s(l_126, 8))
            { 
                int32_t l_148[5][1][3] = {{{(-4L),(-4L),(-4L)}},{{0xE44F4403L,0xE44F4403L,0xE44F4403L}},{{(-4L),(-4L),(-4L)}},{{0xE44F4403L,0xE44F4403L,0xE44F4403L}},{{(-4L),(-4L),(-4L)}}};
                int i, j, k;
                for (l_127 = 0; (l_127 > 10); ++l_127)
                { 
                    int8_t *l_154[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_154[i] = &g_155;
                    (*l_96) = ((safe_unary_minus_func_uint8_t_u(((g_156[2][0][1] |= ((((safe_mod_func_int8_t_s_s((g_155 = (safe_mod_func_int32_t_s_s((~(((-1L) >= (safe_div_func_int16_t_s_s(0x1F37L, l_148[1][0][0]))) >= (safe_lshift_func_uint16_t_u_s(0x2875L, (0xC1EA0711L != (g_124[0].f3 && (safe_add_func_uint16_t_u_u((l_153 , (*l_120)), 0x7AC4L)))))))), (*l_120)))), (*l_98))) , l_127) || 4UL) ^ 0x7767L)) > (*l_120)))) <= 255UL);
                }
                if ((*p_89))
                    continue;
                (*p_89) = (5UL & (safe_lshift_func_int16_t_s_u(0xE8CAL, 11)));
            }
        }
    }
    else
    { 
        int32_t *l_159 = &g_7;
        int32_t **l_160 = &l_99[4];
        (*l_160) = l_159;
        return &g_119;
    }
    return &g_86;
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
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_64[i][j], "g_64[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_124[i].f0, "g_124[i].f0", print_hash_value);
        transparent_crc(g_124[i].f1, "g_124[i].f1", print_hash_value);
        transparent_crc(g_124[i].f2, "g_124[i].f2", print_hash_value);
        transparent_crc(g_124[i].f3, "g_124[i].f3", print_hash_value);
        transparent_crc(g_124[i].f4, "g_124[i].f4", print_hash_value);
        transparent_crc(g_124[i].f5, "g_124[i].f5", print_hash_value);
        transparent_crc(g_124[i].f6, "g_124[i].f6", print_hash_value);

    }
    transparent_crc(g_155, "g_155", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_156[i][j][k], "g_156[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_259.f0, "g_259.f0", print_hash_value);
    transparent_crc(g_259.f1, "g_259.f1", print_hash_value);
    transparent_crc(g_259.f2, "g_259.f2", print_hash_value);
    transparent_crc(g_259.f3, "g_259.f3", print_hash_value);
    transparent_crc(g_259.f4, "g_259.f4", print_hash_value);
    transparent_crc(g_259.f5, "g_259.f5", print_hash_value);
    transparent_crc(g_259.f6, "g_259.f6", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_371[i][j], "g_371[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_433[i][j], "g_433[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_450[i], "g_450[i]", print_hash_value);

    }
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_579[i].f0.f0, "g_579[i].f0.f0", print_hash_value);
        transparent_crc(g_579[i].f0.f1, "g_579[i].f0.f1", print_hash_value);
        transparent_crc(g_579[i].f0.f2, "g_579[i].f0.f2", print_hash_value);
        transparent_crc(g_579[i].f0.f3, "g_579[i].f0.f3", print_hash_value);
        transparent_crc(g_579[i].f0.f4, "g_579[i].f0.f4", print_hash_value);
        transparent_crc(g_579[i].f0.f5, "g_579[i].f0.f5", print_hash_value);
        transparent_crc(g_579[i].f0.f6, "g_579[i].f0.f6", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_645[i][j][k].f0.f0, "g_645[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_645[i][j][k].f0.f1, "g_645[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_645[i][j][k].f0.f2, "g_645[i][j][k].f0.f2", print_hash_value);
                transparent_crc(g_645[i][j][k].f0.f3, "g_645[i][j][k].f0.f3", print_hash_value);
                transparent_crc(g_645[i][j][k].f0.f4, "g_645[i][j][k].f0.f4", print_hash_value);
                transparent_crc(g_645[i][j][k].f0.f5, "g_645[i][j][k].f0.f5", print_hash_value);
                transparent_crc(g_645[i][j][k].f0.f6, "g_645[i][j][k].f0.f6", print_hash_value);

            }
        }
    }
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_833[i][j][k], "g_833[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_873, "g_873", print_hash_value);
    transparent_crc(g_1183, "g_1183", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1237[i], "g_1237[i]", print_hash_value);

    }
    transparent_crc(g_1300, "g_1300", print_hash_value);
    transparent_crc(g_1340, "g_1340", print_hash_value);
    transparent_crc(g_1369, "g_1369", print_hash_value);
    transparent_crc(g_1381, "g_1381", print_hash_value);
    transparent_crc(g_1598.f0.f0, "g_1598.f0.f0", print_hash_value);
    transparent_crc(g_1598.f0.f1, "g_1598.f0.f1", print_hash_value);
    transparent_crc(g_1598.f0.f2, "g_1598.f0.f2", print_hash_value);
    transparent_crc(g_1598.f0.f3, "g_1598.f0.f3", print_hash_value);
    transparent_crc(g_1598.f0.f4, "g_1598.f0.f4", print_hash_value);
    transparent_crc(g_1598.f0.f5, "g_1598.f0.f5", print_hash_value);
    transparent_crc(g_1598.f0.f6, "g_1598.f0.f6", print_hash_value);
    transparent_crc(g_1633.f0.f0, "g_1633.f0.f0", print_hash_value);
    transparent_crc(g_1633.f0.f1, "g_1633.f0.f1", print_hash_value);
    transparent_crc(g_1633.f0.f2, "g_1633.f0.f2", print_hash_value);
    transparent_crc(g_1633.f0.f3, "g_1633.f0.f3", print_hash_value);
    transparent_crc(g_1633.f0.f4, "g_1633.f0.f4", print_hash_value);
    transparent_crc(g_1633.f0.f5, "g_1633.f0.f5", print_hash_value);
    transparent_crc(g_1633.f0.f6, "g_1633.f0.f6", print_hash_value);
    transparent_crc(g_1689.f0, "g_1689.f0", print_hash_value);
    transparent_crc(g_1689.f1, "g_1689.f1", print_hash_value);
    transparent_crc(g_1689.f2, "g_1689.f2", print_hash_value);
    transparent_crc(g_1689.f3, "g_1689.f3", print_hash_value);
    transparent_crc(g_1689.f4, "g_1689.f4", print_hash_value);
    transparent_crc(g_1689.f5, "g_1689.f5", print_hash_value);
    transparent_crc(g_1689.f6, "g_1689.f6", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1696[i][j][k], "g_1696[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1976[i][j], "g_1976[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2115, "g_2115", print_hash_value);
    transparent_crc(g_2301.f0, "g_2301.f0", print_hash_value);
    transparent_crc(g_2301.f1, "g_2301.f1", print_hash_value);
    transparent_crc(g_2301.f2, "g_2301.f2", print_hash_value);
    transparent_crc(g_2301.f3, "g_2301.f3", print_hash_value);
    transparent_crc(g_2301.f4, "g_2301.f4", print_hash_value);
    transparent_crc(g_2301.f5, "g_2301.f5", print_hash_value);
    transparent_crc(g_2301.f6, "g_2301.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2445[i][j], "g_2445[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2446, "g_2446", print_hash_value);
    transparent_crc(g_2488, "g_2488", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2542[i][j], "g_2542[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2600, "g_2600", print_hash_value);
    transparent_crc(g_2601, "g_2601", print_hash_value);
    transparent_crc(g_2637, "g_2637", print_hash_value);
    transparent_crc(g_2769, "g_2769", print_hash_value);
    transparent_crc(g_2818, "g_2818", print_hash_value);
    transparent_crc(g_2981, "g_2981", print_hash_value);
    transparent_crc(g_3015, "g_3015", print_hash_value);
    transparent_crc(g_3036, "g_3036", print_hash_value);
    transparent_crc(g_3167.f0.f0, "g_3167.f0.f0", print_hash_value);
    transparent_crc(g_3167.f0.f1, "g_3167.f0.f1", print_hash_value);
    transparent_crc(g_3167.f0.f2, "g_3167.f0.f2", print_hash_value);
    transparent_crc(g_3167.f0.f3, "g_3167.f0.f3", print_hash_value);
    transparent_crc(g_3167.f0.f4, "g_3167.f0.f4", print_hash_value);
    transparent_crc(g_3167.f0.f5, "g_3167.f0.f5", print_hash_value);
    transparent_crc(g_3167.f0.f6, "g_3167.f0.f6", print_hash_value);
    transparent_crc(g_3233.f0.f0, "g_3233.f0.f0", print_hash_value);
    transparent_crc(g_3233.f0.f1, "g_3233.f0.f1", print_hash_value);
    transparent_crc(g_3233.f0.f2, "g_3233.f0.f2", print_hash_value);
    transparent_crc(g_3233.f0.f3, "g_3233.f0.f3", print_hash_value);
    transparent_crc(g_3233.f0.f4, "g_3233.f0.f4", print_hash_value);
    transparent_crc(g_3233.f0.f5, "g_3233.f0.f5", print_hash_value);
    transparent_crc(g_3233.f0.f6, "g_3233.f0.f6", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
