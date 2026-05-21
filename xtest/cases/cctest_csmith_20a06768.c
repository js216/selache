// SPDX-License-Identifier: MIT
// cctest_csmith_20a06768.c --- cctest case csmith_20a06768 (csmith seed 547383144)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x335a421f */

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

// Options:   -s 547383144 -o /tmp/csmith_gen_9nj8umtk/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int64_t  f1;
   uint32_t  f2;
   const int32_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

union U1 {
   const uint32_t  f0;
   int8_t * f1;
};


static int32_t g_3 = 0xEF72D4EAL;
static uint16_t g_4 = 0x1328L;
static const int32_t **g_42 = (void*)0;
static uint32_t g_55 = 0x781B5F7AL;
static int32_t g_69 = 0xD3763964L;
static int32_t *g_68 = &g_69;
static int16_t g_83[6] = {0x20CFL,0x20CFL,0x20CFL,0x20CFL,0x20CFL,0x20CFL};
static int64_t g_85 = 0xE7B2E1D86E6AF575LL;
static uint32_t g_87 = 4294967295UL;
static uint32_t g_88 = 4294967295UL;
static union U1 g_122[4][7] = {{{0x50DEC7D6L},{0x1B63BBBFL},{18446744073709551615UL},{1UL},{18446744073709551615UL},{0x0BB50B9AL},{0x0BB50B9AL}},{{18446744073709551615UL},{0x1B63BBBFL},{0x50DEC7D6L},{0x1B63BBBFL},{18446744073709551615UL},{1UL},{18446744073709551615UL}},{{0x7AFBDFE8L},{18446744073709551608UL},{0x1B63BBBFL},{1UL},{0UL},{1UL},{0x1B63BBBFL}},{{18446744073709551615UL},{18446744073709551615UL},{0x046699CBL},{0x50DEC7D6L},{18446744073709551608UL},{0x0BB50B9AL},{0x7AFBDFE8L}}};
static int16_t g_135[7] = {0xFA4EL,0xFA4EL,0xFA4EL,0xFA4EL,0xFA4EL,0xFA4EL,0xFA4EL};
static uint16_t g_138 = 0x0E3EL;
static uint8_t g_160 = 0x53L;
static uint32_t g_175 = 0xD04B031DL;
static int32_t g_205 = (-1L);
static int32_t g_206 = 0xF6A6AC0FL;
static int64_t g_207 = (-6L);
static uint32_t g_208 = 18446744073709551615UL;
static int64_t *g_214 = &g_207;
static uint64_t g_235 = 18446744073709551615UL;
static int32_t **g_243 = (void*)0;
static int32_t ***g_242 = &g_243;
static int32_t **** const g_241 = &g_242;
static int8_t g_283 = 0x20L;
static struct S0 g_291 = {1UL,0xA84DB45C908EF99ELL,6UL,1L,0L};
static struct S0 *g_290 = &g_291;
static struct S0 **g_289 = &g_290;
static struct S0 **g_293 = &g_290;
static int32_t g_323[6] = {0xC1004B78L,(-2L),(-2L),0xC1004B78L,(-2L),0xDD6AA6D1L};
static uint64_t g_326[3] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static union U1 g_344[5][4] = {{{0x1C9E3581L},{0x1C9E3581L},{0x80D821A3L},{0x80D821A3L}},{{0x1C9E3581L},{0x1C9E3581L},{0x80D821A3L},{0x80D821A3L}},{{0x1C9E3581L},{0x1C9E3581L},{0x80D821A3L},{0x80D821A3L}},{{0x1C9E3581L},{0x1C9E3581L},{0x80D821A3L},{0x80D821A3L}},{{0x1C9E3581L},{0x1C9E3581L},{0x80D821A3L},{0x80D821A3L}}};
static union U1 *g_343 = &g_344[3][2];
static int16_t g_442 = 0x6327L;
static int64_t g_443 = 0x4ABCE9D901EFC0FELL;
static uint64_t g_444 = 0x53D4998C55F51B6DLL;
static int32_t g_496 = 0x1A761425L;
static uint32_t *g_527 = &g_55;
static uint32_t **g_526 = &g_527;
static uint8_t g_530 = 1UL;
static int64_t g_534 = 0xE5446FAC342DEE54LL;
static int16_t g_583 = 0xE803L;
static uint32_t g_586 = 1UL;
static const struct S0 * const g_607 = &g_291;
static const struct S0 * const *g_606 = &g_607;
static const struct S0 * const **g_605 = &g_606;
static const struct S0 * const ***g_604 = &g_605;
static int16_t g_616 = 0xF347L;
static int64_t g_617 = 0x1E007FC7DEDEDBB4LL;
static int32_t g_618[1][1][3] = {{{(-8L),(-8L),(-8L)}}};
static uint32_t g_619 = 0x8397DE20L;
static int32_t *g_622 = &g_3;
static struct S0 *g_639 = &g_291;
static struct S0 *g_640 = &g_291;
static struct S0 ** const g_638[5] = {&g_640,&g_640,&g_640,&g_640,&g_640};
static struct S0 ** const *g_637 = &g_638[3];
static struct S0 ** const **g_636 = &g_637;
static struct S0 ** const **g_641 = &g_637;
static struct S0 *** const *g_644 = (void*)0;
static const uint64_t g_657 = 0x23441F0301CE74B0LL;
static int8_t g_689 = 1L;
static int32_t g_690 = 2L;
static uint16_t g_731 = 65534UL;
static struct S0 ***g_747[1][2][4] = {{{&g_293,&g_289,&g_293,&g_293},{&g_289,&g_289,(void*)0,&g_289}}};
static struct S0 ****g_746[4] = {&g_747[0][0][3],&g_747[0][0][3],&g_747[0][0][3],&g_747[0][0][3]};
static uint32_t g_779[4] = {0x4403E511L,0x4403E511L,0x4403E511L,0x4403E511L};
static uint8_t g_826 = 0x9DL;
static int16_t g_844 = 0x0F3BL;
static int32_t g_845 = 0x92C05A8AL;
static uint8_t g_846[4][2] = {{0x5AL,0x5AL},{0x5AL,0x5AL},{0x5AL,0x5AL},{0x5AL,0x5AL}};
static int64_t g_850[4] = {0x3F346028D9FD7A8BLL,0x3F346028D9FD7A8BLL,0x3F346028D9FD7A8BLL,0x3F346028D9FD7A8BLL};
static int8_t g_851 = 0xC3L;
static int64_t g_852[2] = {1L,1L};
static uint32_t g_854 = 0x176E7DEBL;
static int16_t g_910 = 0L;
static int16_t g_921[6] = {0x8C9AL,0x89EFL,0x8C9AL,0x8C9AL,0x89EFL,0x8C9AL};
static int16_t g_944 = 0x103FL;
static int8_t g_945 = 0x94L;
static uint16_t g_947 = 1UL;
static int8_t g_960 = 0x30L;
static uint8_t g_1010 = 0x64L;
static uint64_t g_1035 = 18446744073709551614UL;
static uint16_t *g_1061 = (void*)0;
static uint16_t **g_1060 = &g_1061;
static int64_t g_1064[4][5][1] = {{{0x56AE27FC33A78F87LL},{0xC80E406AAA01F182LL},{0x56AE27FC33A78F87LL},{0xC80E406AAA01F182LL},{0x56AE27FC33A78F87LL}},{{0xC80E406AAA01F182LL},{0x56AE27FC33A78F87LL},{0xC80E406AAA01F182LL},{0x56AE27FC33A78F87LL},{0xC80E406AAA01F182LL}},{{0x56AE27FC33A78F87LL},{0xC80E406AAA01F182LL},{0x56AE27FC33A78F87LL},{0xC80E406AAA01F182LL},{0x56AE27FC33A78F87LL}},{{0xC80E406AAA01F182LL},{0x56AE27FC33A78F87LL},{0xC80E406AAA01F182LL},{0x56AE27FC33A78F87LL},{0xC80E406AAA01F182LL}}};
static int16_t g_1065 = (-1L);
static int32_t g_1066[3][2][3] = {{{0x243E11C1L,0x9ADB8B9CL,0x9ADB8B9CL},{0x52F7F92BL,0x9F205570L,0x9F205570L}},{{0x243E11C1L,0x9ADB8B9CL,0x9ADB8B9CL},{0x52F7F92BL,0x9F205570L,0x9F205570L}},{{0x243E11C1L,0x9ADB8B9CL,0x9ADB8B9CL},{0x52F7F92BL,0x9F205570L,0x9F205570L}}};
static int16_t g_1067 = 0x2F99L;
static uint64_t g_1069 = 0x2855D3D4C7C3467ALL;
static int64_t g_1104 = 2L;
static uint8_t g_1105 = 5UL;



