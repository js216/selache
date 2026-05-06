// SPDX-License-Identifier: MIT
// cctest_csmith_38842b22.c --- cctest case csmith_38842b22 (csmith seed 948185890)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x88090718 */

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

// Options:   -s 948185890 -o /tmp/csmith_gen_xqrq2o9d/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   const uint8_t  f1;
   const uint8_t  f2;
   uint32_t  f3;
};

struct S1 {
   signed f0 : 16;
   signed f1 : 25;
   signed f2 : 1;
   signed f3 : 2;
   signed f4 : 24;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   int32_t  f0;
   unsigned f1 : 30;
   signed f2 : 24;
};
#pragma pack(pop)

struct S5 {
   unsigned f0 : 15;
   unsigned f1 : 3;
   signed f2 : 6;
   signed f3 : 24;
};

#pragma pack(push)
#pragma pack(1)
struct S6 {
   const unsigned f0 : 25;
   const uint32_t  f1;
   signed f2 : 10;
   unsigned f3 : 14;
   signed f4 : 19;
};
#pragma pack(pop)

union U8 {
   signed f0 : 7;
};


static struct S0 g_5 = {0UL,0x79L,255UL,4294967291UL};
static uint8_t g_15 = 255UL;
static struct S5 g_18 = {172,1,2,-1086};
static int64_t g_36 = 0x9DB5DF1D979388B3LL;
static int16_t g_52[1] = {0x5959L};
static uint8_t g_79 = 0xA3L;



static struct S5  func_1(void);
static int32_t  func_2(struct S0  p_3, int64_t  p_4);
static int64_t  func_6(int64_t  p_7, struct S6  p_8);
static uint32_t  func_10(uint64_t  p_11, int16_t  p_12, uint16_t  p_13);




static struct S5  func_1(void)
{ 
    uint32_t l_9 = 0xE60D743CL;
    struct S6 l_16[1] = {{3307,0UL,30,22,-355}};
    struct S0 l_82[2][5][4] = {{{{1UL,255UL,254UL,2UL},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{1UL,255UL,254UL,2UL}},{{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{1UL,255UL,254UL,2UL},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L}},{{1UL,255UL,254UL,2UL},{1UL,255UL,254UL,2UL},{0xF6E60FB7L,0xBEL,9UL,0x1D6BCCD0L},{1UL,255UL,254UL,2UL}},{{1UL,255UL,254UL,2UL},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{1UL,255UL,254UL,2UL}},{{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{1UL,255UL,254UL,2UL},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L}}},{{{1UL,255UL,254UL,2UL},{1UL,255UL,254UL,2UL},{0xF6E60FB7L,0xBEL,9UL,0x1D6BCCD0L},{1UL,255UL,254UL,2UL}},{{1UL,255UL,254UL,2UL},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{1UL,255UL,254UL,2UL}},{{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{1UL,255UL,254UL,2UL},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L}},{{1UL,255UL,254UL,2UL},{1UL,255UL,254UL,2UL},{0xF6E60FB7L,0xBEL,9UL,0x1D6BCCD0L},{1UL,255UL,254UL,2UL}},{{1UL,255UL,254UL,2UL},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{18446744073709551615UL,0x8AL,254UL,0xC6C282E8L},{1UL,255UL,254UL,2UL}}}};
    int32_t l_83 = 0x415013F2L;
    struct S5 l_86[5] = {{121,0,-0,-2848},{121,0,-0,-2848},{121,0,-0,-2848},{121,0,-0,-2848},{121,0,-0,-2848}};
    int i, j, k;
    l_16[0].f2 = func_2(g_5, func_6((l_9 > (((l_9 <= (func_10((((g_5.f1 && l_9) < g_5.f2) < l_9), l_9, l_9) < l_9)) , 0x7762406C49A7E128LL) >= 0xF9E8BFA08552AD14LL)), l_16[0]));
    for (g_5.f3 = 0; (g_5.f3 <= 52); ++g_5.f3)
    { 
        uint8_t l_78[4][3] = {{0xFBL,4UL,4UL},{0UL,0xE5L,0xE5L},{0xFBL,4UL,4UL},{0UL,0xE5L,0xE5L}};
        int32_t l_85 = 0x73DF2D9AL;
        int i, j;
        for (g_36 = 5; (g_36 >= 27); ++g_36)
        { 
            uint32_t l_84[1];
            int i;
            for (i = 0; i < 1; i++)
                l_84[i] = 8UL;
            g_18.f3 &= (safe_add_func_uint8_t_u_u((g_5.f0 > (((safe_sub_func_uint16_t_u_u((g_79 = (l_78[1][0] = 0x84F1L)), (safe_div_func_uint64_t_u_u(((l_84[0] &= (((l_82[1][3][0] , 0xD1BEB709L) | l_83) >= l_16[0].f2)) != l_85), 0x3AC23FC00924423CLL)))) == l_85) , l_84[0])), g_5.f2));
        }
    }
    return l_86[3];
}



