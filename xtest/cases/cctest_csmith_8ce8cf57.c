// SPDX-License-Identifier: MIT
// cctest_csmith_8ce8cf57.c --- cctest case csmith_8ce8cf57 (csmith seed 2364067671)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1f88c9be */

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

// Options:   -s 2364067671 -o /tmp/csmith_gen_00oyk9y0/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


union U1 {
   const uint16_t  f0;
   uint64_t  f1;
   int64_t  f2;
   uint8_t  f3;
};

union U2 {
   uint32_t  f0;
   const uint8_t  f1;
};

struct S0 {
   int8_t  f0;
   int16_t  f1;
   const uint8_t  f2;
};

union U3 {
   int8_t  f0;
   const uint8_t  f1;
   struct S0  f2;
   int32_t  f3;
};

union U4 {
   const int32_t  f0;
   int32_t  f1;
};


static int64_t g_23 = (-1L);
static int64_t g_27 = 1L;
static union U2 g_28 = {0xD0A3205FL};
static union U4 g_29 = {0x617A9413L};
static uint16_t g_70 = 0UL;
static int32_t g_75 = 0x905BEA62L;
static uint16_t g_85 = 0x487FL;
static int64_t g_89 = (-1L);
static uint64_t g_90 = 0UL;
static uint32_t g_109 = 6UL;
static union U1 g_125 = {0xE76BL};
static uint16_t g_140 = 0UL;
static union U3 g_165 = {0x77L};
static uint64_t g_170 = 1UL;



static int32_t  func_1(void);
static int16_t  func_6(union U1  p_7, uint8_t  p_8, int8_t  p_9, uint32_t  p_10);
static union U1  func_11(union U4  p_12, int8_t  p_13, uint32_t  p_14, int32_t  p_15);
static union U4  func_16(int8_t  p_17, uint32_t  p_18, uint64_t  p_19, union U2  p_20, union U4  p_21);




static int32_t  func_1(void)
{ 
    int16_t l_22[4][5] = {{0x648BL,0xA968L,0xA968L,0x648BL,0x56E3L},{0x648BL,0x0E82L,0xED45L,0xED45L,0x0E82L},{0x56E3L,0xA968L,0xED45L,0x837AL,0x837AL},{0xA968L,0x56E3L,0xA968L,0xED45L,0x837AL}};
    int32_t l_26 = 2L;
    int i, j;
    g_165.f3 = (safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(0x607AL, func_6(func_11(func_16(l_22[0][2], g_23, (g_27 = (((l_26 = (safe_mod_func_uint16_t_u_u((255UL > l_22[0][2]), 1L))) | 0x41L) | g_23)), g_28, g_29), l_22[0][2], l_22[3][4], g_89), l_22[1][0], l_22[0][2], l_22[0][4]))), l_22[0][2]));
    return l_22[0][2];
}