static uint16_t  func_1(void);
static int8_t  func_14(const uint32_t  p_15, int32_t * p_16, const int32_t  p_17, int64_t  p_18);
static int32_t * func_20(int32_t  p_21, uint16_t  p_22, uint32_t  p_23, int64_t  p_24, union U1  p_25);
static uint8_t  func_26(int16_t  p_27, int32_t * p_28, int64_t  p_29);
static int16_t  func_32(int32_t * p_33);
static int32_t * const * const  func_34(int32_t  p_35, int32_t ** p_36, const int32_t ** p_37, uint8_t  p_38);
static uint8_t  func_43(const uint32_t  p_44, union U1  p_45, int32_t  p_46);
static const uint32_t  func_47(uint16_t  p_48);




static uint16_t  func_1(void)
{ 
    int32_t *l_2[7][3] = {{&g_3,&g_3,&g_3},{(void*)0,&g_3,&g_3},{&g_3,&g_3,&g_3},{(void*)0,&g_3,&g_3},{&g_3,&g_3,&g_3},{(void*)0,&g_3,&g_3},{&g_3,&g_3,&g_3}};
    int16_t l_7 = 0xEC17L;
    const int8_t l_19 = 0x57L;
    uint64_t l_262 = 0x917B79CEA0C1213BLL;
    uint16_t l_612 = 0UL;
    uint32_t l_613[2][7] = {{0x864AFC71L,0UL,0x864AFC71L,0x1A7AE086L,0x1A7AE086L,0x864AFC71L,0UL},{0x1A7AE086L,0UL,0x8380382EL,0x8380382EL,0UL,0x1A7AE086L,0UL}};
    struct S0 ** const *l_634 = &g_293;
    struct S0 ** const **l_633 = &l_634;
    struct S0 ***l_643 = &g_293;
    struct S0 *** const *l_642 = &l_643;
    const uint32_t l_675 = 1UL;
    uint32_t ***l_716 = &g_526;
    int16_t l_758 = 0L;
    int32_t ****l_808 = &g_242;
    int32_t *****l_807 = &l_808;
    uint16_t l_819 = 0UL;
    uint16_t l_912 = 0x0C8CL;
    uint32_t ***l_931 = &g_526;
    int32_t *l_954 = (void*)0;
    uint16_t l_976 = 0xB3C1L;
    uint8_t l_1003 = 255UL;
    int8_t l_1039[5] = {(-9L),(-9L),(-9L),(-9L),(-9L)};
    int64_t l_1046 = 1L;
    int32_t l_1094 = (-3L);
    uint32_t l_1097 = 8UL;
    int i, j;
    g_4++;
    if (l_7)
    { 
        return g_3;
    }
    else
    { 
        int32_t *l_261 = &g_3;
        struct S0 ** const ***l_635[1][6];
        uint64_t l_715 = 0x9F1CB1B95DD95DD5LL;
        int16_t *l_738[5][7][2] = {{{&g_83[2],&g_83[0]},{&g_583,&g_616},{&g_583,&g_83[0]},{&g_83[2],&g_83[4]},{&g_83[0],&g_83[2]},{&g_83[4],&g_83[0]},{&g_616,&g_583}},{{&g_583,&g_135[2]},{&g_83[4],&g_83[4]},{&g_135[2],&g_83[4]},{&g_83[4],&g_135[2]},{&g_583,&g_583},{&g_616,&g_83[0]},{&g_83[4],&g_83[2]}},{{&g_83[0],&g_83[4]},{&g_83[2],&g_83[0]},{&g_583,&g_616},{&g_583,&g_83[0]},{&g_83[2],&g_83[4]},{&g_83[0],&g_83[2]},{&g_83[4],&g_83[0]}},{{&g_616,&g_583},{&g_583,&g_442},{(void*)0,&g_616},{&g_442,&g_616},{(void*)0,&g_442},{&g_135[2],&g_135[2]},{&g_616,&g_83[2]}},{{(void*)0,&g_83[0]},{&g_83[2],&g_616},{&g_442,&g_83[2]},{&g_135[2],&g_616},{&g_135[2],&g_83[2]},{&g_442,&g_616},{&g_83[2],&g_83[0]}}};
        int32_t l_775[6] = {0x18ED5CF1L,0x18ED5CF1L,0x670621BFL,0x18ED5CF1L,0x18ED5CF1L,0x670621BFL};
        int64_t l_797 = 0xE788E37F3EB60ABFLL;
        const int32_t ***l_814 = &g_42;
        const int32_t ****l_813 = &l_814;
        const int32_t *****l_812[1][4] = {{&l_813,&l_813,&l_813,&l_813}};
        int64_t l_879 = (-5L);
        uint16_t l_892 = 65535UL;
        uint64_t *l_914[5];
        int16_t l_957 = 1L;
        uint16_t l_963 = 1UL;
        uint32_t ***l_970[6][4][5] = {{{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526}},{{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526}},{{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526}},{{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526}},{{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526}},{{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526},{&g_526,&g_526,&g_526,&g_526,&g_526}}};
        int16_t l_995[3][7][2] = {{{7L,0x730DL},{0x295BL,0x295BL},{0x730DL,7L},{0x1436L,7L},{0x730DL,0x295BL},{0x295BL,0x730DL},{7L,0x1436L}},{{7L,0x730DL},{0x295BL,0x295BL},{0x730DL,7L},{0x1436L,7L},{0x730DL,0x295BL},{0x295BL,0x730DL},{7L,0x1436L}},{{7L,0x730DL},{0x295BL,0x295BL},{0x730DL,7L},{0x1436L,0x730DL},{0x1436L,0x4E1BL},{0x4E1BL,0x1436L},{0x730DL,(-10L)}}};
        union U1 l_999 = {18446744073709551611UL};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_635[i][j] = (void*)0;
        }
        for (i = 0; i < 5; i++)
            l_914[i] = &l_262;
        for (g_4 = 0; (g_4 > 33); g_4++)
        { 
            int16_t *l_258[2];
            int32_t l_259 = 0L;
            int32_t l_260 = 0x0ABCBBCDL;
            union U1 l_278 = {1UL};
            uint32_t l_590 = 18446744073709551613UL;
            struct S0 *l_593 = (void*)0;
            uint64_t *l_610[1];
            uint64_t l_625 = 0x5C154F1D85A6FBF1LL;
            int i;
            for (i = 0; i < 2; i++)
                l_258[i] = &g_135[4];
            for (i = 0; i < 1; i++)
                l_610[i] = (void*)0;
            for (l_7 = 0; l_7 < 7; l_7 += 1)
            {
                for (g_3 = 0; g_3 < 3; g_3 += 1)
                {
                    l_2[l_7][g_3] = &g_3;
                }
            }
        }
    }
    for (g_586 = 0; (g_586 != 39); g_586 = safe_add_func_uint32_t_u_u(g_586, 1))
    { 
        int8_t l_1008 = 0xF2L;
        int32_t l_1009[1][6][1] = {{{0x6BA17069L},{(-1L)},{0x6BA17069L},{(-1L)},{0x6BA17069L},{(-1L)}}};
        uint32_t *l_1017 = &g_88;
        int64_t l_1028 = 0x768C554E4795BA80LL;
        int32_t *l_1053 = (void*)0;
        uint64_t l_1057 = 1UL;
        int8_t l_1112 = 9L;
        union U1 **l_1123[7][3] = {{&g_343,&g_343,(void*)0},{&g_343,&g_343,(void*)0},{&g_343,&g_343,&g_343},{(void*)0,&g_343,(void*)0},{(void*)0,&g_343,&g_343},{&g_343,(void*)0,(void*)0},{&g_343,(void*)0,&g_343}};
        int i, j, k;
        g_1010++;
    }
    (*g_622) ^= (safe_lshift_func_int16_t_s_s((g_852[1] == ((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((*g_214) = (~(g_88 && 7L))) & ((void*)0 != &g_343)), (+g_138))), 2)) == (*g_527))), 14));
    return g_1069;
}



