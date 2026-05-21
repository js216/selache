// SPDX-License-Identifier: MIT
// cctest_csmith_42ee2745.c --- cctest case csmith_42ee2745 (csmith seed 1122903877)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2e2ce647 */

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

// Options:   -s 1122903877 -o /tmp/csmith_gen_49d30dzj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   uint64_t  f1;
};

struct S1 {
   uint32_t  f0;
   uint64_t  f1;
   struct S0  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   struct S0  f0;
   int16_t  f1;
   uint16_t  f2;
   const uint64_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   int64_t  f0;
   uint8_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

union U4 {
   uint16_t  f0;
   int16_t  f1;
   int32_t  f2;
};

union U5 {
   uint16_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   int32_t  f3;
};

union U6 {
   const int32_t  f0;
};


static int32_t g_2[4][5] = {{0x9ECF4A41L,4L,0x9ECF4A41L,0x7D0B0A35L,4L},{0L,1L,0x7D0B0A35L,0L,0x7D0B0A35L},{0L,0L,1L,4L,(-8L)},{0x9ECF4A41L,(-8L),0x7D0B0A35L,0x7D0B0A35L,(-8L)}};
static uint8_t g_26[4][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
static uint16_t g_33 = 65533UL;
static struct S3 g_62 = {0x1FF3C8D209D08179LL,0xB5L,0xECE9E619L};
static int8_t g_92 = (-9L);
static int64_t g_93 = 0xFFCED7161A1E5F56LL;
static struct S2 g_122 = {{4UL,0x57C36335431FA81ELL},1L,1UL,0xFD8C34014C235FF6LL,7L};
static uint32_t g_146 = 0xF8CE80C6L;
static struct S1 g_161[4] = {{0x03B609C6L,0x979EA24B92E75A53LL,{0UL,0x9ED40CDEBCC86662LL}},{0x03B609C6L,0x979EA24B92E75A53LL,{0UL,0x9ED40CDEBCC86662LL}},{0x03B609C6L,0x979EA24B92E75A53LL,{0UL,0x9ED40CDEBCC86662LL}},{0x03B609C6L,0x979EA24B92E75A53LL,{0UL,0x9ED40CDEBCC86662LL}}};
static union U5 g_165 = {0x127DL};
static int64_t g_187 = 0xE73B9E9AA08B820ALL;
static int64_t g_189 = 0x9C454E90A0130922LL;
static uint16_t g_190 = 0x84CAL;
static int8_t g_221[4][2] = {{2L,2L},{2L,2L},{2L,2L},{2L,2L}};
static uint8_t g_222[1] = {0xB9L};
static uint64_t g_226 = 0xCE5FEA347EEFFE8ELL;
static uint32_t g_229 = 3UL;
static int32_t g_232 = 5L;
static uint32_t g_233[5] = {0xA1477951L,0xA1477951L,0xA1477951L,0xA1477951L,0xA1477951L};
static union U4 g_243 = {0x6580L};
static uint64_t g_245 = 0xE01A939D389A2BFALL;



static struct S1  func_1(void);
static int16_t  func_5(uint32_t  p_6, union U5  p_7, union U5  p_8, struct S3  p_9);
static uint16_t  func_10(int32_t  p_11, uint32_t  p_12, uint8_t  p_13, uint32_t  p_14);
static uint32_t  func_15(int32_t  p_16, union U6  p_17);




static struct S1  func_1(void)
{ 
    uint16_t l_21 = 1UL;
    union U6 l_22 = {0x491D0B6BL};
    union U5 l_164[2] = {{0UL},{0UL}};
    struct S3 l_166 = {-1L,0x64L,0x51499A76L};
    int32_t l_253 = 0L;
    int i;
    for (g_2[3][1] = (-17); (g_2[3][1] >= (-6)); g_2[3][1] = safe_add_func_int16_t_s_s(g_2[3][1], 4))
    { 
        uint32_t l_20 = 1UL;
        struct S3 l_251 = {1L,1UL,-1L};
        int32_t l_252 = 0x783CDB2FL;
        if ((func_5((func_10(g_2[3][1], (g_26[2][1] = func_15(((safe_mod_func_uint8_t_u_u(((g_2[2][3] > l_20) , l_21), 9L)) <= g_2[1][1]), l_22)), g_2[1][1], g_2[2][1]) ^ g_161[0].f1), l_164[0], g_165, l_166) && g_146))
        { 
            return g_161[0];
        }
        else
        { 
            l_252 |= (!(((l_251 = ((l_20 > ((((safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((l_20 < 9UL), l_164[0].f2)), g_165.f0)) < g_33) < g_92) ^ 0UL)) , l_251)) , 0x27L) & l_164[0].f0));
        }
    }
    l_253 ^= l_166.f2;
    l_253 &= (safe_rshift_func_int16_t_s_u(((((safe_add_func_int64_t_s_s((g_189 = (((l_166.f2 = ((0x8335L <= ((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(g_221[1][0])), (safe_mul_func_int16_t_s_s(l_21, 65535UL)))) > l_166.f1)) , 18446744073709551612UL)) < l_164[0].f2) ^ l_166.f0)), 0x90B8BAF473B4E5F6LL)) ^ 0x188EL) == 0x3852L) >= l_166.f1), g_165.f0));
    return g_161[3];
}



