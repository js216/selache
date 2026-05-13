// SPDX-License-Identifier: MIT
// cctest_csmith_b654fd72.c --- cctest case csmith_b654fd72 (csmith seed 3059023218)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcd7e7216 */

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

// Options:   -s 3059023218 -o /tmp/csmith_gen_lf32bam6/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   int32_t  f1;
   uint16_t  f2;
   uint8_t  f3;
};

union U1 {
   uint32_t  f0;
   int8_t  f1;
   int8_t  f2;
};


static int32_t g_2 = 0xD05BA772L;
static int16_t g_5[1][1] = {{0x5995L}};
static int8_t g_12 = 0x13L;
static uint64_t g_27 = 0UL;
static int16_t g_35 = 0xC244L;
static uint8_t g_73 = 0x59L;
static uint8_t g_76 = 254UL;
static uint8_t g_79 = 0x5EL;
static uint32_t g_111[3][4][3] = {{{0x5F895E34L,18446744073709551613UL,0x5F895E34L},{0x60341E9FL,0x5DA103C1L,0x5DA103C1L},{6UL,18446744073709551613UL,0x225C753BL},{1UL,0x60341E9FL,0x5DA103C1L}},{{0x5F895E34L,0UL,0x5F895E34L},{1UL,0x5DA103C1L,0UL},{6UL,0UL,0x225C753BL},{0x60341E9FL,0x60341E9FL,0UL}},{{0x5F895E34L,18446744073709551613UL,0x5F895E34L},{0x60341E9FL,0x5DA103C1L,0x5DA103C1L},{6UL,18446744073709551613UL,0x225C753BL},{1UL,0x60341E9FL,0x5DA103C1L}}};
static uint32_t g_129 = 1UL;
static int8_t g_133 = 5L;
static struct S0 g_135 = {4L,-1L,0x62EDL,0x00L};
static int16_t g_150 = 0xE3CAL;
static uint32_t g_172 = 1UL;



static uint32_t  func_1(void);
static int64_t  func_6(const int64_t  p_7, uint16_t  p_8);
static uint16_t  func_13(uint64_t  p_14);
static uint8_t  func_22(int32_t  p_23, int8_t  p_24, int8_t  p_25);




static uint32_t  func_1(void)
{ 
    int32_t l_153[4];
    int32_t l_174 = 0L;
    int i;
    for (i = 0; i < 4; i++)
        l_153[i] = 0xE4559E29L;
    for (g_2 = 6; (g_2 <= (-18)); g_2 = safe_sub_func_int8_t_s_s(g_2, 3))
    { 
        int16_t l_9 = 0xE677L;
        int32_t l_173 = (-2L);
        if (((g_5[0][0] = g_2) <= func_6(g_2, l_9)))
        { 
            g_135 = g_135;
        }
        else
        { 
            uint64_t l_143 = 0x3B5982017E6F66A9LL;
            int32_t l_171 = 0L;
            for (l_9 = (-29); (l_9 > (-15)); l_9++)
            { 
                g_135 = g_135;
                g_150 &= (safe_lshift_func_uint8_t_u_u((((~(safe_add_func_int64_t_s_s(l_143, ((safe_lshift_func_int16_t_s_s(1L, 5)) >= ((((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(l_143, (g_35 = (-1L)))) == g_135.f1), g_73)) < g_129) , 0xA0L) & g_79))))) , g_76) , 0xCAL), 0));
                g_135.f1 = (((g_76 , (safe_add_func_uint32_t_u_u((l_9 >= l_9), (((l_153[0] != 1UL) | 1UL) == g_129)))) , l_153[0]) | l_9);
            }
            l_174 ^= ((l_173 |= ((((safe_rshift_func_int16_t_s_s(((safe_add_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(((((((((g_135.f2 = (safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(0x2707FB85L, (safe_lshift_func_uint16_t_u_s((!l_143), 8)))), (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((0xF212B29AL > g_2) == 0xCE6E223669DCB871LL) <= 0x5659L), l_171)), g_76))))) <= l_153[2]) || g_5[0][0]) && 0x53L) <= l_153[0]) || 0xC2B3F84DL) != g_172) | g_5[0][0]), g_129)), l_153[0])) > g_135.f0), 13)) && g_35) < l_153[0]) ^ g_133)) <= 0L);
            g_135.f1 = 0xD1280F08L;
        }
    }
    g_135.f1 = 0x8F8F40BAL;
    return l_153[0];
}