static int8_t  func_14(const uint32_t  p_15, int32_t * p_16, const int32_t  p_17, int64_t  p_18)
{ 
    union U1 l_399[4][1] = {{{5UL}},{{5UL}},{{5UL}},{{5UL}}};
    uint32_t l_406 = 0x2F08A162L;
    uint8_t *l_413 = &g_160;
    struct S0 **l_458 = &g_290;
    uint32_t l_498 = 18446744073709551611UL;
    int32_t **l_509[6] = {&g_68,&g_68,&g_68,&g_68,&g_68,&g_68};
    uint8_t l_528 = 0x2BL;
    int i, j;
    for (g_160 = 0; (g_160 >= 15); g_160 = safe_add_func_uint16_t_u_u(g_160, 3))
    { 
        struct S0 ***l_407 = (void*)0;
        struct S0 ****l_408 = &l_407;
        int32_t l_436 = 0x01228ECAL;
        struct S0 **l_456 = &g_290;
        int8_t *l_460 = &g_283;
        uint32_t l_461 = 0UL;
        int32_t *l_466 = &g_291.f4;
        uint16_t l_467 = 1UL;
        int16_t l_535 = 2L;
        int32_t l_536 = 6L;
        int32_t l_579 = 0x6BF1FCE5L;
        int32_t l_581 = 0xB74000F1L;
        int32_t l_582 = 0x567DBCE3L;
        int32_t l_585 = 0xB87E373AL;
        (*p_16) = ((p_17 >= (safe_rshift_func_uint16_t_u_u(p_15, ((1UL | (l_399[3][0] , (((p_18 |= ((safe_div_func_uint16_t_u_u(0xB0BCL, (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(251UL, p_15)), l_399[3][0].f0)))) || l_406)) , p_15) && 9UL))) && 0xF27FL)))) <= g_291.f0);
        if ((((0xF6A51E5CL >= l_399[3][0].f0) , &g_289) != ((*l_408) = l_407)))
        { 
            union U1 * const l_433 = &l_399[0][0];
            int32_t *l_435 = (void*)0;
            int32_t l_440 = 0xA5402AA8L;
            struct S0 l_457 = {0x784EC2A0L,0x33338E9F50F9E5B1LL,0x184A4C1BL,0x28938DB9L,1L};
            const uint32_t l_504 = 18446744073709551615UL;
            for (g_85 = 0; (g_85 != (-6)); g_85 = safe_sub_func_uint16_t_u_u(g_85, 6))
            { 
                int32_t l_422 = (-1L);
                int16_t *l_430 = &g_135[2];
                union U1 **l_434 = &g_343;
                struct S0 **l_454[4][1][3] = {{{&g_290,(void*)0,&g_290}},{{&g_290,&g_290,(void*)0}},{{&g_290,(void*)0,(void*)0}},{{(void*)0,&g_290,&g_290}}};
                int32_t l_468 = 0xC037808AL;
                int i, j, k;
                (*p_16) = ((safe_add_func_int16_t_s_s(g_175, ((&g_160 != l_413) && (-8L)))) , ((&g_55 == &g_88) & (&g_242 != &g_242)));
                if ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((l_399[3][0].f0 , (l_422 , ((((+((((safe_mul_func_uint16_t_u_u(p_18, (safe_lshift_func_int16_t_s_u(((*l_430) ^= 0xD2FDL), 12)))) && (safe_rshift_func_int8_t_s_s(0L, 3))) ^ (l_433 == ((*l_434) = &g_344[3][2]))) >= g_69)) & (*g_214)) , l_435) == (void*)0))) , l_422), l_436)), 0x7BCDL)), p_17)))
                { 
                    return p_15;
                }
                else
                { 
                    int32_t *l_437 = &g_69;
                    int32_t *l_438 = &g_69;
                    int32_t *l_439 = &g_69;
                    int32_t *l_441[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_441[i] = &g_291.f4;
                    ++g_444;
                    (*l_434) = &g_122[3][0];
                    (*l_439) = (((p_16 == (void*)0) && (*p_16)) != 0x4BFF7155L);
                    if ((*p_16))
                        break;
                }
                if (((safe_rshift_func_uint16_t_u_u(((void*)0 != &l_436), 1)) == l_422))
                { 
                    struct S0 ***l_455 = (void*)0;
                    int8_t *l_459 = &g_283;
                    int32_t *l_462 = &l_436;
                    (*l_462) = ((safe_add_func_uint16_t_u_u((((*l_430) = (4294967295UL | ((safe_add_func_int32_t_s_s((0xD8BAL != (((!(l_461 &= ((((*p_16) = (0x710B6FDA832B1C84LL >= ((l_456 = l_454[3][0][2]) == (l_457 , l_458)))) || (l_459 == l_460)) != l_399[3][0].f0))) | p_15) <= 4294967295UL)), l_436)) , (*p_16)))) < 0xDF1BL), 0x4E84L)) <= 0UL);
                    (*l_462) = 0L;
                    (*l_458) = (*g_289);
                    p_16 = p_16;
                }
                else
                { 
                    int32_t **l_463 = &l_435;
                    int32_t **l_464 = (void*)0;
                    int32_t **l_465[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_465[i] = &g_68;
                    l_466 = (p_16 = ((*l_463) = p_16));
                    (*l_463) = (void*)0;
                }
                if (((*p_16) = l_467))
                { 
                    uint64_t l_469 = 0x799C5781C0D582A1LL;
                    ++l_469;
                    (*p_16) ^= l_422;
                }
                else
                { 
                    const uint32_t * const l_472 = &l_457.f0;
                    uint16_t *l_495 = &g_138;
                    struct S0 **l_497 = &g_290;
                    int32_t l_499 = 3L;
                    (*l_466) |= (p_16 == l_472);
                    (*l_466) = 0L;
                    (*p_16) = ((((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((((safe_mod_func_uint32_t_u_u((!((((safe_mul_func_int16_t_s_s((l_457 , (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((5UL | ((!((!((((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((&g_55 != (void*)0), ((*l_430) = (safe_rshift_func_uint16_t_u_u(((+l_406) , ((*l_495) = 8UL)), (g_496 &= g_208)))))) | g_442), p_17)) >= 4294967286UL) , l_497) == (void*)0)) , l_498)) <= (-1L))), g_291.f4)), p_18))), 0x8F16L)) , (*p_16)) < l_422) != 0x5A1C0EE6L)), (*l_466))) != l_499) || 0xE1B9E65F1AFBDEDDLL) , g_175) >= l_422), p_15)), 4)) != (*p_16)) <= g_83[0]) , (*l_466));
                    (*l_466) &= (safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(p_15, ((void*)0 != p_16))), l_504));
                    (*l_466) = (safe_rshift_func_uint8_t_u_u((((((((*g_242) = (**g_241)) != (((((((((safe_rshift_func_int16_t_s_s((l_509[3] == (void*)0), 15)) , 6UL) < (safe_sub_func_uint32_t_u_u((((*l_466) & (safe_lshift_func_uint16_t_u_s(((safe_div_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((0x5743E36CL <= ((p_17 & p_18) , 0xFCD12149L)))), p_15)) >= 4294967295UL), 6))) , 0x99D01EAAL), 4294967295UL))) < l_422) || p_15) , (-2L)) , (void*)0) == l_466) , &p_16)) >= g_206) != (-6L)) < p_18) & 0x09A9L), p_15));
                }
            }
            return (*l_466);
        }
        else
        { 
            uint32_t *l_523 = &g_175;
            uint32_t **l_522[7][1] = {{&l_523},{&l_523},{&l_523},{&l_523},{&l_523},{&l_523},{&l_523}};
            uint32_t ***l_524 = (void*)0;
            uint32_t ***l_525[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t *l_529 = &g_530;
            uint16_t *l_533 = &g_138;
            struct S0 *l_545[4][1][2] = {{{&g_291,&g_291}},{{&g_291,&g_291}},{{&g_291,&g_291}},{{&g_291,&g_291}}};
            int32_t l_549 = 3L;
            int32_t l_577 = 0x4D2C2721L;
            int32_t l_578 = 0xF1E78B46L;
            int32_t l_580 = (-1L);
            int32_t l_584 = 0L;
            int i, j, k;
            (*p_16) = (l_536 = (safe_add_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u((((*l_529) &= (l_528 = (+((g_526 = l_522[0][0]) == &g_527)))) != 0L), 5)) , (-8L)), (safe_mul_func_uint8_t_u_u((((((*l_533) = 0UL) & (0xC6D9L & g_534)) , (*p_16)) || (*g_527)), l_535)))));
            (*p_16) ^= ((void*)0 != &l_407);
            for (g_291.f1 = 0; (g_291.f1 == (-20)); g_291.f1--)
            { 
                int8_t *l_548[7][5] = {{&g_283,&g_283,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,(void*)0,&g_283},{&g_283,(void*)0,(void*)0,&g_283,(void*)0},{&g_283,&g_283,&g_283,&g_283,&g_283},{(void*)0,&g_283,(void*)0,(void*)0,&g_283},{&g_283,(void*)0,(void*)0,&g_283,(void*)0},{&g_283,&g_283,&g_283,&g_283,&g_283}};
                int32_t l_570[6];
                uint32_t l_575 = 0xE27CAD94L;
                int i, j;
                for (i = 0; i < 6; i++)
                    l_570[i] = 1L;
                (*l_466) = (*p_16);
                for (l_467 = 0; (l_467 <= 5); l_467 += 1)
                { 
                    int i;
                    (*l_466) &= (safe_rshift_func_int16_t_s_s(0x38D3L, g_83[l_467]));
                    p_16 = p_16;
                }
                (*l_466) = ((p_18 <= (safe_lshift_func_int8_t_s_u(0x0FL, 4))) >= (safe_mul_func_uint8_t_u_u((((*g_293) = l_545[1][0][0]) != l_545[0][0][0]), (safe_mod_func_int8_t_s_s((l_413 == l_548[4][4]), l_549)))));
                for (l_436 = 0; (l_436 >= 3); l_436++)
                { 
                    uint64_t l_576 = 7UL;
                    (*p_16) = (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_17, 255UL)), 0x24L));
                    (*p_16) = ((((*l_466) = ((safe_sub_func_uint16_t_u_u(0x2D4AL, (safe_rshift_func_uint8_t_u_s(((((safe_mul_func_int8_t_s_s(((((((safe_sub_func_uint8_t_u_u(p_15, 0x98L)) >= ((safe_mul_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((((**g_293) , (safe_mul_func_uint16_t_u_u((l_570[2] != (safe_mul_func_uint8_t_u_u(p_17, ((((safe_div_func_uint16_t_u_u(((*g_527) != 0xFF903EC2L), p_17)) & l_575) & 18446744073709551606UL) >= p_18)))), g_3))) ^ p_15) && (*l_466)), 7L)) < 0xE4L), 0x38L)) == 0x16L)) | l_549) && 0x9EDBCD45L) & 1UL) >= (-1L)), 0xBAL)) ^ l_570[5]) >= l_576) <= p_15), p_17)))) , 252UL)) & l_549) , 1L);
                }
                ++g_586;
            }
        }
    }
    return p_18;
}