static int16_t  func_5(uint32_t  p_6, union U5  p_7, union U5  p_8, struct S3  p_9)
{ 
    struct S2 l_169 = {{18446744073709551614UL,0xA6E03DA2C960B144LL},0xC0A8L,0x2867L,0x4F7079DBC9DE4289LL,0xF2ADBE4EL};
    int32_t l_181 = (-1L);
    int32_t l_184 = 0L;
    int32_t l_185 = 0xD7E8CB10L;
    int32_t l_188[1][1];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_188[i][j] = (-8L);
    }
    for (p_8.f2 = 6; (p_8.f2 < 42); p_8.f2++)
    { 
        int64_t l_176 = 0xD1A7C047C511B62DLL;
        uint32_t l_177[1];
        int32_t l_178 = 3L;
        int i;
        for (i = 0; i < 1; i++)
            l_177[i] = 0xCCFC83ECL;
        l_178 |= (g_62.f2 &= (1UL || (l_169 , (((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((p_9.f1 = (safe_lshift_func_uint16_t_u_s(((l_176 > ((g_122.f0.f0 >= p_8.f2) != p_7.f0)) == l_177[0]), 5))), p_9.f2)), p_8.f0)) || g_122.f2) <= p_7.f2))));
        if (g_62.f2)
            goto lbl_193;
    }
lbl_193:
    for (l_169.f0.f0 = 0; (l_169.f0.f0 < 45); ++l_169.f0.f0)
    { 
        int32_t l_183[3][2][4] = {{{0x3009E39CL,0L,0x3009E39CL,0x3009E39CL},{0L,0L,0x5645DE02L,0L}},{{0L,0x3009E39CL,0x3009E39CL,0L},{0x3009E39CL,0L,0x3009E39CL,0x3009E39CL}},{{0L,0L,0x5645DE02L,0L},{0L,0x3009E39CL,0x3009E39CL,0L}}};
        int i, j, k;
        for (p_8.f3 = 1; (p_8.f3 >= 0); p_8.f3 -= 1)
        { 
            int32_t l_182 = 0L;
            int32_t l_186 = (-1L);
            int i, j;
            l_181 ^= g_26[p_8.f3][p_8.f3];
            --g_190;
        }
    }
    if (g_122.f0.f1)
    { 
        int32_t l_220 = 1L;
        for (g_62.f0 = 18; (g_62.f0 != (-2)); --g_62.f0)
        { 
            int32_t l_207 = 0L;
            g_62.f2 |= (safe_add_func_uint8_t_u_u((+((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(65532UL, l_188[0][0])), l_207)), 0L)), p_7.f0)) && 1L)), 0x8DL));
            for (l_169.f1 = 0; (l_169.f1 >= 23); ++l_169.f1)
            { 
                if (g_62.f0)
                    break;
            }
            if ((((l_220 = (!((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(p_9.f2, ((safe_div_func_int32_t_s_s((~((l_184 = (1UL || g_122.f2)) != ((p_8.f2 < 0x22DAFDEBL) <= g_93))), 0xA66F5DFCL)) ^ p_9.f2))), 6)) , g_161[0].f2.f1))) | g_62.f1) > p_7.f0))
            { 
                int64_t l_225 = 1L;
                g_222[0]++;
                l_185 = l_225;
                ++g_226;
            }
            else
            { 
                g_229--;
                return g_226;
            }
        }
        l_169.f0 = l_169.f0;
        ++g_233[0];
    }
    else
    { 
        uint64_t l_244 = 0xC4FC2E01831FDFA3LL;
        g_245 |= (safe_rshift_func_uint8_t_u_u((((~(((((safe_mod_func_int16_t_s_s((((0x18L ^ (g_2[3][1] , (safe_mod_func_int64_t_s_s(0x5386F4F37222D3A8LL, (g_243 , 18446744073709551607UL))))) ^ g_187) || 0L), g_62.f2)) <= 0L) == 0xF6B8001EDFECE9ACLL) , l_244) && 2UL)) || p_7.f2) < g_221[1][0]), 7));
    }
    return g_243.f1;
}



