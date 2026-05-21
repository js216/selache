// SPDX-License-Identifier: MIT
// cctest_csmith_18ebbf0e.c --- cctest case csmith_18ebbf0e (csmith seed 418103054)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9be9d65e */

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

// Options:   -s 418103054 -o /tmp/csmith_gen_b6e94uru/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int32_t  f0;
   const int64_t  f1;
   const uint32_t  f2;
   int64_t  f3;
   int32_t  f4;
   const int16_t  f5;
};

struct S1 {
   uint32_t  f0;
   int16_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const int32_t  f0;
   int16_t  f1;
};
#pragma pack(pop)

union U3 {
   const int8_t  f0;
   const uint64_t  f1;
};


static uint32_t g_15[5][4] = {{0xB6FEB9E9L,0xF33F23E9L,0xB6FEB9E9L,0xB6FEB9E9L},{0xF33F23E9L,0xF33F23E9L,4294967292UL,0xF33F23E9L},{0xF33F23E9L,0xB6FEB9E9L,0xB6FEB9E9L,0xF33F23E9L},{0xB6FEB9E9L,0xF33F23E9L,0xB6FEB9E9L,0xB6FEB9E9L},{0xF33F23E9L,0xF33F23E9L,4294967292UL,0xF33F23E9L}};
static int64_t g_38[1] = {(-4L)};
static uint32_t g_40 = 3UL;
static int32_t g_43 = 0L;
static uint32_t g_47[2][5][3] = {{{4294967295UL,0x4B1F0599L,0x9B12DB22L},{4294967295UL,4294967295UL,0x4B1F0599L},{0x42DCBDEDL,0x4B1F0599L,0x4B1F0599L},{0x4B1F0599L,4294967294UL,0x9B12DB22L},{0x42DCBDEDL,4294967294UL,0x42DCBDEDL}},{{4294967295UL,0x4B1F0599L,0x9B12DB22L},{4294967295UL,4294967295UL,0x4B1F0599L},{0x42DCBDEDL,0x4B1F0599L,0x4B1F0599L},{0x4B1F0599L,4294967295UL,4294967294UL},{0x9B12DB22L,4294967295UL,0x9B12DB22L}}};
static struct S1 g_48 = {0x47CF2842L,-1L};
static struct S1 g_56[1][2][3] = {{{{0x9900F1D9L,0L},{0x9900F1D9L,0L},{0x9900F1D9L,0L}},{{0x9900F1D9L,0L},{0x9900F1D9L,0L},{0x9900F1D9L,0L}}}};
static uint64_t g_98 = 0x4857036B52242021LL;
static uint32_t g_107 = 0x4AA1647FL;
static int32_t g_121 = 5L;
static uint8_t g_128 = 0xB5L;
static struct S0 g_133 = {1L,0x642D507010F87BC8LL,4294967290UL,-6L,1L,-1L};
static uint32_t g_179 = 0x9A416FBCL;
static int32_t g_237[5] = {(-3L),(-3L),(-3L),(-3L),(-3L)};
static uint64_t g_254 = 18446744073709551612UL;
static uint32_t g_309 = 1UL;
static union U3 g_310 = {-9L};
static const uint32_t g_343[1][1] = {{0xCEF86DEAL}};
static uint64_t g_351 = 0xD15266E77DB1310DLL;
static uint32_t g_374 = 0x4E473470L;



static int32_t  func_1(void);
static uint32_t  func_7(uint8_t  p_8, uint64_t  p_9, struct S2  p_10);
static uint32_t  func_11(uint64_t  p_12, uint32_t  p_13, struct S1  p_14);
static struct S1  func_16(uint32_t  p_17);