static int32_t * func_20(int32_t  p_21, uint16_t  p_22, uint32_t  p_23, int64_t  p_24, union U1  p_25)
{ 
    int64_t l_281[7] = {0x1FD4621DE0E8798ELL,0xB34EFDB948781A7FLL,0x1FD4621DE0E8798ELL,0x1FD4621DE0E8798ELL,0xB34EFDB948781A7FLL,0x1FD4621DE0E8798ELL,0x1FD4621DE0E8798ELL};
    int8_t *l_282 = &g_283;
    uint8_t *l_284 = &g_160;
    struct S0 **l_292[4];
    struct S0 ***l_294 = &l_292[0];
    uint16_t *l_295 = &g_138;
    int32_t *l_296 = &g_69;
    union U1 l_300 = {0UL};
    uint8_t l_310 = 1UL;
    int32_t ****l_338 = &g_242;
    int32_t *****l_337 = &l_338;
    int32_t l_340 = 0xEDD21812L;
    int32_t *l_372 = &g_205;
    int16_t *l_391[2];
    int8_t l_392 = 0x36L;
    int i;
    for (i = 0; i < 4; i++)
        l_292[i] = &g_290;
    for (i = 0; i < 2; i++)
        l_391[i] = &g_83[4];
lbl_328:
    (*l_296) &= ((safe_add_func_int8_t_s_s(((*l_282) = l_281[6]), ((*l_284) = (p_23 ^ 65532UL)))) && ((*l_295) = ((safe_mul_func_int16_t_s_s((g_175 , 0x93F1L), (safe_add_func_int32_t_s_s((g_289 != ((*l_294) = (g_293 = l_292[2]))), p_22)))) == l_281[6])));
    for (g_88 = 0; (g_88 <= 6); g_88 += 1)
    { 
        int64_t l_301 = 0L;
        int32_t *l_302 = &g_291.f4;
        int16_t l_307 = 0x56AFL;
        int32_t l_345 = 6L;
        uint8_t l_348[1];
        uint32_t *l_380 = &g_175;
        union U1 *l_381[6] = {&l_300,&l_300,&l_300,&l_300,&l_300,&l_300};
        int64_t *l_382 = &l_281[6];
        int i;
        for (i = 0; i < 1; i++)
            l_348[i] = 0x3FL;
        (*l_302) |= (((*g_214) && (l_301 |= (+(safe_sub_func_int16_t_s_s((*l_296), (&g_290 == (l_300 , ((*l_294) = &g_290)))))))) , 0x66DA58FEL);
        if ((((safe_rshift_func_int16_t_s_u((((safe_mod_func_uint16_t_u_u(g_135[2], (-8L))) & (l_307 | (*l_296))) , (safe_mul_func_uint8_t_u_u(((((((*l_302) , (0x68FEL || ((((*l_296) <= l_310) , p_24) >= (*l_296)))) <= 0UL) , &l_310) != &l_310) >= (*l_302)), g_69))), 6)) || (*l_296)) >= (*l_296)))
        { 
            uint32_t *l_318[6][6] = {{&g_175,&g_291.f0,&g_175,&g_291.f0,&g_175,&g_291.f0},{&g_175,&g_291.f0,&g_175,&g_291.f0,&g_175,&g_291.f0},{&g_175,&g_291.f0,&g_175,&g_291.f0,&g_175,&g_291.f0},{&g_175,&g_291.f0,&g_175,&g_291.f0,&g_175,&g_291.f0},{&g_175,&g_291.f0,&g_175,&g_291.f0,&g_175,&g_291.f0},{&g_175,&g_291.f0,&g_175,&g_291.f0,&g_175,&g_291.f0}};
            int32_t l_324 = 5L;
            uint8_t *l_325[2][4] = {{&l_310,&l_310,&l_310,&l_310},{&l_310,&l_310,&l_310,&l_310}};
            int32_t l_327[7] = {0xB3C0CD35L,0xB3C0CD35L,0xB3C0CD35L,0xB3C0CD35L,0xB3C0CD35L,0xB3C0CD35L,0xB3C0CD35L};
            int32_t *l_329[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_329[i] = &g_205;
            l_327[1] = ((*l_296) = (safe_unary_minus_func_uint64_t_u(((safe_rshift_func_int8_t_s_u(((safe_sub_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(((*l_302) >= (g_175 = g_207)), (g_326[1] = (p_22 & (g_206 || (((safe_sub_func_uint8_t_u_u((*l_302), (g_323[5] ^= ((*l_284)++)))) != g_122[3][0].f0) <= (l_324 &= (g_291.f2 | 0UL)))))))) | 0x705CB8CD818A9741LL), (*l_296))) , (-1L)), p_23)) >= 0x25L))));
            if (l_301)
                goto lbl_328;
            l_329[2] = &l_324;
        }
        else
        { 
            int32_t **l_330 = &g_68;
            int32_t *****l_339 = &l_338;
            union U1 *l_342[4] = {&g_122[1][5],&g_122[1][5],&g_122[1][5],&g_122[1][5]};
            union U1 **l_341[4][6] = {{&l_342[3],(void*)0,(void*)0,&l_342[3],&l_342[3],(void*)0},{&l_342[3],&l_342[3],(void*)0,(void*)0,&l_342[3],&l_342[3]},{&l_342[3],(void*)0,(void*)0,&l_342[3],&l_342[3],(void*)0},{&l_342[3],&l_342[3],(void*)0,(void*)0,&l_342[3],&l_342[3]}};
            int32_t *l_346 = (void*)0;
            int32_t *l_347[7];
            int i, j;
            for (i = 0; i < 7; i++)
                l_347[i] = (void*)0;
            (*l_330) = l_302;
            (**l_330) = (safe_add_func_int8_t_s_s(((**l_330) == ((((*l_302) ^ (safe_add_func_uint8_t_u_u(0x8AL, (((0UL ^ (safe_add_func_uint64_t_u_u((((p_24 , 0x6FL) | ((*l_284) = (**l_330))) , g_208), (*g_214)))) | (**l_330)) , g_323[5])))) , l_337) == l_339)), l_340));
            g_343 = &g_122[3][0];
            if (g_175)
                goto lbl_328;
            l_348[0]--;
        }
        for (l_307 = 4; (l_307 >= 0); l_307 -= 1)
        { 
            int16_t l_353 = 0xC104L;
            uint16_t l_356 = 65526UL;
            int32_t *l_373 = &g_205;
            if ((safe_rshift_func_int16_t_s_s((p_24 , ((l_353 , (safe_rshift_func_uint8_t_u_u(l_356, p_25.f0))) == p_25.f0)), 12)))
            { 
                int32_t * const l_359 = &l_345;
                (*l_302) ^= (((safe_div_func_uint64_t_u_u((l_359 == (void*)0), (safe_lshift_func_int16_t_s_s(p_21, 4)))) <= p_25.f0) ^ ((safe_add_func_int16_t_s_s((((((*g_343) , p_24) <= (+(~(safe_lshift_func_uint8_t_u_s(p_25.f0, 1))))) >= (*l_359)) < l_356), 0x3027L)) == (*l_359)));
            }
            else
            { 
                uint32_t *l_368 = &g_87;
                int32_t ***** const l_369 = &l_338;
                uint64_t *l_370[7][1];
                int32_t *l_371 = &g_205;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_370[i][j] = &g_326[1];
                }
                (*l_371) ^= ((((*l_296) |= (((l_368 == ((l_369 != (void*)0) , (void*)0)) < ((*l_302) = (0UL > (p_25 , ((p_22 | g_135[2]) <= 254UL))))) < g_291.f3)) ^ 0xC81A5533L) == p_25.f0);
                l_373 = l_372;
            }
        }
        (*l_372) ^= ((*l_302) & (safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((((((*l_380) = g_83[4]) | (l_381[5] != &p_25)) && (&p_24 != l_382)) <= ((safe_add_func_int16_t_s_s(g_135[0], g_88)) , (*l_296))), (*l_302))) , g_291.f0), p_22)) && (*l_302)), (*l_302))));
    }
    (*l_296) = (((safe_rshift_func_uint16_t_u_s(((*l_295) = ((l_392 &= (safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((0x954B93C2A1438EB3LL && p_22), 0UL)) >= (*l_372)), 0L))) < p_21)), 7)) && (safe_sub_func_int8_t_s_s((p_23 , p_24), 0xC6L))) || (*l_296));
    return l_372;
}