static int64_t  func_6(const int64_t  p_7, uint16_t  p_8)
{ 
    struct S0 l_26 = {-8L,0L,0x593CL,0x69L};
    int32_t l_80 = 0L;
    int64_t l_134 = (-9L);
    for (p_8 = 0; (p_8 != 39); p_8++)
    { 
        g_12 = p_7;
    }
    l_26.f1 = ((func_13((safe_mul_func_int16_t_s_s(p_7, ((g_79 |= (safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((!func_22((l_26 , l_26.f2), g_2, p_8)), 0)) < 0x0FL) <= 0L), l_26.f1))) | l_80)))) && 0xDEA1L) , 1L);
    return l_134;
}



static uint16_t  func_13(uint64_t  p_14)
{ 
    uint32_t l_93 = 0x16154EA9L;
    int32_t l_100 = 0xD2EC9464L;
    union U1 l_124 = {18446744073709551615UL};
    uint64_t l_130[4][4] = {{0x89EC31A1128F678ELL,0x89EC31A1128F678ELL,0x57287C4FD0C6BF6CLL,0x89EC31A1128F678ELL},{0x89EC31A1128F678ELL,0UL,0UL,0x89EC31A1128F678ELL},{0UL,0UL,0x57287C4FD0C6BF6CLL,0x57287C4FD0C6BF6CLL},{0UL,0UL,0x89EC31A1128F678ELL,0UL}};
    uint64_t l_132 = 0xCF24B42E23460C9FLL;
    int i, j;
    for (g_76 = 9; (g_76 < 17); ++g_76)
    { 
        int32_t l_94[1][1][1];
        uint32_t l_95[2];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_94[i][j][k] = 0xCE3A63A6L;
            }
        }
        for (i = 0; i < 2; i++)
            l_95[i] = 4294967295UL;
        if (((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((g_79 , (safe_lshift_func_int8_t_s_u(((((+((((safe_sub_func_int8_t_s_s(((!(((g_12 ^ ((p_14 < 0x1AL) | p_14)) != l_93) >= g_12)) < g_73), p_14)) , p_14) | 0x40L) <= g_35)) ^ l_93) , 65534UL) ^ l_94[0][0][0]), g_73))) > 0x6BL), l_95[1])), 0L)) || l_95[1]))
        { 
            uint64_t l_109[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_109[i][j] = 1UL;
            }
            for (g_73 = (-7); (g_73 < 56); g_73 = safe_add_func_int32_t_s_s(g_73, 6))
            { 
                const int64_t l_110 = 0x55C58EAAB991CC17LL;
                g_111[0][3][1] = (safe_mod_func_uint32_t_u_u((l_100 = 0x7D3265E0L), (safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s((g_79 ^ (safe_div_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(0UL, (((65532UL | l_109[0][0]) == l_95[1]) && 0xED53B0E2L))) ^ g_79), l_110))), g_27)), l_93))));
            }
        }
        else
        { 
            int32_t l_117 = 0xB4487636L;
            for (g_79 = 0; (g_79 != 52); g_79 = safe_add_func_uint8_t_u_u(g_79, 4))
            { 
                int32_t l_116 = (-9L);
                int32_t l_131 = 6L;
                l_117 = ((safe_div_func_int32_t_s_s(0xE7C9D89BL, (l_94[0][0][0] |= (l_100 > (0xE94FA078023CB4EFLL != l_116))))) < l_93);
                l_116 = p_14;
                g_133 ^= (0x6640L & (safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(((g_76 >= (safe_sub_func_int32_t_s_s((l_131 &= (((l_124 , ((safe_div_func_uint16_t_u_u((g_129 = (safe_mod_func_int16_t_s_s((((l_100 || p_14) ^ p_14) <= l_100), (-7L)))), l_130[2][2])) > l_116)) , g_79) , 0x5847FBB0L)), g_27))) <= l_132), 0x61L)), 1)));
            }
        }
    }
    l_100 = l_124.f0;
    return g_12;
}