static int32_t  func_1(void)
{ 
    uint16_t l_2 = 7UL;
    int32_t l_325 = 0xA5D3A2AAL;
    struct S0 l_340 = {-1L,5L,0x9F491A40L,5L,0x307B5E04L,0L};
    uint16_t l_342 = 9UL;
    int32_t l_344 = 0x1C7137C1L;
    struct S1 l_405 = {18446744073709551615UL,1L};
    uint16_t l_406 = 0x18DAL;
    l_2++;
    if (l_2)
    { 
        int16_t l_55 = 1L;
        int32_t l_104[5];
        struct S2 l_105 = {-1L,-9L};
        int i;
        for (i = 0; i < 5; i++)
            l_104[i] = 0x2876425FL;
        l_325 = (safe_rshift_func_uint8_t_u_s((func_7((l_104[1] = (func_11(g_15[4][2], (func_16(g_15[0][0]) , ((-10L) < l_55)), g_56[0][1][0]) , g_98)), l_2, l_105) || g_48.f1), 0));
    }
    else
    { 
        int8_t l_341[2];
        struct S1 l_378 = {0xE289F59EL,0xE923L};
        uint64_t l_385 = 1UL;
        int32_t l_386 = 0xD78081E6L;
        uint64_t l_398 = 0UL;
        uint16_t l_411 = 0xBD2FL;
        int i;
        for (i = 0; i < 2; i++)
            l_341[i] = 9L;
        l_344 ^= ((safe_lshift_func_int8_t_s_s(((((g_254 > (g_47[1][3][0] ^= ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u((((((l_325 ^= (safe_rshift_func_int16_t_s_u((((g_40 >= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(g_38[0], 1)), 6))) , l_340) , (-10L)), 0))) , 18446744073709551607UL) >= 0x1B2535BE3E966DBCLL) <= l_341[1]) >= g_15[4][2]), g_48.f1)) | g_15[2][3]), g_179)) , l_342), g_310.f0)) == l_340.f0))) || 0xF7A7A2C9L) , g_98) || 0x10EAL), g_343[0][0])) == 0x05B62413DD2467ACLL);
        if ((g_133.f5 != (safe_sub_func_int16_t_s_s(((~(safe_rshift_func_uint16_t_u_u((((1L ^ 0UL) && ((~(g_351 ^= l_344)) < l_2)) || g_351), l_325))) & g_47[1][3][0]), l_340.f1))))
        { 
            int32_t l_364 = 0xF21C82D8L;
            if ((safe_lshift_func_int8_t_s_s((((g_56[0][1][0].f1 = 0xC02EL) || ((safe_add_func_uint32_t_u_u((g_40 = l_340.f1), (safe_sub_func_int32_t_s_s(0xFF4E4A0DL, (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(l_341[1], 1)) <= g_56[0][1][0].f0), g_56[0][1][0].f1)), 255UL)))))) < l_364)) >= g_107), 3)))
            { 
                uint16_t l_371[3];
                int32_t l_375[5] = {0x4616DD8DL,0x4616DD8DL,0x4616DD8DL,0x4616DD8DL,0x4616DD8DL};
                int i;
                for (i = 0; i < 3; i++)
                    l_371[i] = 0x7040L;
                g_374 ^= (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(l_2, 3)) , l_371[0]), l_340.f4)) == (safe_mod_func_int32_t_s_s(g_43, l_341[1]))), 0x1FL));
                l_375[4] = l_341[1];
                l_364 = ((8L | (0xC2L >= (safe_sub_func_uint32_t_u_u(l_375[4], 0x8E3ECF46L)))) || g_309);
            }
            else
            { 
                uint64_t l_384 = 0x1848EE351D1072CDLL;
                l_378 = l_378;
                l_386 = (((safe_rshift_func_uint8_t_u_s(g_38[0], 0)) != (safe_rshift_func_uint8_t_u_u(((!((g_47[1][3][0] & ((l_385 &= ((0x283CL <= ((l_384 == 1L) >= l_364)) || l_341[1])) , g_133.f4)) <= l_384)) ^ g_47[1][3][0]), l_384))) <= g_133.f3);
                g_43 = 0L;
            }
        }
        else
        { 
            int8_t l_389[5] = {0x74L,0x74L,0x74L,0x74L,0x74L};
            uint32_t l_397 = 0x9D94C1EBL;
            uint16_t l_412 = 65527UL;
            int i;
            if ((l_386 = ((safe_rshift_func_int8_t_s_s(l_389[3], ((((((l_398 = (safe_sub_func_int16_t_s_s((l_378 , ((((~l_389[3]) , ((safe_add_func_int8_t_s_s(g_48.f0, l_397)) & l_385)) & l_341[1]) >= 0x84L)), 0x07E2L))) || l_378.f0) & l_340.f2) & g_128) == 0L) < l_340.f1))) > g_310.f0)))
            { 
                uint64_t l_399 = 0x5CAD862755C9BD58LL;
                int32_t l_404[4] = {(-1L),(-1L),(-1L),(-1L)};
                int i;
                l_404[1] = ((l_399 == (safe_rshift_func_int16_t_s_u((l_378 , ((l_399 > (safe_mul_func_uint8_t_u_u(g_237[1], (-1L)))) < l_378.f0)), 5))) != 1UL);
                g_56[0][1][0] = l_405;
                l_378 = func_16(((l_406++) , (8L && l_389[3])));
            }
            else
            { 
                l_325 = ((safe_rshift_func_uint16_t_u_u(l_411, 3)) , g_48.f0);
            }
            l_412--;
            for (l_385 = 0; (l_385 <= 4); l_385 += 1)
            { 
                int i;
                return g_237[l_385];
            }
        }
        l_378 = l_405;
    }
    l_344 = g_254;
    return g_133.f1;
}