static uint8_t  func_26(int16_t  p_27, int32_t * p_28, int64_t  p_29)
{ 
    int64_t l_266[4][1][2] = {{{0xB53869009A4825EFLL,0x2F3691EA250765B2LL}},{{0xB53869009A4825EFLL,0xB53869009A4825EFLL}},{{0x2F3691EA250765B2LL,0xB53869009A4825EFLL}},{{0xB53869009A4825EFLL,0x2F3691EA250765B2LL}}};
    uint32_t *l_271 = &g_88;
    const uint64_t l_276 = 0x296F131FA9AA87F7LL;
    int32_t l_277[4][4] = {{0x7CDA25B2L,0x7CDA25B2L,0x7CDA25B2L,0x7CDA25B2L},{0x7CDA25B2L,0x7CDA25B2L,0x7CDA25B2L,0x7CDA25B2L},{0x7CDA25B2L,0x7CDA25B2L,0x7CDA25B2L,0x7CDA25B2L},{0x7CDA25B2L,0x7CDA25B2L,0x7CDA25B2L,0x7CDA25B2L}};
    int i, j, k;
    l_277[0][3] = ((safe_sub_func_int16_t_s_s((((!l_266[3][0][0]) > (safe_mod_func_uint16_t_u_u((l_266[1][0][0] ^ (((248UL | (safe_sub_func_uint8_t_u_u((l_271 != (void*)0), ((((safe_sub_func_int32_t_s_s(0x7AD8558DL, ((safe_sub_func_int64_t_s_s(0x537C15CB5FD59EA4LL, l_266[3][0][1])) == l_266[3][0][0]))) & 65526UL) && g_4) == g_175)))) , p_27) || l_276)), 65526UL))) == g_206), 0xB3FFL)) , 0L);
    return g_4;
}