static uint8_t  func_22(int32_t  p_23, int8_t  p_24, int8_t  p_25)
{ 
    int32_t l_49 = 9L;
    int32_t l_50[3][4];
    int32_t l_74 = 0x815F77FBL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_50[i][j] = 0x5392FB38L;
    }
    g_27 = g_12;
    for (p_25 = 0; (p_25 > (-22)); --p_25)
    { 
        uint32_t l_34 = 4294967295UL;
        uint16_t l_72 = 0UL;
        if (((safe_div_func_int32_t_s_s(g_2, (2L ^ 0x1F06E85FL))) , (g_35 = (((safe_sub_func_int64_t_s_s(l_34, 5UL)) || l_34) , 0xA9843657L))))
        { 
            int8_t l_48 = 1L;
            uint64_t l_51 = 5UL;
            int16_t l_71[5][4][4] = {{{(-9L),5L,(-2L),(-2L)},{(-9L),(-9L),0x8097L,0xF91AL},{1L,(-2L),(-9L),0xEFD0L},{5L,1L,(-2L),(-9L)}},{{0xDB45L,1L,0xDB45L,0xEFD0L},{1L,(-2L),0x68ACL,0xF91AL},{0xF91AL,(-9L),5L,(-2L)},{(-1L),5L,5L,(-1L)}},{{0xF91AL,0xEFD0L,0x68ACL,0xDB45L},{1L,0x4FD0L,0xDB45L,0x8097L},{0xDB45L,0x8097L,(-2L),0x8097L},{5L,0x4FD0L,(-9L),0xDB45L}},{{1L,0xEFD0L,0x8097L,(-1L)},{(-9L),5L,(-2L),(-2L)},{(-9L),(-9L),0x8097L,0xF91AL},{1L,(-2L),(-9L),0xEFD0L}},{{5L,1L,(-2L),(-9L)},{0xDB45L,1L,0xDB45L,0xEFD0L},{1L,(-2L),0x68ACL,0xF91AL},{0xF91AL,(-9L),5L,(-2L)}}};
            int i, j, k;
            if ((safe_add_func_uint8_t_u_u((((g_2 & ((l_50[2][2] = (safe_mul_func_int16_t_s_s(((l_49 &= ((safe_div_func_int64_t_s_s((p_24 , (g_27 & ((safe_div_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(g_35, g_27)), 5)) < p_24) ^ g_35) && l_48), g_27)) != 1L))), 0xC46158E9D28BC130LL)) >= 0xA65CL)) < g_27), g_35))) <= l_51)) & p_25) > g_12), l_34)))
            { 
                uint16_t l_69 = 0x216DL;
                int32_t l_70 = 0xC63F78CAL;
                l_71[4][2][1] = ((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(0xA5L, 3)) > (((g_27 = (l_70 = ((safe_sub_func_int16_t_s_s((l_49 = (-3L)), (l_50[2][3] = (l_50[1][2] == ((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_u(((-1L) | p_25), l_69)))), 2)), 0xF9103153L)) & p_25))))) != p_24))) | 0x51D4F00D13BCE866LL) , 0x41E22699L)), p_25)), 6)) > g_2), l_34)) < g_35);
                if (l_51)
                    break;
            }
            else
            { 
                p_23 = p_23;
                l_72 |= (p_23 = p_24);
                g_73 ^= g_27;
            }
            for (l_48 = 2; (l_48 >= 0); l_48 -= 1)
            { 
                int i, j;
                p_23 ^= 0x86D9E1B0L;
                return l_50[l_48][l_48];
            }
        }
        else
        { 
            uint32_t l_75 = 4294967295UL;
            p_23 = (l_74 > (l_75 == g_2));
            if (p_25)
                break;
        }
    }
    g_76++;
    return g_27;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_111[i][j][k], "g_111[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_135.f0, "g_135.f0", print_hash_value);
    transparent_crc(g_135.f1, "g_135.f1", print_hash_value);
    transparent_crc(g_135.f2, "g_135.f2", print_hash_value);
    transparent_crc(g_135.f3, "g_135.f3", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