static uint16_t  func_10(int32_t  p_11, uint32_t  p_12, uint8_t  p_13, uint32_t  p_14)
{ 
    uint8_t l_36 = 0UL;
    struct S3 l_64 = {1L,253UL,1L};
    struct S2 l_65 = {{0x97315BB970EAE325LL,18446744073709551615UL},-2L,0x588CL,0x35B2DFF541EDF2CFLL,0xAA3CE9D1L};
    uint8_t l_138[3];
    int32_t l_139 = 1L;
    union U6 l_160 = {0x70095EF7L};
    int i;
    for (i = 0; i < 3; i++)
        l_138[i] = 0x6AL;
    for (p_11 = 0; (p_11 < 7); p_11++)
    { 
        union U6 l_57 = {-2L};
        uint8_t l_61 = 0UL;
        uint64_t l_91 = 0xFF4CBEB01B519BE1LL;
        int32_t l_96[4] = {0L,0L,0L,0L};
        union U4 l_118 = {1UL};
        struct S1 l_162 = {0x4898B4B1L,0x4561C0100DB2DB78LL,{0x5B2E7BA114AE42E3LL,0xE4417017BC323D96LL}};
        int i;
        if (((safe_div_func_int16_t_s_s(p_14, (safe_rshift_func_uint16_t_u_s((g_33++), g_26[3][1])))) >= (g_26[1][0] != l_36)))
        { 
            uint64_t l_58 = 0x34174AA7FCF62392LL;
            struct S3 l_63 = {5L,255UL,0x233FFCD5L};
            uint8_t l_90 = 0x25L;
            int32_t l_94 = 1L;
            if ((safe_lshift_func_uint16_t_u_u((p_12 , (((safe_div_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(((~(safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((safe_div_func_int64_t_s_s((0xCEL || (((g_33 != (l_57 , g_2[2][3])) != g_26[3][1]) == l_58)), p_12)), l_36)), g_26[3][0])), 0x28L)) != p_13), 6))))) >= p_12), p_13)) >= p_11), p_11)) >= 0L) > 3L)), p_13)))
            { 
                l_64 = (((g_33 , ((l_61 = (p_13 <= (((safe_mod_func_uint32_t_u_u(1UL, p_13)) != g_33) & p_14))) , 0xD1L)) , g_62) , l_63);
            }
            else
            { 
                g_62.f2 = 0x376B242CL;
                l_63.f2 = (l_65 , 0xAEBC0183L);
                if (p_11)
                    continue;
            }
            for (l_64.f1 = 0; (l_64.f1 >= 19); ++l_64.f1)
            { 
                int64_t l_81 = 0xB4E35EE06F66B510LL;
                struct S0 l_95 = {18446744073709551611UL,18446744073709551607UL};
                l_63.f2 ^= ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(p_14, 6)) >= (safe_mod_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((l_57.f0 && (~(g_93 = (((--g_26[2][1]) >= l_65.f1) <= (((g_92 = (((((safe_sub_func_int64_t_s_s(((safe_div_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u(p_12, l_90)) < (-5L)) <= g_33) >= l_81), p_12)) >= 247UL), l_91)) ^ l_57.f0) && p_11) && 1UL) , g_2[0][1])) && p_11) , p_13))))) & g_33) | 0x07F6L), 0x21L)), p_12)) && g_92), (-1L)))), 7)) ^ l_94);
                l_95 = l_65.f0;
            }
        }
        else
        { 
            l_96[1] &= 0xABB59224L;
            l_64.f2 |= (safe_sub_func_int64_t_s_s(((((+g_26[2][0]) <= (p_13 < g_2[3][1])) , (l_96[1] = l_57.f0)) == g_2[3][1]), p_11));
        }
        if ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((l_64.f2 ^= 1L), (safe_lshift_func_int8_t_s_s((l_96[1] = (p_12 || (((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0x25L, g_92)), 0x5FDEL)) <= l_64.f0) < g_2[3][1]))), 7)))), l_65.f0.f0)))
        { 
            struct S3 l_119 = {0x8CC4BB82127F58F6LL,0xC2L,1L};
            l_64 = (((safe_add_func_int64_t_s_s((g_93 = (safe_add_func_uint16_t_u_u((l_65.f0 , ((safe_sub_func_int8_t_s_s(g_26[2][1], g_26[2][1])) & (safe_div_func_int8_t_s_s((g_92 = p_13), 1L)))), p_12))), g_62.f2)) , l_118) , l_119);
            l_96[1] = ((safe_mod_func_uint32_t_u_u((l_57.f0 && (l_119.f2 = (-1L))), ((g_122.f0.f0 = (g_122 , ((+p_14) < 4294967295UL))) , g_93))) || 8L);
        }
        else
        { 
            int16_t l_140 = 0x5D02L;
            int32_t l_145 = 0xBF80E55FL;
            int32_t l_147 = 6L;
            for (p_12 = 17; (p_12 <= 29); p_12 = safe_add_func_int8_t_s_s(p_12, 2))
            { 
                uint32_t l_126 = 18446744073709551608UL;
                int32_t l_135 = 0xB5E43CA2L;
                --l_126;
                l_140 = (safe_div_func_uint32_t_u_u((l_139 = ((((l_64.f2 = (-1L)) <= ((((g_2[3][1] != (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((l_135 = 0x92063B3DL), (((safe_mod_func_uint64_t_u_u(8UL, (-1L))) && g_2[3][1]) < g_122.f1))), g_93))) || 0xF3ECL) || l_138[2]) < (-9L))) | l_138[2]) , g_33)), p_12));
                l_147 ^= ((((((safe_rshift_func_int8_t_s_s(p_11, (g_92 = ((safe_lshift_func_int8_t_s_s(0xD0L, (l_145 = (l_135 = g_122.f0.f1)))) | (((g_146 = ((((5UL <= g_92) & g_26[1][0]) & 0xFDDA3525L) >= 0xC179A00162082439LL)) , g_122.f0.f0) | p_12))))) || 0xEAEB8C4E8C28246ALL) && l_140) | 1L) ^ p_13) , p_13);
            }
            if (((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s((1UL ^ (p_13 = ((safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_11, (safe_mul_func_uint16_t_u_u((65535UL <= p_11), 0xADF4L)))), g_93)), l_64.f2)) | g_122.f3))), 249UL)), p_11)) > p_11))
            { 
                struct S1 l_163 = {0x5BA54898L,7UL,{0x932648B246ADE16ALL,0xE7E255381E5287C3LL}};
                l_64.f2 = ((((18446744073709551609UL ^ (l_139 = 1UL)) | 8UL) | (l_160 , 4294967294UL)) != g_62.f2);
                l_163 = (l_162 = g_161[0]);
            }
            else
            { 
                g_62.f2 ^= l_139;
            }
        }
    }
    return p_13;
}