static int16_t  func_6(union U1  p_7, uint8_t  p_8, int8_t  p_9, uint32_t  p_10)
{ 
    int8_t l_126[4][5][2] = {{{3L,0x67L},{0x94L,3L},{0xBDL,0xBDL},{0xBDL,3L},{0x94L,0x67L}},{{3L,0x67L},{0x94L,3L},{0xBDL,0xBDL},{0xBDL,3L},{0x94L,0x67L}},{{3L,0x67L},{0x94L,3L},{0xBDL,0xBDL},{3L,0x94L},{0x94L,0xBDL}},{{0x94L,0xBDL},{0x94L,0x94L},{3L,3L},{3L,0x94L},{0x94L,0xBDL}}};
    int32_t l_138 = 1L;
    int32_t l_139 = 0x2BCF0FF9L;
    int32_t l_141 = 0x28F2DD18L;
    int32_t l_142 = 0x33990FFCL;
    uint32_t l_166 = 1UL;
    uint8_t l_171 = 0xFEL;
    int i, j, k;
    for (g_23 = 1; (g_23 >= 0); g_23 -= 1)
    { 
        union U4 l_129 = {0x576224DBL};
        int32_t l_143 = 0xFB0DC278L;
        g_29.f1 |= (safe_add_func_uint8_t_u_u(p_10, (l_129 , (-6L))));
        l_143 = ((safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((((l_142 = (l_141 = (safe_mul_func_int16_t_s_s((6L < (g_140 = (((safe_rshift_func_uint8_t_u_u(p_8, ((l_138 ^= 0L) && (l_139 ^= (l_129.f1 = ((l_138 = 0UL) <= g_28.f0)))))) == p_7.f0) != l_126[1][2][1]))), 0x4F19L)))) == p_8) && p_8), l_143)) , 1UL), 1UL)) ^ g_70);
        for (p_8 = 0; (p_8 <= 1); p_8 += 1)
        { 
            union U2 l_160[1][3] = {{{0UL},{0UL},{0UL}}};
            union U1 l_169 = {0x9422L};
            int i, j;
            l_138 = (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((g_27 && (safe_mod_func_uint64_t_u_u((0x1822L || 0xEBDFL), g_27))), 6)), p_10));
            for (l_143 = 1; (l_143 >= 0); l_143 -= 1)
            { 
                const uint64_t l_167 = 0xA4DA777F1D446CA2LL;
                int32_t l_168 = 0x343C832FL;
                l_168 = (safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_s((((((0L < (safe_div_func_uint16_t_u_u((((l_160[0][1] , (p_7.f0 != (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((g_165 , 0x441CL), l_166)), p_9)))) > g_27) >= 1UL), l_160[0][1].f0))) == 0xCDL) , 1UL) | l_167) <= p_9), 8)) >= p_8) < g_70), p_7.f0)), l_167)), g_28.f1));
                l_141 &= (l_169 , (l_171 = (g_170 = 0xC82440A5L)));
            }
        }
    }
    return p_7.f0;
}



static union U1  func_11(union U4  p_12, int8_t  p_13, uint32_t  p_14, int32_t  p_15)
{ 
    union U1 l_118 = {0x6F11L};
    int32_t l_124 = 0x6C632212L;
    for (g_70 = (-6); (g_70 >= 32); g_70++)
    { 
        int32_t l_123 = 1L;
        l_124 = (((((+(safe_unary_minus_func_uint8_t_u(((0xF5L | 0x05L) != (l_118 , (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(g_28.f1, l_118.f0)), 1))))))) > 0x95AFL) , l_123) > l_123) && l_118.f0);
    }
    return g_125;
}