static int16_t  func_32(int32_t * p_33)
{ 
    uint32_t l_39 = 4294967288UL;
    int32_t *l_41 = &g_3;
    int32_t **l_40[2];
    union U1 l_89 = {18446744073709551615UL};
    int32_t * const *l_256 = &l_41;
    int32_t * const **l_255[3];
    int32_t * const **l_257 = &l_256;
    int i;
    for (i = 0; i < 2; i++)
        l_40[i] = &l_41;
    for (i = 0; i < 3; i++)
        l_255[i] = &l_256;
    (*l_257) = func_34(l_39, l_40[1], g_42, func_43(func_47(g_3), l_89, g_4));
    return g_85;
}



static int32_t * const * const  func_34(int32_t  p_35, int32_t ** p_36, const int32_t ** p_37, uint8_t  p_38)
{ 
    int16_t l_144 = 0L;
    struct S0 l_157 = {0UL,0x6B581468E88EED36LL,0UL,0x8C377FA4L,5L};
    int32_t *l_158 = &g_69;
    uint8_t *l_159 = &g_160;
    int64_t *l_161[4] = {&g_85,&g_85,&g_85,&g_85};
    int32_t l_162[1][4][4] = {{{(-1L),0xD32FAA63L,0xD32FAA63L,(-1L)},{(-1L),0xD32FAA63L,0xD32FAA63L,(-1L)},{(-1L),0xD32FAA63L,0xD32FAA63L,(-1L)},{(-1L),0xD32FAA63L,0xD32FAA63L,(-1L)}}};
    int32_t l_163[6][5] = {{1L,1L,1L,1L,1L},{0xA1EF9796L,0L,0xA1EF9796L,0L,0xA1EF9796L},{1L,1L,1L,1L,1L},{0xA1EF9796L,0L,0xA1EF9796L,0L,0xA1EF9796L},{1L,1L,1L,1L,1L},{0xA1EF9796L,0L,0xA1EF9796L,0L,0xA1EF9796L}};
    uint16_t *l_165 = &g_138;
    int64_t *l_213 = &g_85;
    union U1 l_250 = {0x2BBB11FCL};
    int i, j, k;
    l_163[4][3] |= (l_144 , ((safe_div_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s((p_38 <= 1UL), 2)) == (safe_rshift_func_uint8_t_u_s((p_38 && ((l_162[0][1][0] ^= (g_85 &= ((safe_mod_func_int16_t_s_s((249UL == (((safe_div_func_uint8_t_u_u(((*l_159) = (((*l_158) = (p_38 || (l_157 , l_157.f0))) & p_38)), 0xA3L)) || g_4) , (*l_158))), p_38)) || p_35))) <= 0x93ECD75B2834994DLL)), 6))), 12)) != 1L) < (**p_36)) != g_135[2]), 253UL)) < p_38));
    if ((*l_158))
    { 
        int32_t l_164 = 1L;
        const int32_t *****l_166[3];
        int32_t l_171[3];
        int32_t l_201 = 4L;
        uint16_t l_202[1][7][6] = {{{0x248FL,3UL,0UL,3UL,0x248FL,0x9BFDL},{1UL,3UL,0xBE49L,1UL,0UL,0x7D0BL},{1UL,0UL,0x7D0BL,3UL,3UL,0x7D0BL},{0x248FL,0x248FL,0xBE49L,7UL,3UL,0x9BFDL},{3UL,0UL,0UL,7UL,0UL,0xBE49L},{0x248FL,3UL,0UL,3UL,0x248FL,0x9BFDL},{1UL,3UL,0xBE49L,1UL,0UL,0x7D0BL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_166[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_171[i] = 2L;
        (*l_158) = l_164;
        for (l_164 = 2; (l_164 <= 6); l_164 += 1)
        { 
            int16_t l_170 = 0xBCE0L;
            int32_t l_194 = 0x752400A8L;
            int32_t l_199[4] = {0xBD1A66B9L,0xBD1A66B9L,0xBD1A66B9L,0xBD1A66B9L};
            int i;
            if (((p_38 , (l_165 = &g_4)) != (void*)0))
            { 
                (*p_36) = &l_163[4][0];
                for (g_88 = 0; g_88 < 6; g_88 += 1)
                {
                    g_83[g_88] = (-10L);
                }
            }
            else
            { 
                int32_t *l_167 = &l_163[3][2];
                int32_t *l_168 = &l_163[2][3];
                int32_t *l_169 = (void*)0;
                int32_t *l_172 = (void*)0;
                int32_t *l_173 = &l_163[4][3];
                int32_t *l_174 = (void*)0;
                const uint64_t l_193[7] = {0x4C3A41A2CE7F336FLL,18446744073709551615UL,18446744073709551615UL,0x4C3A41A2CE7F336FLL,18446744073709551615UL,18446744073709551615UL,0x4C3A41A2CE7F336FLL};
                int32_t l_198 = 0x9F76DDF6L;
                int32_t l_200[7][6][3] = {{{(-1L),0x9A4FA59AL,(-1L)},{0x7CB99A68L,(-1L),0x4B4CCDFEL},{0x5A47AEA7L,0x287A9B70L,0x5A47AEA7L},{0x7CB99A68L,0x4B4CCDFEL,0x2C939D4BL},{(-1L),0x287A9B70L,(-1L)},{(-1L),(-1L),0x2C939D4BL}},{{0x5A47AEA7L,0x9A4FA59AL,0x5A47AEA7L},{(-1L),0x4B4CCDFEL,0x4B4CCDFEL},{(-1L),0x9A4FA59AL,(-1L)},{0x7CB99A68L,(-1L),0x4B4CCDFEL},{0x5A47AEA7L,0x287A9B70L,0x5A47AEA7L},{0x7CB99A68L,0x4B4CCDFEL,0x2C939D4BL}},{{(-1L),0x287A9B70L,(-1L)},{(-1L),(-1L),0x2C939D4BL},{0x5A47AEA7L,0x9A4FA59AL,0x5A47AEA7L},{(-1L),0x4B4CCDFEL,0x4B4CCDFEL},{(-1L),0x9A4FA59AL,(-1L)},{0x7CB99A68L,(-1L),0x4B4CCDFEL}},{{0x5A47AEA7L,0x287A9B70L,0x5A47AEA7L},{0x7CB99A68L,0x4B4CCDFEL,0x2C939D4BL},{(-1L),0x287A9B70L,(-1L)},{(-1L),(-1L),0x2C939D4BL},{0x5A47AEA7L,0x9A4FA59AL,0x5A47AEA7L},{(-1L),0x4B4CCDFEL,0x4B4CCDFEL}},{{(-1L),0x9A4FA59AL,(-1L)},{0x7CB99A68L,(-1L),0x4B4CCDFEL},{0x5A47AEA7L,0x287A9B70L,0x5A47AEA7L},{0x7CB99A68L,0x4B4CCDFEL,0x2C939D4BL},{(-1L),0x287A9B70L,(-1L)},{(-1L),(-1L),0x2C939D4BL}},{{0x5A47AEA7L,0x9A4FA59AL,0x5A47AEA7L},{(-1L),0x4B4CCDFEL,0x4B4CCDFEL},{(-1L),0x9A4FA59AL,(-1L)},{0x7CB99A68L,(-1L),0x4B4CCDFEL},{0x5A47AEA7L,0x287A9B70L,0x5A47AEA7L},{0x7CB99A68L,0x4B4CCDFEL,0x2C939D4BL}},{{(-1L),0x287A9B70L,(-1L)},{(-1L),(-1L),0x2C939D4BL},{0x5A47AEA7L,0x9A4FA59AL,0x5A47AEA7L},{(-1L),0x4B4CCDFEL,0x4B4CCDFEL},{(-1L),0x9A4FA59AL,(-1L)},{0x7CB99A68L,(-1L),0x4B4CCDFEL}}};
                int i, j, k;
                for (l_157.f1 = 1; (l_157.f1 <= 6); l_157.f1 += 1)
                { 
                    l_166[1] = l_166[1];
                    (*p_36) = (void*)0;
                }
                ++g_175;
                l_194 |= (safe_lshift_func_int16_t_s_u(((((safe_mod_func_int64_t_s_s((safe_add_func_uint8_t_u_u((*l_158), p_38)), ((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((-2L), ((((*l_168) = (((*l_168) || (!(0x3A25DF1CL & ((((((l_170 != (g_135[l_164] ^= (safe_add_func_uint8_t_u_u(((p_35 > (-6L)) , p_38), 0xFAL)))) & 0x8B2FF17DL) , (*g_68)) != (*g_68)) ^ p_38) && 5UL)))) ^ g_3)) | l_193[4]) && p_35))), g_85)), g_83[0])) , p_38))) , (*l_158)) | g_4) & p_35), p_38));
                for (l_157.f4 = (-25); (l_157.f4 > (-27)); --l_157.f4)
                { 
                    int32_t *l_197[7] = {&l_162[0][1][0],&l_163[4][2],&l_162[0][1][0],&l_162[0][1][0],&l_163[4][2],&l_162[0][1][0],&l_162[0][1][0]};
                    int i;
                    (*l_168) &= (*g_68);
                    --l_202[0][2][1];
                    (*p_36) = (void*)0;
                    ++g_208;
                }
            }
        }
    }
    else
    { 
        int32_t **l_224 = &g_68;
        int32_t ** const *l_223 = &l_224;
        int32_t ** const **l_222 = &l_223;
        int32_t ** const ***l_221 = &l_222;
        struct S0 *l_227 = (void*)0;
        for (g_88 = 0; g_88 < 1; g_88 += 1)
        {
            for (l_144 = 0; l_144 < 4; l_144 += 1)
            {
                for (l_157.f1 = 0; l_157.f1 < 4; l_157.f1 += 1)
                {
                    l_162[g_88][l_144][l_157.f1] = (-5L);
                }
            }
        }
        if ((((safe_mod_func_uint32_t_u_u(((((((g_214 = l_213) != (void*)0) > (((safe_mul_func_uint16_t_u_u((((p_38 > ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(1UL, ((0x5B4CL == ((void*)0 == l_221)) != p_35))), 5)) >= p_35)) | (*l_158)) ^ p_35), g_135[2])) , g_207) < g_85)) == p_35) , (-1L)) && (*l_158)), (*l_158))) && g_138) && g_206))
        { 
            struct S0 *l_225[5];
            struct S0 **l_226[6][3][4] = {{{(void*)0,&l_225[4],&l_225[4],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_225[2],&l_225[4],(void*)0,&l_225[2]}},{{(void*)0,&l_225[4],&l_225[4],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_225[2],&l_225[4],(void*)0,&l_225[2]}},{{(void*)0,&l_225[4],&l_225[4],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_225[2],&l_225[4],(void*)0,&l_225[2]}},{{(void*)0,&l_225[4],&l_225[4],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_225[2],&l_225[4],(void*)0,&l_225[2]}},{{(void*)0,&l_225[4],&l_225[4],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_225[2],&l_225[4],(void*)0,&l_225[2]}},{{(void*)0,&l_225[4],&l_225[4],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_225[2],&l_225[4],(void*)0,&l_225[2]}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_225[i] = &l_157;
            l_227 = l_225[4];
        }
        else
        { 
            uint8_t l_230[5][3] = {{0UL,0xFBL,0UL},{1UL,0x96L,1UL},{1UL,0UL,0x96L},{0UL,1UL,1UL},{0x96L,1UL,0UL}};
            uint32_t *l_245 = &l_157.f0;
            uint32_t **l_244 = &l_245;
            const uint32_t l_246 = 18446744073709551612UL;
            struct S0 l_249 = {0x633990AEL,0xB852C9F556B58E44LL,4294967295UL,0x8DC0C5F0L,0xBEB70EFDL};
            int32_t l_251 = 0x30FC9DB4L;
            int32_t *l_252[6][7][2] = {{{&l_162[0][1][0],(void*)0},{&l_249.f4,&l_162[0][1][0]},{&l_163[4][3],&l_162[0][3][0]},{&l_163[4][3],&l_162[0][1][0]},{&l_249.f4,(void*)0},{&l_162[0][1][0],(void*)0},{&l_163[3][0],&l_157.f4}},{{(void*)0,&l_162[0][3][0]},{&l_162[0][3][0],&l_162[0][3][0]},{(void*)0,&l_157.f4},{&l_163[3][0],&l_249.f4},{&l_162[0][3][0],&l_162[0][3][0]},{&l_163[3][0],&l_162[0][3][0]},{&l_157.f4,&g_205}},{{&l_157.f4,&l_162[0][3][0]},{&l_163[3][0],&l_162[0][3][0]},{&l_162[0][3][0],&l_249.f4},{&l_163[4][3],(void*)0},{&l_162[0][3][0],&l_163[0][2]},{&l_163[0][2],&l_163[0][2]},{&l_162[0][3][0],(void*)0}},{{&l_163[4][3],&l_249.f4},{&l_162[0][3][0],&l_162[0][3][0]},{&l_163[3][0],&l_162[0][3][0]},{&l_157.f4,&g_205},{&l_157.f4,&l_162[0][3][0]},{&l_163[3][0],&l_162[0][3][0]},{&l_162[0][3][0],&l_249.f4}},{{&l_163[4][3],(void*)0},{&l_162[0][3][0],&l_163[0][2]},{&l_163[0][2],&l_163[0][2]},{&l_162[0][3][0],(void*)0},{&l_163[4][3],&l_249.f4},{&l_162[0][3][0],&l_162[0][3][0]},{&l_163[3][0],&l_162[0][3][0]}},{{&l_157.f4,&g_205},{&l_157.f4,&l_162[0][3][0]},{&l_163[3][0],&l_162[0][3][0]},{&l_162[0][3][0],&l_249.f4},{&l_163[4][3],(void*)0},{&l_162[0][3][0],&l_163[0][2]},{&l_163[0][2],&l_163[0][2]}}};
            int32_t l_254 = 0xA16B0A57L;
            int i, j, k;
            for (g_138 = 25; (g_138 > 15); --g_138)
            { 
                int16_t l_231 = 0x4CE2L;
                int32_t l_232[6] = {0x8984B9C5L,0x8984B9C5L,1L,0x8984B9C5L,0x8984B9C5L,1L};
                uint8_t l_238 = 0x49L;
                int i;
                (*l_158) &= (l_230[1][1] != (((***l_223) > l_231) & g_83[0]));
                for (g_205 = 0; (g_205 <= 4); g_205 += 1)
                { 
                    int32_t *l_233 = &l_163[1][1];
                    int32_t *l_234[6][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
                    int i, j, k;
                    if (l_163[g_205][g_205])
                        break;
                    --g_235;
                }
                if ((**p_36))
                { 
                    if (l_238)
                        break;
                    return &g_68;
                }
                else
                { 
                    (*p_36) = ((****l_221) = (void*)0);
                }
                return &g_68;
            }
            (*l_158) = (((l_230[4][1] > ((void*)0 == g_241)) ^ (l_158 == ((*l_244) = &g_87))) > l_246);
            g_205 ^= ((safe_div_func_uint32_t_u_u(((*l_158) >= (((l_249 , ((((l_251 ^= (((l_249 , ((**p_36) >= ((**l_244) &= 4294967295UL))) || (l_250 , (((p_35 , l_158) == &g_87) & 0xF9645D199DA16F4BLL))) == 0xF44A9B1B637EA3EBLL)) ^ 8UL) || (*l_158)) >= p_35)) < g_83[0]) != 65535UL)), (**p_36))) || g_88);
            (*l_158) |= ((((0xAB1B66BCL | (((((safe_unary_minus_func_int32_t_s((***l_223))) != ((*****l_221) != (**l_224))) , ((**p_36) , (((p_35 | g_85) , p_35) & 1L))) , 3UL) , (*g_68))) & p_35) < l_254) , 3L);
            (*l_158) |= (**p_36);
        }
    }
    return (**g_241);
}



static uint8_t  func_43(const uint32_t  p_44, union U1  p_45, int32_t  p_46)
{ 
    int32_t * const l_109 = &g_3;
    int32_t *l_110 = (void*)0;
    int16_t *l_111 = &g_83[4];
    int32_t l_112 = 9L;
    int32_t **l_117[2];
    int16_t *l_133 = (void*)0;
    int16_t *l_134 = &g_135[2];
    int16_t *l_136 = (void*)0;
    int16_t *l_137[2][6] = {{&g_83[0],(void*)0,&g_83[0],(void*)0,&g_83[0],(void*)0},{&g_83[0],(void*)0,&g_83[0],(void*)0,&g_83[0],(void*)0}};
    int32_t ***l_142 = &l_117[1];
    int32_t ****l_141 = &l_142;
    uint32_t l_143 = 4294967295UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_117[i] = (void*)0;
    l_112 &= (safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(0xCE79L, ((safe_mod_func_uint16_t_u_u(g_69, ((safe_sub_func_int32_t_s_s(0x52423599L, (safe_sub_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((*l_111) |= ((&g_87 == &g_87) > (safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((~((safe_add_func_int8_t_s_s(0xE2L, (l_109 == l_110))) < g_69)), g_69)) < p_46), p_44)))) >= g_87), 0x9BA90DD0679804E6LL)), p_44)))) , 0x916AL))) <= (-7L)))) || g_88), g_69));
    (*g_68) &= p_44;
    for (g_88 = 0; (g_88 >= 10); g_88 = safe_add_func_uint8_t_u_u(g_88, 6))
    { 
        int32_t **l_115 = &g_68;
        int32_t ***l_116 = &l_115;
        uint32_t l_123 = 18446744073709551615UL;
        l_117[0] = ((*l_116) = l_115);
        (**l_115) = (g_83[4] && ((**l_115) & (safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((g_122[3][0] , g_3) || l_123), p_44)), g_3))));
    }
    g_68 = (((safe_mul_func_uint16_t_u_u(g_83[0], ((((safe_sub_func_uint32_t_u_u(g_88, (safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_s(g_87, ((safe_mod_func_uint8_t_u_u(p_44, (((g_138 = ((*l_134) = (1L && p_46))) == (((*l_141) = ((safe_lshift_func_int8_t_s_s(0x71L, (*l_109))) , (void*)0)) == &l_117[0])) , l_143))) >= p_45.f0))))))) && 0L) && g_122[3][0].f0) < p_45.f0))) | p_46) , &g_3);
    g_69 ^= p_46;
    return g_69;
}