static uint32_t  func_15(int32_t  p_16, union U6  p_17)
{ 
    uint32_t l_25 = 0xF57440E7L;
    for (p_16 = 0; (p_16 > (-18)); p_16--)
    { 
        return g_2[3][1];
    }
    return l_25;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_26[i][j], "g_26[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_62.f1, "g_62.f1", print_hash_value);
    transparent_crc(g_62.f2, "g_62.f2", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_122.f0.f0, "g_122.f0.f0", print_hash_value);
    transparent_crc(g_122.f0.f1, "g_122.f0.f1", print_hash_value);
    transparent_crc(g_122.f1, "g_122.f1", print_hash_value);
    transparent_crc(g_122.f2, "g_122.f2", print_hash_value);
    transparent_crc(g_122.f3, "g_122.f3", print_hash_value);
    transparent_crc(g_122.f4, "g_122.f4", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_161[i].f0, "g_161[i].f0", print_hash_value);
        transparent_crc(g_161[i].f1, "g_161[i].f1", print_hash_value);
        transparent_crc(g_161[i].f2.f0, "g_161[i].f2.f0", print_hash_value);
        transparent_crc(g_161[i].f2.f1, "g_161[i].f2.f1", print_hash_value);

    }
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_165.f2, "g_165.f2", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_221[i][j], "g_221[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_222[i], "g_222[i]", print_hash_value);

    }
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_233[i], "g_233[i]", print_hash_value);

    }
    transparent_crc(g_243.f0, "g_243.f0", print_hash_value);
    transparent_crc(g_243.f1, "g_243.f1", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
