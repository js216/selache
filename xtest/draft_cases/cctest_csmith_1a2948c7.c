// SPDX-License-Identifier: MIT
// cctest_csmith_1a2948c7.c --- cctest case csmith_1a2948c7 (csmith seed 438913223)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7031c395 */

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

// Options:   -s 438913223 -o /tmp/csmith_gen_vio1snns/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   unsigned f0 : 2;
   int16_t  f1;
   uint64_t  f2;
   uint64_t  f3;
   uint16_t  f4;
};

union U1 {
   int16_t  f0;
};


static uint16_t g_8 = 0xB8BCL;
static uint16_t g_9 = 0x09D4L;
static uint32_t g_10 = 0xC2A82A10L;
static int8_t g_14 = 0x38L;
static int16_t g_18 = 0xBE54L;
static int32_t g_51 = 0L;
static int32_t g_52[5][2] = {{0x851CC0D6L,0x851CC0D6L},{0x851CC0D6L,0x851CC0D6L},{0x851CC0D6L,0x851CC0D6L},{0x851CC0D6L,0x851CC0D6L},{0x851CC0D6L,0x851CC0D6L}};
static struct S0 g_83 = {0,0x1C17L,1UL,0x57CFBC2A5DE23EDELL,65535UL};
static int32_t g_169 = (-1L);
static struct S0 g_256 = {1,0xD7B7L,6UL,18446744073709551609UL,0x68B0L};
static union U1 g_282[2] = {{0xB50AL},{0xB50AL}};
static int16_t g_288 = (-1L);
static int8_t g_296 = 0x4AL;
static int64_t g_320 = 0L;
static uint32_t g_323 = 7UL;
static int16_t g_362 = 0xF674L;
static int32_t g_376 = 0x2CE5E1F7L;
static uint8_t g_410 = 252UL;



static int32_t  func_1(void);
static const int32_t  func_2(uint64_t  p_3, uint8_t  p_4, union U1  p_5, uint16_t  p_6, union U1  p_7);
static union U1  func_11(uint32_t  p_12);
static uint64_t  func_22(int32_t  p_23, uint32_t  p_24, uint32_t  p_25, uint8_t  p_26);