static const uint32_t  func_47(uint16_t  p_48)
{ 
    union U1 l_51 = {18446744073709551609UL};
    uint32_t *l_54 = &g_55;
    int32_t **l_66 = (void*)0;
    int32_t **l_67[2];
    uint16_t l_79 = 1UL;
    uint16_t *l_80 = (void*)0;
    uint16_t *l_81 = &l_79;
    int16_t *l_82 = &g_83[0];
    int64_t *l_84[7];
    uint32_t *l_86 = &g_87;
    int i;
    for (i = 0; i < 2; i++)
        l_67[i] = (void*)0;
    for (i = 0; i < 7; i++)
        l_84[i] = &g_85;
    g_88 = (safe_rshift_func_uint8_t_u_u((((g_4 , l_51) , ((safe_sub_func_uint32_t_u_u(((*l_54)++), ((*l_86) = ((~((l_51.f0 <= (((safe_unary_minus_func_int64_t_s((g_85 = (!((*l_82) = (l_51.f0 == (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(p_48, (+((*l_81) = (((g_68 = l_54) != (((((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((((g_69 = (((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((0x79L || p_48), g_3)) < 0x00ACL), 0)) < g_4), g_69)) == p_48) && 0x59018101L)) > l_79) ^ g_4))), 0x7AL)) , p_48) >= 0x5CL) < g_3) , &g_3)) || p_48))))), g_3)))))))) , 3L) & 0xF1D3L)) == g_3)) & g_4)))) , 8UL)) , 0xA3L), g_3));
    return p_48;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);

    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_122[i][j].f0, "g_122[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_135[i], "g_135[i]", print_hash_value);

    }
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_291.f0, "g_291.f0", print_hash_value);
    transparent_crc(g_291.f1, "g_291.f1", print_hash_value);
    transparent_crc(g_291.f2, "g_291.f2", print_hash_value);
    transparent_crc(g_291.f3, "g_291.f3", print_hash_value);
    transparent_crc(g_291.f4, "g_291.f4", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_323[i], "g_323[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_326[i], "g_326[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_344[i][j].f0, "g_344[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_618[i][j][k], "g_618[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_689, "g_689", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_779[i], "g_779[i]", print_hash_value);

    }
    transparent_crc(g_826, "g_826", print_hash_value);
    transparent_crc(g_844, "g_844", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_846[i][j], "g_846[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_850[i], "g_850[i]", print_hash_value);

    }
    transparent_crc(g_851, "g_851", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_852[i], "g_852[i]", print_hash_value);

    }
    transparent_crc(g_854, "g_854", print_hash_value);
    transparent_crc(g_910, "g_910", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_921[i], "g_921[i]", print_hash_value);

    }
    transparent_crc(g_944, "g_944", print_hash_value);
    transparent_crc(g_945, "g_945", print_hash_value);
    transparent_crc(g_947, "g_947", print_hash_value);
    transparent_crc(g_960, "g_960", print_hash_value);
    transparent_crc(g_1010, "g_1010", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1064[i][j][k], "g_1064[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1065, "g_1065", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1066[i][j][k], "g_1066[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1067, "g_1067", print_hash_value);
    transparent_crc(g_1069, "g_1069", print_hash_value);
    transparent_crc(g_1104, "g_1104", print_hash_value);
    transparent_crc(g_1105, "g_1105", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