static uint32_t  func_7(uint8_t  p_8, uint64_t  p_9, struct S2  p_10)
{ 
    int16_t l_106[5][4] = {{0x2128L,0x112DL,0x112DL,0x2128L},{0x112DL,0x2128L,0x112DL,0x112DL},{0x2128L,0x2128L,1L,0x2128L},{0x2128L,0x112DL,0x112DL,0x2128L},{0x112DL,0x2128L,0x112DL,0x112DL}};
    int32_t l_122 = 1L;
    struct S1 l_209 = {0x92DBE5E4L,1L};
    struct S2 l_221[2][1] = {{{0x3DB78267L,0xFA98L}},{{0x3DB78267L,0xFA98L}}};
    uint32_t l_236 = 4UL;
    int32_t l_283[5];
    int32_t l_295 = 0x4E6314A1L;
    const int64_t l_308 = 0L;
    int i, j;
    for (i = 0; i < 5; i++)
        l_283[i] = 0L;
    g_43 |= (p_9 | (l_106[1][0] == (g_107 = p_10.f1)));
    if ((p_9 , (g_38[0] & p_8)))
    { 
        uint8_t l_114 = 252UL;
        uint32_t l_136 = 0x761F4025L;
        int32_t l_150 = (-1L);
        int16_t l_176 = 0x2E2EL;
        int32_t l_178 = 1L;
        uint32_t l_188 = 4UL;
        int8_t l_206 = (-2L);
        struct S1 l_207 = {0x56AC2A14L,0L};
        if (((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((((safe_mul_func_int16_t_s_s(g_38[0], 1UL)) != (((255UL || (p_10 , p_10.f0)) < p_10.f0) < g_56[0][1][0].f0)) <= 3UL) | p_10.f0), 1)), l_106[1][0])) & 246UL) && g_15[4][2]) & l_114))
        { 
            int16_t l_120[3];
            int32_t l_123 = (-1L);
            int i;
            for (i = 0; i < 3; i++)
                l_120[i] = 0x3B09L;
            for (p_9 = 0; (p_9 <= 0); p_9 += 1)
            { 
                struct S0 l_117 = {0x08E98861L,0x543D04623539A05ELL,0x5DA64128L,0x49A3136B179DCF4DLL,3L,0xD028L};
                int32_t l_137 = (-1L);
                int i;
                l_123 |= (p_10 , (l_122 = ((safe_mul_func_uint16_t_u_u((l_117 , (((((safe_sub_func_uint8_t_u_u((0UL | (g_121 = (g_38[p_9] ^= ((l_120[2] , g_98) && 0x5763L)))), g_47[1][3][1])) < p_9) >= p_10.f0) != g_98) > (-2L))), g_47[0][2][0])) ^ l_106[1][0])));
                l_137 = (safe_mul_func_uint8_t_u_u(0UL, (((safe_sub_func_int32_t_s_s((g_15[4][2] > (g_128--)), ((safe_div_func_int64_t_s_s(((g_133 , ((safe_mul_func_int8_t_s_s((p_10.f1 == g_133.f3), l_136)) <= l_122)) & 0xEB0F8655CF958245LL), 0x0F64EF15C959C009LL)) < g_48.f0))) == 1UL) < 0x8BL)));
            }
        }
        else
        { 
            uint64_t l_142[1];
            int i;
            for (i = 0; i < 1; i++)
                l_142[i] = 18446744073709551615UL;
            l_150 &= (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((l_142[0] & (((~((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(p_10.f0, (safe_add_func_int32_t_s_s(p_8, g_43)))), p_9)) >= l_136)) == 4294967294UL) , g_133.f2)), 4)) ^ 1L), g_107));
        }
        if ((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((l_150 |= (((((-6L) | (safe_div_func_uint16_t_u_u(((!g_133.f4) , (p_10.f1 != (((((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((l_114 < 1L))), 2)) <= g_43) , 4UL) <= 3L) > p_10.f1))), p_10.f1))) <= p_9) != p_10.f1) && l_122)) , g_133.f4), 65535UL)), g_43)))
        { 
            int16_t l_169 = 0x5F2AL;
            int64_t l_177[5][1];
            int32_t l_208 = (-1L);
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_177[i][j] = 0xC8EED5FA26938DC3LL;
            }
            if ((p_10.f1 >= (((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((l_169 != (((((safe_div_func_uint64_t_u_u((g_179 |= (l_178 = (safe_lshift_func_int8_t_s_u((g_40 == (((l_150 = (safe_sub_func_int16_t_s_s(l_176, g_15[4][2]))) > g_98) & l_177[0][0])), 0)))), g_15[3][3])) , (-1L)) != 2UL) && 1UL) == p_10.f0)) | (-6L)), l_114)), g_48.f1)) && l_106[1][0]), l_136)), g_47[0][2][0])) , g_107) >= p_10.f1)))
            { 
                uint32_t l_189 = 0xC3F9EEAFL;
                l_189 |= (((safe_mod_func_int64_t_s_s(((g_43 |= (safe_lshift_func_int16_t_s_s((l_177[1][0] <= g_98), (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_179, l_176)), 3))))) == l_188), g_133.f5)) >= 0xCCL) || g_128);
                g_43 |= (~(safe_sub_func_uint8_t_u_u(((((0x6DL != ((safe_div_func_int64_t_s_s(0x5330C45750431255LL, (safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((!0L), (safe_sub_func_uint16_t_u_u((l_106[0][0] && 0x81L), 1L)))) | p_10.f0), p_8)), l_206)), 4)))) , l_189)) != 3L) > l_189) != (-7L)), l_177[0][0])));
                l_207 = l_207;
            }
            else
            { 
                g_56[0][1][0] = g_56[0][1][0];
                l_208 |= 1L;
                l_209 = g_48;
            }
            g_43 = (0L ^ (safe_sub_func_int64_t_s_s((g_38[0] |= l_106[0][0]), 18446744073709551608UL)));
            l_178 |= (safe_mod_func_int32_t_s_s((~(safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0xC602L, (((safe_div_func_int8_t_s_s((-1L), g_38[0])) , ((l_221[1][0] , p_8) , l_150)) || l_177[2][0]))), l_169))), g_121));
        }
        else
        { 
            return g_133.f3;
        }
        l_150 = (g_43 = (safe_add_func_int8_t_s_s(p_9, ((safe_sub_func_int16_t_s_s((g_56[0][1][0].f1 |= (-6L)), (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((g_237[1] = (((safe_mul_func_uint16_t_u_u((l_136 <= (safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((g_40 >= 0x8EL), (-6L))), g_56[0][1][0].f0))), l_114)) < 0x036F43DDL) && l_236)) , g_133.f0), g_47[0][2][1])), p_10.f0)))) != 3UL))));
    }
    else
    { 
        int8_t l_238 = 2L;
        struct S0 l_279 = {-1L,0L,4294967287UL,-8L,0xB6247F78L,0L};
        l_238 = p_8;
        for (g_121 = 0; (g_121 < (-28)); g_121--)
        { 
            int32_t l_253 = 0x60467133L;
            int32_t l_255 = (-7L);
            int32_t l_284[4][2][3] = {{{0x04657D04L,1L,1L},{1L,(-7L),(-7L)}},{{0x315AF73AL,0x04657D04L,1L},{(-1L),(-5L),0x04657D04L}},{{(-1L),0x9EFEC6CEL,1L},{0x315AF73AL,0xC293D81AL,0x315AF73AL}},{{1L,0x9EFEC6CEL,(-1L)},{0x04657D04L,(-5L),(-1L)}}};
            int32_t l_285 = (-1L);
            uint16_t l_286 = 0UL;
            struct S1 l_297 = {1UL,-3L};
            int i, j, k;
            l_255 |= (safe_div_func_int32_t_s_s((safe_sub_func_int64_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((g_56[0][1][0].f1 | g_56[0][1][0].f0) || (((g_254 |= (((safe_sub_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_u((l_253 , (g_179 || g_38[0])), g_133.f1)) == l_122) & g_48.f0) | g_98), g_133.f0)) , g_133.f0) || p_10.f0)) || g_15[4][2]) ^ p_10.f0)), g_15[4][2])), p_10.f1)), l_238)), g_98));
            if (((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((((safe_mul_func_int16_t_s_s(l_255, (l_122 = (safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((+(safe_mul_func_uint8_t_u_u((l_285 &= (l_279 , ((((safe_mod_func_uint64_t_u_u((~((l_253 == (l_284[1][1][2] = ((l_283[2] | l_279.f5) < p_10.f1))) >= (-9L))), g_237[0])) ^ g_43) <= l_221[1][0].f1) & p_9))), g_38[0]))), g_133.f0)), p_8))))) <= l_253) || 0UL) && g_133.f2), l_279.f2)), 1)) || l_122), l_238)), l_286)), g_15[4][2])), 0x8740L)) ^ g_133.f3))
            { 
                uint32_t l_296 = 18446744073709551608UL;
                l_122 = (l_122 != (safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((l_296 ^= (p_10.f1 = (l_295 = (safe_lshift_func_uint8_t_u_s((g_128 = 255UL), ((safe_rshift_func_uint16_t_u_s(((-1L) & l_238), 7)) != 0x075DL)))))), 8)) || g_133.f1), p_8)));
                g_48 = (g_56[0][1][0] = (l_297 = l_297));
            }
            else
            { 
                uint16_t l_307 = 65532UL;
                g_43 |= ((g_309 = ((((safe_add_func_uint16_t_u_u(l_297.f0, (safe_lshift_func_uint8_t_u_u((((0xA09282D3L != (safe_unary_minus_func_uint64_t_u((p_8 <= (safe_add_func_int8_t_s_s(((safe_div_func_int16_t_s_s((l_209.f1 != 0xADL), l_122)) != p_10.f0), 248UL)))))) != l_307) > p_10.f1), 6)))) == 0L) != l_308) && l_221[1][0].f1)) != p_8);
            }
        }
        l_295 = (g_310 , p_9);
    }
    if ((l_122 ^= (g_43 = l_221[1][0].f0)))
    { 
        l_209 = g_56[0][1][0];
    }
    else
    { 
        struct S0 l_323 = {0xB86C917BL,0x7F866CF3013D5379LL,0xDC2F3845L,0xF7F71887038CBDFFLL,-1L,0xBC73L};
        int32_t l_324 = 0x207AB9D6L;
        g_43 = ((safe_sub_func_int8_t_s_s((-1L), p_10.f1)) >= ((safe_mul_func_uint16_t_u_u(g_133.f0, (safe_rshift_func_uint16_t_u_u(((l_324 = (safe_div_func_int8_t_s_s((l_122 |= (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((l_323 , l_221[1][0].f0), p_9)), 7))), g_56[0][1][0].f1))) & g_56[0][1][0].f1), 5)))) < g_133.f5));
    }
    return g_107;
}