static int32_t  func_1(void)
{ 
    uint32_t l_13 = 0xDE6BC044L;
    union U1 l_16 = {-1L};
    int32_t l_50 = 8L;
    int32_t l_295[1];
    int32_t l_298 = 0x555EB81EL;
    int8_t l_334[1];
    int32_t l_335 = 0xED8E15CFL;
    int8_t l_380 = 0x09L;
    uint32_t l_385 = 0x94F274C3L;
    int64_t l_393 = 0x1FEB0CD92A080172LL;
    int32_t l_400 = (-5L);
    int32_t l_437[1][5] = {{0x6EED4D99L,0x6EED4D99L,0x6EED4D99L,0x6EED4D99L,0x6EED4D99L}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_295[i] = 0xF0072125L;
    for (i = 0; i < 1; i++)
        l_334[i] = 2L;
    if (func_2(g_8, (g_10 = (0x934215E1L < g_9)), func_11((l_13 = ((g_9 , 4UL) , g_9))), g_9, l_16))
    { 
        return g_14;
    }
    else
    { 
        uint16_t l_17 = 1UL;
        int32_t l_48[5][5][1] = {{{0L},{0xE4944C1AL},{0L},{0xE4944C1AL},{0L}},{{0xE4944C1AL},{0L},{0xE4944C1AL},{0L},{0xE4944C1AL}},{{0L},{0xE4944C1AL},{0L},{0xE4944C1AL},{0L}},{{0xE4944C1AL},{0L},{0xE4944C1AL},{0L},{0xE4944C1AL}},{{0L},{0xE4944C1AL},{0L},{0xE4944C1AL},{0L}}};
        uint8_t l_49[3];
        int32_t l_53 = 0xE3BADF38L;
        int16_t l_290 = 0x4687L;
        struct S0 l_314 = {0,-9L,0x0B567D36AB61836BLL,1UL,0xA867L};
        int8_t l_319[1];
        uint8_t l_361 = 0x3BL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_49[i] = 5UL;
        for (i = 0; i < 1; i++)
            l_319[i] = 5L;
        if (l_17)
        { 
            uint8_t l_19 = 0xBEL;
            --l_19;
        }
        else
        { 
            int32_t l_47 = 4L;
            uint64_t l_54 = 0xE45221BA827CF573LL;
            union U1 l_283 = {0x54D6L};
            int32_t l_300 = 0x9304D937L;
            struct S0 l_315[5][4][3] = {{{{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{0,0x4060L,0xD0DC36EFE24D9FB8LL,0x8D98F09860C6D7AFLL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L}},{{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}}},{{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}}},{{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}}},{{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}}},{{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}},{{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL},{1,0x1FB6L,18446744073709551615UL,0x5BC26F1CBDC33E2BLL,0x75F2L},{1,0xD48FL,0UL,0x07EFA30DC9C6B8B8LL,65535UL}}}};
            int32_t l_322 = 0xA2BD4858L;
            int i, j, k;
            if ((((func_2(func_22(((safe_mod_func_int32_t_s_s(l_17, (safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(g_14, 2)) | (l_53 = (g_52[4][0] = ((((g_51 = (((safe_div_func_int16_t_s_s((l_49[0] = (g_9 > (safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_s((l_48[3][1][0] &= ((safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u(0UL, l_47)), g_9)) <= (-7L))), g_14)) > g_14) != l_16.f0) & g_10), g_14)), (-10L))))), 0x1DB4L)) ^ l_50) ^ 0x48FFL)) < 0x91L) || l_17) | l_17)))), g_14)) > g_8), l_54)))) <= g_18), g_9, l_17, g_8), l_17, g_282[1], l_47, l_283) && g_52[0][0]) | l_17) >= 0xA8L))
            { 
                uint32_t l_289 = 18446744073709551610UL;
                int32_t l_297 = (-1L);
                int32_t l_299[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_299[i] = 7L;
                l_48[3][1][0] = ((g_256.f2 &= (safe_lshift_func_int8_t_s_u((g_14 ^= (((((l_48[3][1][0] | ((((safe_add_func_uint32_t_u_u(l_283.f0, g_288)) ^ l_289) , l_48[2][4][0]) > l_48[0][2][0])) , 1L) ^ l_48[3][1][0]) , (-1L)) , l_290)), g_83.f3))) , 0x55336F35L);
                l_300 = ((l_53 || (((safe_add_func_int64_t_s_s(g_256.f0, (l_298 = (safe_add_func_int8_t_s_s((l_297 = (0xE7L & (((((g_296 = (((l_295[0] = ((l_289 | l_48[3][1][0]) && l_54)) , l_49[2]) , g_288)) , g_296) || 0x2C2FB352L) | 1UL) & g_256.f2))), g_256.f3))))) < 1UL) & l_299[0])) && g_52[4][0]);
            }
            else
            { 
                l_300 ^= ((g_51 ^= (safe_mod_func_int8_t_s_s((((((safe_sub_func_int16_t_s_s(l_13, ((g_288 < ((safe_mod_func_int32_t_s_s(l_47, (safe_rshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_u((~(safe_div_func_int32_t_s_s(0x37EEBF2CL, g_282[1].f0))), 6)) , g_288) == l_50), g_256.f1)))) >= 0x3171566FL)) != g_52[0][0]))) || (-4L)) < l_290) == g_83.f4) , g_256.f3), g_10))) & l_49[1]);
                l_315[1][3][2] = (g_256 = l_314);
            }
            l_315[1][2][1] = g_256;
            if ((l_315[1][3][2].f1 >= l_50))
            { 
                uint32_t l_316 = 1UL;
                int32_t l_321 = 1L;
                --l_316;
                g_323--;
                l_48[1][0][0] &= (safe_mul_func_uint16_t_u_u((((g_256.f3 = (((7L & ((safe_rshift_func_int8_t_s_u((g_14 = l_17), (safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(g_288, l_49[0])), l_16.f0)))) , l_334[0])) & g_282[1].f0) , 0UL)) & l_335) | g_18), l_315[1][3][2].f4));
            }
            else
            { 
                int64_t l_338[5] = {(-8L),(-8L),(-8L),(-8L),(-8L)};
                int i;
                g_52[4][0] ^= ((safe_div_func_uint32_t_u_u(4294967289UL, g_296)) , (0UL <= (((((g_9 || g_288) | g_169) < l_338[3]) ^ 1L) ^ g_83.f2)));
                g_52[3][1] = (0UL >= ((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_338[4], 3)), (safe_sub_func_uint64_t_u_u(((g_51 &= 0xC71C74B5L) == (safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((g_282[1] , g_10) & g_9), 1L)), 0x6C34DD9D578ADA6ELL)), l_50)), 11))), l_338[3])))) <= 9L) , 0x0DF12352L) && (-2L)));
                g_52[4][0] &= ((safe_lshift_func_int8_t_s_s(((l_300 = (((safe_div_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((l_361 <= g_256.f4) != (g_362 &= l_338[3])) > 0xAA0B9C9FL), g_83.f1)), 0x91A6L)) , l_338[1]) == 18446744073709551607UL), g_83.f3)) < 0xB6EA32EE7F85FFCDLL) | g_83.f3)) < (-1L)), g_83.f4)) ^ 18446744073709551615UL);
            }
        }
        l_295[0] = 0x6C51E9E2L;
    }
    for (g_18 = 0; (g_18 >= 0); g_18 -= 1)
    { 
        const uint32_t l_371 = 18446744073709551615UL;
        int32_t l_374 = (-1L);
        int32_t l_375[5][2][1] = {{{(-1L)},{0x8C71D38BL}},{{(-1L)},{0x8C71D38BL}},{{(-1L)},{0x8C71D38BL}},{{(-1L)},{0x8C71D38BL}},{{(-1L)},{0x8C71D38BL}}};
        int64_t l_377 = 0x19F4D276EC1538E9LL;
        uint32_t l_405 = 0UL;
        int i, j, k;
        for (l_335 = 0; (l_335 >= 0); l_335 -= 1)
        { 
            int16_t l_372[3];
            int32_t l_373[2][2];
            int i, j;
            for (i = 0; i < 3; i++)
                l_372[i] = 0L;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_373[i][j] = 0x6727570FL;
            }
            if (l_334[l_335])
            { 
                uint32_t l_366 = 0x9C55F93EL;
                int32_t l_378 = 0x5D431777L;
                int32_t l_379 = 0xC301AE0DL;
                int8_t l_381 = (-1L);
                int32_t l_382 = 0xE762CC42L;
                int32_t l_383 = 0x76934D01L;
                int32_t l_384[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_384[i] = 0xAF312F35L;
                g_51 = (l_295[g_18] == ((g_52[4][0] = g_256.f2) != ((safe_div_func_int64_t_s_s((g_320 = (((+(l_366--)) | (safe_mul_func_int8_t_s_s(g_83.f1, ((l_371 | g_320) , g_362)))) , g_8)), (-3L))) != g_83.f4)));
                l_385--;
            }
            else
            { 
                const int32_t l_392 = 0L;
                int16_t l_394 = 0x5675L;
                g_83 = g_256;
                g_52[1][1] |= ((((((g_256.f4 | (l_373[0][0] < (g_288 ^ (((func_11((safe_add_func_int32_t_s_s((l_377 ^ (-9L)), 0xEEA2B257L))) , l_334[0]) , g_362) | g_256.f0)))) || g_10) != l_392) | g_288) ^ l_393) & l_394);
            }
        }
        if ((safe_mod_func_int16_t_s_s(l_371, ((safe_mod_func_uint16_t_u_u(65527UL, (+(l_295[0] , g_83.f4)))) | l_400))))
        { 
            int32_t l_427 = 0L;
            int32_t l_436[4] = {0L,0L,0L,0L};
            int i;
            l_405 &= ((l_295[0] | l_375[4][0][0]) && (safe_div_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s((l_400 , g_10), 10)) == (-1L)), l_374)));
            if ((g_362 <= ((safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((--g_410) == g_320), ((!(safe_rshift_func_int8_t_s_u((+(safe_mul_func_uint8_t_u_u(0x5DL, ((~((safe_div_func_uint8_t_u_u((g_8 > l_334[0]), 0x15L)) & g_51)) > 255UL)))), 6))) , g_52[4][0]))), 11)) & l_334[0])))
            { 
                int32_t l_434 = 0xCB05A659L;
                int32_t l_435 = 0x42CD6622L;
                l_436[0] = (((g_362 != (l_434 = (safe_unary_minus_func_uint16_t_u((safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((l_427 , ((safe_lshift_func_int8_t_s_u(0xEBL, 7)) & (safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(l_434, 5L)) && 0xB167A158CAF79BC6LL), 2)))), l_434)), g_18)))))) , 0x74773F13L) > l_435);
            }
            else
            { 
                l_374 ^= (l_437[0][4] = 0xA160AA44L);
                g_52[2][1] ^= g_14;
            }
        }
        else
        { 
            int16_t l_449[1];
            int32_t l_460 = 0x3A09A71BL;
            int i;
            for (i = 0; i < 1; i++)
                l_449[i] = 0x14BAL;
            l_375[4][0][0] = (!(((((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(0xE6D46F17L, (g_169 < l_377))) <= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x90L, g_8)), g_83.f3)), 6))), g_52[4][0])) , g_256.f2) < l_449[0]) || 0xA59FL) <= g_83.f3));
            l_298 |= (g_376 ^= ((func_11(g_14) , g_320) <= (safe_sub_func_int8_t_s_s((1L != 9L), g_169))));
            g_52[1][0] = ((safe_add_func_int64_t_s_s((((l_377 >= (safe_mod_func_int16_t_s_s(0xFFBDL, (l_460 = (g_282[1].f0 = ((g_83 , (safe_rshift_func_int8_t_s_u((((safe_sub_func_uint64_t_u_u(((((-1L) || l_377) != l_449[0]) && 0x16CD58F4E8CB3828LL), g_83.f3)) >= g_296) == g_18), l_375[4][0][0]))) | g_8)))))) || g_256.f3) <= g_410), g_362)) == 0x7DB6L);
        }
        for (l_298 = 0; (l_298 >= 0); l_298 -= 1)
        { 
            if (g_10)
                break;
            return l_374;
        }
    }
    return g_288;
}