static union U4  func_16(int8_t  p_17, uint32_t  p_18, uint64_t  p_19, union U2  p_20, union U4  p_21)
{ 
    int64_t l_47 = 0xCFE0C2DF100F83BFLL;
    int32_t l_48 = 4L;
    int32_t l_49[2][4][3] = {{{0xE19CCD29L,0xE19CCD29L,0xE19CCD29L},{0L,0L,0L},{0xE19CCD29L,0xE19CCD29L,0xE19CCD29L},{0L,0L,0L}},{{0xE19CCD29L,0xE19CCD29L,0xE19CCD29L},{0L,0L,0L},{0xE19CCD29L,0xE19CCD29L,0xE19CCD29L},{0L,0L,0L}}};
    uint64_t l_69 = 0xCD78DC7DAD05572BLL;
    int64_t l_108 = 0xC6CB56AE7BB48DF9LL;
    union U4 l_113 = {-3L};
    int i, j, k;
    for (g_27 = 0; (g_27 <= 10); g_27 = safe_add_func_uint8_t_u_u(g_27, 6))
    { 
        uint32_t l_32[4] = {1UL,1UL,1UL,1UL};
        int32_t l_37 = 0xCE6C1CC4L;
        int32_t l_50 = 0x4175C8FEL;
        uint32_t l_107 = 0x3B9C033CL;
        int i;
        for (p_18 = 0; (p_18 <= 3); p_18 += 1)
        { 
            union U4 l_38 = {7L};
            l_37 ^= ((((safe_sub_func_int64_t_s_s((p_18 != ((((18446744073709551608UL == (g_29.f1 >= p_20.f0)) , p_20.f0) < 0x177FD8B26DE0D615LL) > 65529UL)), g_28.f0)) != 0xAFB1L) & 0x0EBF085FL) == p_21.f1);
            return l_38;
        }
        if ((((safe_sub_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u(((p_20.f0 ^ ((l_50 &= (((((safe_div_func_uint32_t_u_u((l_37 = (((safe_rshift_func_uint16_t_u_s((0xB4L < (l_49[1][3][0] &= (g_27 || ((l_48 |= ((-4L) <= l_47)) > g_29.f1)))), 15)) >= l_32[0]) & p_21.f1)), p_21.f0)) == g_29.f0) == l_47) || g_28.f1) >= l_32[0])) < l_47)) && g_29.f1), l_32[1])) & 0x7B60L), p_19)) < 3L) ^ 0L))
        { 
            int8_t l_54 = 0L;
            int32_t l_55[1][3][4] = {{{7L,(-5L),7L,(-5L)},{7L,(-5L),7L,(-5L)},{7L,(-5L),7L,(-5L)}}};
            int i, j, k;
            if ((safe_sub_func_uint16_t_u_u(65535UL, (safe_unary_minus_func_int8_t_s((l_54 ^= g_28.f1))))))
            { 
                l_55[0][0][0] = p_20.f1;
                g_29.f1 = ((safe_add_func_int16_t_s_s(0xA480L, ((+(safe_lshift_func_int8_t_s_u((g_23 < (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(l_54, (safe_rshift_func_uint8_t_u_u(l_69, g_28.f0)))), 0)), g_28.f1))), l_55[0][0][0]))) <= l_32[2]))) != l_55[0][0][0]);
                ++g_70;
            }
            else
            { 
                int64_t l_84 = (-1L);
                int64_t l_86 = 0x3B01F688490A13E6LL;
                p_21.f1 = ((safe_rshift_func_int8_t_s_s((g_75 = (p_17 = l_50)), 6)) & (safe_mul_func_uint8_t_u_u(0xB4L, (safe_lshift_func_int16_t_s_u((p_20.f1 >= (safe_rshift_func_int16_t_s_u((((safe_mod_func_uint8_t_u_u((g_85 = l_84), l_86)) , 0xC6110BDBE7998387LL) , 0x03D6L), l_84))), l_55[0][1][3])))));
            }
            if (p_20.f1)
                continue;
            if ((g_29.f1 == (safe_sub_func_int64_t_s_s(l_37, 0x28949F0E3FDF4734LL))))
            { 
                union U4 l_101[2][5] = {{{0x2B137499L},{1L},{0x2B137499L},{1L},{0x2B137499L}},{{-1L},{-1L},{-1L},{-1L},{-1L}}};
                int i, j;
                g_90--;
                p_21.f1 = (safe_mod_func_int32_t_s_s((l_49[1][3][0] > (!(safe_sub_func_uint64_t_u_u((g_85 > (safe_mul_func_uint8_t_u_u(g_28.f1, (~((l_101[0][4] , p_21.f1) && g_85))))), 0xD1CB4528E6A876A4LL)))), p_20.f0));
                l_101[0][4].f1 ^= (safe_rshift_func_uint16_t_u_s((((safe_sub_func_int32_t_s_s(0x1D39A42CL, ((!(0xF2BE4639L && l_107)) , 0x289768AFL))) ^ (-8L)) & p_19), 0));
            }
            else
            { 
                if (p_18)
                    break;
                if (l_108)
                    break;
                --g_109;
            }
        }
        else
        { 
            int8_t l_112 = 1L;
            l_50 = l_112;
            if (p_19)
                continue;
        }
        if (g_29.f0)
            break;
    }
    return l_113;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
    transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_125.f0, "g_125.f0", print_hash_value);
    transparent_crc(g_125.f3, "g_125.f3", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_165.f1, "g_165.f1", print_hash_value);
    transparent_crc(g_165.f3, "g_165.f3", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