static uint32_t  func_11(uint64_t  p_12, uint32_t  p_13, struct S1  p_14)
{ 
    uint32_t l_60 = 0x42739A3AL;
    const struct S0 l_61[4] = {{0x8E2BB11FL,0x8BE9C2C51C80F86ALL,1UL,-1L,-1L,-1L},{0x8E2BB11FL,0x8BE9C2C51C80F86ALL,1UL,-1L,-1L,-1L},{0x8E2BB11FL,0x8BE9C2C51C80F86ALL,1UL,-1L,-1L,-1L},{0x8E2BB11FL,0x8BE9C2C51C80F86ALL,1UL,-1L,-1L,-1L}};
    int32_t l_70[1][5][2] = {{{0xA23B15C0L,(-1L)},{(-9L),(-9L)},{(-9L),(-1L)},{0xA23B15C0L,0x67AD2503L},{(-1L),0x67AD2503L}}};
    int32_t l_73[5] = {0xC8B9E1FAL,0xC8B9E1FAL,0xC8B9E1FAL,0xC8B9E1FAL,0xC8B9E1FAL};
    int i, j, k;
lbl_62:
    for (p_12 = 0; (p_12 <= 3); p_12 += 1)
    { 
        return p_12;
    }
    if ((!(0x60L ^ (safe_add_func_int32_t_s_s((l_60 != (1UL == ((l_61[3] , 0xB7A4FD34L) || 0x93EA4B54L))), 1L)))))
    { 
        uint32_t l_72[3];
        const uint32_t l_77 = 0UL;
        int32_t l_92 = 0L;
        int i;
        for (i = 0; i < 3; i++)
            l_72[i] = 0x2E21EF5CL;
        for (p_14.f1 = 0; (p_14.f1 <= 0); p_14.f1 += 1)
        { 
            uint8_t l_71[1];
            uint64_t l_74[5];
            int i;
            for (i = 0; i < 1; i++)
                l_71[i] = 0xCAL;
            for (i = 0; i < 5; i++)
                l_74[i] = 0x0817FF2A7570BAEALL;
            if (p_12)
                goto lbl_62;
            if (l_60)
                goto lbl_62;
            l_74[0] = (((l_73[0] = ((!(safe_mul_func_int16_t_s_s(((((g_38[p_14.f1] ^ (((safe_add_func_uint64_t_u_u(((0xAD79L <= (((g_38[p_14.f1] ^ ((((((safe_sub_func_int8_t_s_s(((l_70[0][1][0] |= (((0x3D0BAECBL <= 4294967295UL) , 0x9BL) == g_15[2][1])) ^ 0xE2L), p_14.f1)) ^ g_38[p_14.f1]) < l_71[0]) <= 0x25C5L) <= p_12) > 0xDAL)) | l_72[0]) , 65533UL)) , 0xF0B8C27A4A205A56LL), 0xFE41CD949914032CLL)) != g_56[0][1][0].f1) | g_38[p_14.f1])) > g_47[0][3][0]) , l_61[3].f2) < g_48.f0), 0x6A34L))) & l_71[0])) | 0xDDL) >= 1L);
        }
        for (p_12 = 0; (p_12 <= 1); p_12 += 1)
        { 
            int i;
            return l_72[p_12];
        }
        if ((((safe_mul_func_int8_t_s_s(l_77, 0x44L)) == g_43) || (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint32_t_u_u(l_77, p_12)) , l_61[2]) , 1UL), g_48.f1)), l_72[0])), l_70[0][2][1])) , 0x6701L) <= 0x815AL)))
        { 
            uint16_t l_91 = 0xE0EBL;
            int32_t l_97 = 1L;
            if (((safe_mod_func_uint16_t_u_u(g_40, 1L)) || (safe_unary_minus_func_uint32_t_u((safe_div_func_uint8_t_u_u(l_91, g_48.f1))))))
            { 
                return g_38[0];
            }
            else
            { 
                l_92 = p_13;
                g_43 = (g_40 ^ (safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((g_98--), (g_38[0] & (safe_sub_func_uint8_t_u_u(p_14.f0, p_13))))) > 0x6756L) <= g_56[0][1][0].f1), 65528UL)));
                return p_12;
            }
        }
        else
        { 
            return g_40;
        }
    }
    else
    { 
        int8_t l_103 = 0x7FL;
        return l_103;
    }
}