static const int32_t  func_2(uint64_t  p_3, uint8_t  p_4, union U1  p_5, uint16_t  p_6, union U1  p_7)
{ 
    return g_14;
}



static union U1  func_11(uint32_t  p_12)
{ 
    union U1 l_15[3][1][1] = {{{{0L}}},{{{0L}}},{{{0L}}}};
    int i, j, k;
    g_14 &= p_12;
    return l_15[2][0][0];
}



static uint64_t  func_22(int32_t  p_23, uint32_t  p_24, uint32_t  p_25, uint8_t  p_26)
{ 
    uint8_t l_55 = 0x50L;
    int32_t l_56 = 0x0E4B4611L;
    int32_t l_70[3];
    struct S0 l_88 = {0,0x28A1L,0x95B12CA4FAC92380LL,0UL,0x4AB2L};
    uint16_t l_152 = 0x6A74L;
    uint32_t l_183[4];
    uint64_t l_230 = 18446744073709551609UL;
    uint64_t l_237 = 2UL;
    int64_t l_281 = (-4L);
    int i;
    for (i = 0; i < 3; i++)
        l_70[i] = (-6L);
    for (i = 0; i < 4; i++)
        l_183[i] = 1UL;
    if (l_55)
    { 
        int64_t l_63 = (-6L);
        int32_t l_77[1][1];
        uint32_t l_85 = 18446744073709551615UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_77[i][j] = 0xC9DABC5DL;
        }
        g_52[4][0] ^= 0xE0E3CEC3L;
        l_56 |= g_8;
        if ((((g_8 &= (g_9 = g_51)) == 0xE8E0L) || (safe_mod_func_uint32_t_u_u((p_24 = ((p_26 || ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(0xC2L, 3)) , p_25), 0xE93BL)) | g_51)) , 4294967288UL)), g_52[3][1]))))
        { 
            uint8_t l_64[1];
            int32_t l_69 = 0xA645CCAEL;
            int32_t l_72 = 0x115EA955L;
            int32_t l_73 = (-1L);
            int32_t l_74 = 0xF54F738DL;
            int32_t l_75 = (-9L);
            int32_t l_76 = 0x8A73D9AAL;
            int32_t l_78 = 0x18D362EAL;
            int i;
            for (i = 0; i < 1; i++)
                l_64[i] = 0x69L;
            l_64[0]--;
            for (g_9 = (-10); (g_9 > 25); g_9 = safe_add_func_int8_t_s_s(g_9, 2))
            { 
                int64_t l_71 = 0xDDFA37A4C6684E8DLL;
                uint8_t l_79 = 6UL;
                l_79--;
                if (l_56)
                    continue;
            }
        }
        else
        { 
            struct S0 l_82[2] = {{1,0x589AL,18446744073709551615UL,0UL,0x0F78L},{1,0x589AL,18446744073709551615UL,0UL,0x0F78L}};
            int32_t l_84[5] = {0x21CEB8ABL,0x21CEB8ABL,0x21CEB8ABL,0x21CEB8ABL,0x21CEB8ABL};
            int i;
            l_77[0][0] = (p_25 | l_77[0][0]);
            g_83 = l_82[0];
            --l_85;
        }
    }
    else
    { 
        int32_t l_99 = 9L;
        int32_t l_100[2];
        int i;
        for (i = 0; i < 2; i++)
            l_100[i] = 1L;
        g_83 = l_88;
        for (l_55 = (-12); (l_55 <= 44); l_55 = safe_add_func_int16_t_s_s(l_55, 9))
        { 
            l_100[1] &= (((((~g_83.f1) || (~(((((0x0075L == ((((safe_add_func_int32_t_s_s(((l_70[2] = ((safe_mod_func_uint64_t_u_u(((g_83.f1 = l_99) | (p_24 , 0UL)), 4UL)) && l_70[0])) >= 0xD8CC678F9D625AE4LL), p_24)) | p_25) <= 0xA164L) == p_25)) <= 0x558FL) > 0UL) ^ 0xA9L) , g_14))) >= g_83.f4) > l_88.f3) <= 4294967289UL);
            l_99 = p_23;
        }
    }
    if ((+(safe_div_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(0L, 0xE1E60B5F8E08A2E4LL)) & ((((safe_sub_func_int64_t_s_s((g_51 != ((safe_lshift_func_int8_t_s_s(0xDDL, 5)) < g_83.f2)), 0xCFEDF41299D89CF6LL)) , p_26) > 1UL) | g_51)), g_9))))
    { 
        uint16_t l_116 = 5UL;
        uint32_t l_134 = 0xC9496632L;
        uint16_t l_139 = 65527UL;
lbl_138:
        l_116 = (g_52[4][0] = ((((safe_sub_func_uint64_t_u_u(0xC95261AE0F1B3FF4LL, (safe_rshift_func_uint8_t_u_s(g_51, 6)))) | 0x870CA50A4B5A3478LL) , (safe_rshift_func_uint16_t_u_u((((((0x5299L & 5UL) ^ 4294967287UL) < p_25) <= g_9) >= p_24), p_26))) ^ g_83.f1));
        for (l_55 = 0; (l_55 >= 20); ++l_55)
        { 
            uint64_t l_120 = 0xAD6262BB9ADCDD51LL;
            int32_t l_126 = 0L;
            if (((((l_120 = (!4294967291UL)) >= ((safe_lshift_func_int16_t_s_s((0xF4L >= ((~((((l_126 = 0x282FL) || (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0xFC39L, l_56)), (-1L)))) > 0x9B48L) , (-3L))) == g_14)), 8)) & l_116)) && 255UL) & g_83.f1))
            { 
                uint64_t l_136 = 18446744073709551614UL;
                int32_t l_137 = (-1L);
                l_137 |= (safe_sub_func_uint32_t_u_u((~p_25), ((((l_134 & ((+(l_136 = (g_83.f1 = p_24))) == p_23)) || 0xDBL) , l_88.f4) , g_9)));
                l_70[0] = (-1L);
                if (p_25)
                    goto lbl_138;
            }
            else
            { 
                uint8_t l_141 = 0x03L;
                l_70[0] = (-1L);
                if (l_139)
                    break;
                g_52[4][0] = (~(l_141 = 0x44L));
            }
            return l_88.f0;
        }
    }
    else
    { 
        uint32_t l_148 = 0x61586090L;
        int32_t l_149 = 3L;
        int32_t l_150 = 0L;
        int32_t l_151[2][4] = {{1L,0x0BC88D7AL,1L,0x0BC88D7AL},{1L,0x0BC88D7AL,1L,0x0BC88D7AL}};
        int i, j;
        l_148 = (safe_add_func_uint16_t_u_u(0xB7CBL, ((safe_lshift_func_int8_t_s_s(g_52[4][1], (safe_mul_func_int8_t_s_s(p_26, (l_56 = l_88.f4))))) ^ 0UL)));
        --l_152;
    }
    if (((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(g_10, 0x65D02E7AF9F913A6LL)), (0x5BD8C451L & (((((p_24 = ((((p_25 && 0xB3DB3306L) || g_51) | p_26) >= 1L)) > l_88.f2) >= p_25) , l_88.f2) && l_88.f4)))), g_18)) < 4L))
    { 
        uint8_t l_168[3];
        union U1 l_184 = {0x41AAL};
        int i;
        for (i = 0; i < 3; i++)
            l_168[i] = 0xEBL;
        for (g_83.f2 = 0; (g_83.f2 <= 1); g_83.f2 += 1)
        { 
            int32_t l_167 = 0x3D4E83F1L;
            int32_t l_188 = 0x3AAB27D9L;
            int i;
            g_52[3][0] = ((l_70[0] = (l_56 = (safe_rshift_func_uint16_t_u_u(((g_169 &= (safe_mul_func_uint32_t_u_u((0x7DE8CF94L >= l_70[(g_83.f2 + 1)]), ((l_168[1] = (safe_lshift_func_int16_t_s_s(((l_167 ^= (g_10 == (p_25 | 0xCAL))) , l_88.f3), p_24))) == l_70[(g_83.f2 + 1)])))) >= l_70[(g_83.f2 + 1)]), 13)))) , l_168[0]);
            l_70[0] = (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((0x0683A552D6EEAA0BLL & (((((safe_div_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int64_t_s((safe_add_func_uint32_t_u_u((l_168[2] != (g_9 = ((safe_rshift_func_uint16_t_u_u((p_24 | (((0x42DA0BF8092AB72FLL >= g_83.f3) > p_26) >= 0xF9E2L)), 9)) < 0x3C7B2EA050EF736ELL))), l_88.f0)))), g_83.f0)) | 7UL), 0xE17B3754L)) | p_26) > l_183[1]) , l_184) , 18446744073709551609UL)) & 18446744073709551611UL), p_25)), p_23));
            for (g_10 = 0; (g_10 <= 1); g_10 += 1)
            { 
                struct S0 l_185 = {1,0xA9B9L,0UL,18446744073709551609UL,0UL};
                int i, j;
                l_88 = l_185;
                g_52[(g_10 + 3)][g_83.f2] = (safe_div_func_int32_t_s_s(g_52[g_10][g_83.f2], g_52[(g_83.f2 + 2)][g_10]));
                l_188 |= p_24;
            }
        }
    }
    else
    { 
        uint8_t l_209 = 0x3AL;
        int32_t l_232[3][5][5] = {{{3L,(-1L),3L,(-1L),3L},{0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L},{3L,(-1L),3L,(-1L),3L},{0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L},{3L,(-1L),3L,(-1L),3L}},{{0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L},{3L,(-1L),3L,(-1L),3L},{0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L},{3L,(-1L),3L,(-1L),3L},{0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L}},{{3L,(-1L),3L,(-1L),3L},{0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L},{3L,(-1L),3L,(-1L),3L},{0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L,0x5311EAF5L},{3L,(-1L),3L,(-1L),3L}}};
        struct S0 l_255 = {1,1L,0x825B948CDD1C907DLL,0xE9F13E21F936FB5ALL,1UL};
        int32_t l_279 = 0xE1DFFD33L;
        uint32_t l_280[2][1][1];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_280[i][j][k] = 1UL;
            }
        }
        if (l_56)
        { 
            int8_t l_191 = 0xFBL;
            int32_t l_200[2][5] = {{0x2B1258CBL,0x2B1258CBL,0x2B1258CBL,0x2B1258CBL,0x2B1258CBL},{0x71E2FDBFL,0x71E2FDBFL,0x71E2FDBFL,0x71E2FDBFL,0x71E2FDBFL}};
            int i, j;
            if ((safe_mul_func_int16_t_s_s((l_191 = p_26), (safe_rshift_func_int16_t_s_s((l_200[0][1] = (((safe_div_func_int8_t_s_s((p_24 , ((((safe_div_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_u(((l_200[0][1] || ((((safe_lshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((p_24++), 1UL)), 0x6195176AL)) > 65530UL), p_25)) , l_200[0][1]) != l_200[0][1]) || g_9)) && l_200[1][0]), g_52[0][0])) ^ 0L) , l_183[1]), l_88.f2)) ^ 0UL) < g_169) == 0x850F382EL)), 0x8AL)) ^ 0xF1ECL) || 0L)), 14)))))
            { 
                g_52[4][0] = 0x409ACC91L;
                g_51 |= 0xAAD255A8L;
            }
            else
            { 
                int32_t l_231 = 0xCF5C8286L;
                int64_t l_233[3][2][2] = {{{0L,0L},{0L,0L}},{{0L,0L},{0L,0L}},{{0L,0L},{0L,0L}}};
                int32_t l_234 = 1L;
                int32_t l_235 = (-1L);
                int32_t l_236 = 8L;
                int i, j, k;
                l_209++;
                l_232[1][1][1] ^= ((safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((~(safe_mul_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((0xD12CL != (+(safe_add_func_uint32_t_u_u((func_11((((18446744073709551615UL != (safe_rshift_func_uint8_t_u_s(0xCFL, ((safe_div_func_uint32_t_u_u(l_230, 0xE5A97E3EL)) <= g_52[0][0])))) || l_209) <= l_231)) , g_18), 8L)))), 0x33F974B7L)), 0x82F8447B9DC6C3DCLL)) == g_52[3][0]), g_83.f4))), l_209)) || 0x80L), p_23)) , l_55);
                l_237++;
            }
        }
        else
        { 
            uint32_t l_244 = 0UL;
            struct S0 l_249 = {1,1L,0xAAFDF0422285EFD1LL,0xD321DFA9741CF09DLL,1UL};
            if ((safe_add_func_int16_t_s_s((g_8 <= (safe_add_func_uint64_t_u_u(l_244, ((!(!((safe_add_func_uint16_t_u_u(g_83.f2, 0x8938L)) == l_88.f2))) , g_83.f0)))), l_244)))
            { 
                l_249 = g_83;
            }
            else
            { 
                l_232[1][1][1] ^= l_249.f4;
                return l_55;
            }
        }
        for (g_83.f3 = 0; (g_83.f3 != 35); ++g_83.f3)
        { 
            uint16_t l_252[3];
            int i;
            for (i = 0; i < 3; i++)
                l_252[i] = 65528UL;
            g_52[2][1] = 0xCF6C5B2CL;
            --l_252[2];
            for (g_83.f1 = 3; (g_83.f1 >= 0); g_83.f1 -= 1)
            { 
                g_256 = l_255;
            }
        }
        g_51 &= ((safe_lshift_func_int8_t_s_u(0xDAL, (safe_mul_func_uint16_t_u_u(0x8DE5L, (((safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((g_18 = (safe_add_func_uint8_t_u_u(((!((safe_mod_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint16_t_u_s(65527UL, ((safe_mul_func_uint16_t_u_u(g_52[4][0], g_8)) ^ l_56))))), l_279)) | p_25) | p_25) , l_88.f2), l_255.f2)) & g_83.f0)) <= l_232[2][3][4]), p_26))), l_255.f0)), 0x4DL)) != (-1L)), (-8L))) && l_280[1][0][0]) && l_230))))) , l_281);
    }
    return p_24;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_52[i][j], "g_52[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_83.f3, "g_83.f3", print_hash_value);
    transparent_crc(g_83.f4, "g_83.f4", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_256.f0, "g_256.f0", print_hash_value);
    transparent_crc(g_256.f1, "g_256.f1", print_hash_value);
    transparent_crc(g_256.f2, "g_256.f2", print_hash_value);
    transparent_crc(g_256.f3, "g_256.f3", print_hash_value);
    transparent_crc(g_256.f4, "g_256.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_282[i].f0, "g_282[i].f0", print_hash_value);

    }
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