static int32_t  func_2(struct S0  p_3, int64_t  p_4)
{ 
    int32_t l_66[3];
    int32_t l_67 = 1L;
    int i;
    for (i = 0; i < 3; i++)
        l_66[i] = (-6L);
    for (p_3.f3 = 0; (p_3.f3 > 6); p_3.f3 = safe_add_func_int64_t_s_s(p_3.f3, 5))
    { 
        int8_t l_68 = 0x8FL;
        int32_t l_69 = 0x1EF3A5E7L;
        if (g_5.f0)
            break;
        l_69 = (safe_div_func_uint32_t_u_u(((l_66[1] & g_5.f2) > (g_52[0] == (((l_67 = g_52[0]) == g_5.f0) > l_68))), 0x064EC4FEL));
    }
    return g_18.f1;
}



static int64_t  func_6(int64_t  p_7, struct S6  p_8)
{ 
    struct S5 l_17 = {160,1,2,-3213};
    uint64_t l_54 = 1UL;
    struct S3 l_61 = {1L,4057,3395};
    g_18 = l_17;
    for (g_15 = 19; (g_15 <= 59); g_15++)
    { 
        uint64_t l_32 = 0xA21DEC74357240E6LL;
        int32_t l_38 = 0L;
        int32_t l_39 = 2L;
        int32_t l_40 = 0xE11E5463L;
        union U8 l_44 = {0L};
        struct S1 l_49 = {-103,-4753,0,-1,-3066};
        uint64_t l_58 = 0x94B961AC8BEBE450LL;
        if ((p_8.f4 &= g_5.f3))
        { 
            uint8_t l_27 = 0x84L;
            int32_t l_35 = 0xDEDC29BFL;
            int32_t l_37 = 0xF0427242L;
            int32_t l_53 = 0x04657E6FL;
            if (((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((l_27 == g_5.f1), (+(+(safe_rshift_func_int16_t_s_s((l_32 && (l_35 = (safe_rshift_func_uint16_t_u_u(0x5AD9L, 14)))), l_27)))))), l_17.f0)), p_8.f3)) | l_17.f3))
            { 
                uint16_t l_41 = 4UL;
                int32_t l_45[4][1][5] = {{{0L,0L,1L,0xD056B0C4L,1L}},{{0x192EEDB0L,0x192EEDB0L,1L,0x6C42336FL,1L}},{{0L,0L,1L,0xD056B0C4L,1L}},{{0x192EEDB0L,0x192EEDB0L,1L,0x6C42336FL,1L}}};
                int32_t l_46 = (-1L);
                int i, j, k;
                --l_41;
                if (l_41)
                    continue;
                l_46 = ((l_45[1][0][1] = (((l_44 , l_35) | p_8.f4) < (p_8 , g_5.f2))) >= g_5.f1);
            }
            else
            { 
                uint32_t l_57[2][4] = {{0xA276D00DL,4294967287UL,0xA276D00DL,4294967287UL},{0xA276D00DL,4294967287UL,0xA276D00DL,4294967287UL}};
                int i, j;
                g_18.f3 = (safe_mod_func_int8_t_s_s(((l_49 , (safe_mul_func_uint8_t_u_u(l_49.f2, (--l_54)))) < g_36), (l_57[0][2] , 9UL)));
            }
            l_58--;
        }
        else
        { 
            l_61 = l_61;
            p_8.f4 = 1L;
        }
        l_49.f1 = (-1L);
    }
    l_17.f2 = p_7;
    return g_36;
}



static uint32_t  func_10(uint64_t  p_11, int16_t  p_12, uint16_t  p_13)
{ 
    int8_t l_14 = 0xF0L;
    g_15 = l_14;
    return p_13;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
    transparent_crc(g_5.f2, "g_5.f2", print_hash_value);
    transparent_crc(g_5.f3, "g_5.f3", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
    transparent_crc(g_18.f3, "g_18.f3", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);

    }
    transparent_crc(g_79, "g_79", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