static struct S1  func_16(uint32_t  p_17)
{ 
    uint32_t l_20 = 1UL;
    int32_t l_39 = 1L;
    struct S1 l_46 = {18446744073709551606UL,0xC02DL};
    for (p_17 = 0; (p_17 != 6); p_17 = safe_add_func_int32_t_s_s(p_17, 3))
    { 
        int32_t l_27 = 4L;
        if (((1L && p_17) < (l_20 != (safe_lshift_func_int8_t_s_u((((safe_mul_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u(p_17, p_17)) || l_27) == 0x8CDFL), 3L)) , l_20) & l_27), p_17)))))
        { 
            g_47[1][3][0] = ((safe_div_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((g_43 = (safe_mul_func_uint16_t_u_u(p_17, (g_40--)))) & ((p_17 >= ((safe_mod_func_uint32_t_u_u(((p_17 , ((l_46 , g_38[0]) & 0xAA058A13C444C9CALL)) , 0x6A44F34DL), 0xB643C8F4L)) <= 0x361CD5CCFDEF05DELL)) & g_38[0])), p_17)), g_38[0])) , l_27) || 0L), 0x140DL)) , 0x7B2C3CC8L);
            return g_48;
        }
        else
        { 
            for (g_40 = (-18); (g_40 >= 41); g_40 = safe_add_func_uint8_t_u_u(g_40, 5))
            { 
                struct S1 l_54 = {0x1B5826CCL,-5L};
                g_43 ^= (~(((safe_lshift_func_uint16_t_u_u(g_47[1][3][0], (0xCAF6DDF9L == (0UL >= (l_54 , l_54.f1))))) <= l_46.f1) && l_27));
            }
            l_27 ^= 0x76189EFAL;
            g_48 = l_46;
        }
        return g_48;
    }
    return l_46;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_15[i][j], "g_15[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_38[i], "g_38[i]", print_hash_value);

    }
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_47[i][j][k], "g_47[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_56[i][j][k].f0, "g_56[i][j][k].f0", print_hash_value);
                transparent_crc(g_56[i][j][k].f1, "g_56[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_133.f0, "g_133.f0", print_hash_value);
    transparent_crc(g_133.f1, "g_133.f1", print_hash_value);
    transparent_crc(g_133.f2, "g_133.f2", print_hash_value);
    transparent_crc(g_133.f3, "g_133.f3", print_hash_value);
    transparent_crc(g_133.f4, "g_133.f4", print_hash_value);
    transparent_crc(g_133.f5, "g_133.f5", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_237[i], "g_237[i]", print_hash_value);

    }
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_310.f0, "g_310.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_343[i][j], "g_343[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
