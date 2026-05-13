// SPDX-License-Identifier: MIT
// cctest_csmith_6aeab319.c --- cctest case csmith_6aeab319 (csmith seed 1793766169)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x93b3d5dd */

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

// Options:   -s 1793766169 -o /tmp/csmith_gen_9hf9g62i/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint8_t  f0;
   int8_t  f1;
};
#pragma pack(pop)

union U1 {
   uint16_t  f0;
};


static int64_t g_2 = 1L;
static int32_t g_27 = 0xB4709BA8L;
static int32_t g_76[3][2][4] = {{{0L,0x2A6DD754L,0L,0L},{0x2A6DD754L,0x2A6DD754L,0x8F94618CL,0x2A6DD754L}},{{0x2A6DD754L,0L,0L,0x2A6DD754L},{0L,0x2A6DD754L,0L,0L}},{{0x2A6DD754L,0x2A6DD754L,0x8F94618CL,0x2A6DD754L},{0x2A6DD754L,0L,0L,0x2A6DD754L}}};
static union U1 g_85[5] = {{1UL},{1UL},{1UL},{1UL},{1UL}};
static int32_t g_120[1][2] = {{5L,5L}};
static int32_t g_121 = 8L;
static uint32_t g_124 = 18446744073709551611UL;
static uint8_t g_133[3] = {0UL,0UL,0UL};
static struct S0 g_245 = {252UL,0x7FL};
static int32_t g_259[3] = {0xC18FD052L,0xC18FD052L,0xC18FD052L};
static int16_t g_260 = (-1L);
static int32_t g_261 = (-7L);
static uint32_t g_262[5] = {0UL,0UL,0UL,0UL,0UL};
static int8_t g_272[1] = {5L};
static uint32_t g_273 = 7UL;
static uint64_t g_280 = 7UL;
static const uint32_t g_300 = 0xD997799FL;
static uint8_t g_394[5][2][4] = {{{0x86L,255UL,252UL,0x3BL},{0xD1L,0x1AL,253UL,0UL}},{{0x9DL,0xD1L,0x9DL,255UL},{0x86L,252UL,0UL,0x1AL}},{{0x3BL,0x9DL,0UL,252UL},{0xC9L,8UL,0UL,255UL}},{{0x3BL,255UL,0UL,0UL},{0x86L,0x86L,0x9DL,0xC9L}},{{0x9DL,0xC9L,253UL,0xD1L},{0xD1L,0xE3L,0x86L,253UL}}};
static int16_t g_456[2][1][4] = {{{0x8015L,0x8015L,0x8015L,0x8015L}},{{0x8015L,0x8015L,0x8015L,0x8015L}}};
static int32_t g_495 = 0x61BDDE95L;
static uint32_t g_504 = 0UL;



static uint32_t  func_1(void);
static const struct S0  func_3(uint32_t  p_4);
static uint8_t  func_7(uint32_t  p_8, int16_t  p_9, int16_t  p_10);
static uint8_t  func_14(int8_t  p_15, const uint32_t  p_16, int8_t  p_17);




static uint32_t  func_1(void)
{ 
    uint32_t l_13 = 0xE1C97412L;
    int32_t l_380 = (-1L);
    int32_t l_387 = 0xEA9D6C51L;
    struct S0 l_390[3][5][4] = {{{{0UL,0x5EL},{0x9CL,0x27L},{0x1FL,0L},{0x29L,0x9DL}},{{0x75L,6L},{0x9CL,0x27L},{0x75L,6L},{0x5EL,0xEEL}},{{0x9CL,0x27L},{0x71L,0x89L},{1UL,0x9DL},{255UL,-1L}},{{255UL,-1L},{0x29L,0x9DL},{0UL,0x5EL},{0x71L,0x89L}},{{0x66L,0x2FL},{0UL,0x5EL},{0UL,0x5EL},{0x66L,0x2FL}}},{{{255UL,-1L},{0x5EL,0xEEL},{1UL,0x9DL},{0x75L,6L}},{{0x9CL,0x27L},{1UL,0xBEL},{0x75L,6L},{0xB0L,-3L}},{{0x75L,6L},{0xB0L,-3L},{0x1FL,0L},{0xB0L,-3L}},{{0UL,0x5EL},{1UL,0xBEL},{0x29L,0x9DL},{0x75L,6L}},{{8UL,-2L},{0x5EL,0xEEL},{0xB0L,-3L},{0x66L,0x2FL}}},{{{0x29L,0x9DL},{0UL,0x5EL},{0x71L,0x89L},{0x71L,0x89L}},{{0x29L,0x9DL},{0x29L,0x9DL},{0xB0L,-3L},{255UL,-1L}},{{8UL,-2L},{0x71L,0x89L},{0x29L,0x9DL},{0x5EL,0xEEL}},{{0UL,0x5EL},{0x9CL,0x27L},{0x1FL,0L},{0x29L,0x9DL}},{{0x75L,6L},{0x9CL,0x27L},{0x75L,6L},{0x5EL,0xEEL}}}};
    uint32_t l_453[2][2];
    uint8_t l_464[1][3];
    uint64_t l_494[2][4];
    uint8_t l_505 = 2UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_453[i][j] = 0xE429BEF8L;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_464[i][j] = 1UL;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_494[i][j] = 4UL;
    }
    if ((g_259[1] = (g_2 , (func_3((safe_lshift_func_uint8_t_u_u(g_2, func_7((safe_mul_func_uint8_t_u_u(l_13, func_14(g_2, l_13, l_13))), l_13, l_13)))) , l_13))))
    { 
        uint16_t l_384 = 65533UL;
        l_380 = (g_133[0] ^ (-8L));
        g_76[0][1][1] &= ((safe_mod_func_uint32_t_u_u((l_387 = (((g_280 ^= (!0xD1L)) && l_384) >= (g_133[1] = (g_272[0] | (l_380 = ((safe_add_func_int64_t_s_s((g_133[1] < l_384), g_262[3])) > l_380)))))), l_384)) , 0L);
        for (g_2 = 0; g_2 < 1; g_2 += 1)
        {
            for (l_387 = 0; l_387 < 2; l_387 += 1)
            {
                g_120[g_2][l_387] = (-3L);
            }
        }
    }
    else
    { 
        const int32_t l_393 = 1L;
        l_387 = (g_76[0][1][3] ^= (safe_lshift_func_int8_t_s_s(((l_390[1][1][1] , (l_390[1][1][1].f0 , (safe_rshift_func_int16_t_s_u(((g_133[0] = (g_85[3].f0 < g_120[0][1])) | g_121), l_393)))) , g_124), g_394[3][1][1])));
    }
    if ((~0L))
    { 
        uint32_t l_396 = 0xC4FD2FFAL;
        int32_t l_399 = 0L;
        uint64_t l_410 = 18446744073709551606UL;
lbl_437:
        for (l_387 = 0; (l_387 <= 1); l_387 += 1)
        { 
            for (g_121 = 0; g_121 < 5; g_121 += 1)
            {
                union U1 tmp = {0xD4C6L};
                g_85[g_121] = tmp;
            }
            g_259[1] = (((g_280 = l_396) | g_260) == (safe_add_func_uint32_t_u_u(g_394[3][1][1], (g_85[3].f0 < g_272[0]))));
            l_399 = g_280;
            for (l_396 = 0; (l_396 <= 0); l_396 += 1)
            { 
                uint64_t l_400[5] = {18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL};
                int i;
                --l_400[4];
            }
        }
        g_76[1][1][3] = (-1L);
        if (((safe_sub_func_int32_t_s_s((g_259[1] = (l_387 = (g_27 ^ (~(l_410 &= (safe_sub_func_uint8_t_u_u((g_245.f0 , ((((g_76[0][0][2] | (1UL > g_262[4])) > l_390[1][1][1].f1) != 8L) , l_380)), 1L))))))), 0x96978C16L)) >= l_396))
        { 
            uint32_t l_434 = 18446744073709551611UL;
            l_399 = ((g_133[0] < (~((g_394[3][1][1] && (((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((g_272[0] = ((safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s((l_387 ^= ((((safe_lshift_func_uint8_t_u_s((((!(((g_85[3].f0--) && (safe_add_func_uint16_t_u_u(((g_76[1][1][3] = ((safe_mul_func_uint16_t_u_u(65533UL, (252UL <= (-1L)))) | g_272[0])) <= 0UL), 65535UL))) < l_390[1][1][1].f0)) && g_85[3].f0) , l_410), 5)) > g_273) != 0x77L) | 0x174FL)))) , g_76[0][1][3]), 0x60L)), 1L)) != 0x478BL)) || g_260), g_133[2])), 0UL)), g_245.f0)), 0xD3L)) == g_273) , l_380)) || l_390[1][1][1].f0))) >= l_434);
        }
        else
        { 
            uint16_t l_448 = 0xB341L;
            int32_t l_455 = 1L;
            for (l_13 = (-19); (l_13 <= 19); l_13 = safe_add_func_uint16_t_u_u(l_13, 7))
            { 
                int32_t l_454 = 1L;
                if (g_245.f1)
                    goto lbl_437;
                g_259[1] &= (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((-4L), ((((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(0x8221L, l_448)) && (((safe_div_func_int16_t_s_s(((l_455 &= ((safe_rshift_func_uint16_t_u_s(l_387, l_453[1][1])) & l_454)) & 0x586583F67FE72FF6LL), g_272[0])) >= l_410) == g_273)), l_399)) && l_454) , g_133[0]) , 0x57L))), l_380)), 0x022AL)) > g_456[0][0][3]) >= g_300);
                g_76[1][1][3] = (safe_sub_func_int32_t_s_s((g_27 = (safe_lshift_func_int8_t_s_s((+((g_394[3][1][1] || (((l_399 = (safe_mod_func_int32_t_s_s((l_455 &= l_396), (18446744073709551609UL || (g_2 = (g_456[0][0][3] || l_448)))))) > g_259[1]) >= l_448)) | 65526UL)), l_454))), l_464[0][2]));
            }
        }
    }
    else
    { 
        uint32_t l_483[5][5][3] = {{{0xCD6EF15DL,0x8EBD5520L,0UL},{0x52152C67L,0x69B278F0L,0UL},{4294967295UL,0UL,0UL},{4294967288UL,4294967292UL,0UL},{0xEA72F128L,0x579B1A20L,4294967295UL}},{{0xF9AF5E79L,4294967292UL,0xDF496B38L},{0x548BD2AAL,0x69B278F0L,0x8EBD5520L},{5UL,4294967292UL,4UL},{4294967288UL,0x579B1A20L,9UL},{4294967290UL,4294967292UL,4294967295UL}},{{0x69B278F0L,0UL,0UL},{0x69B278F0L,0x69B278F0L,4294967288UL},{4294967290UL,0x8EBD5520L,4294967292UL},{4294967288UL,4294967287UL,4294967295UL},{5UL,0UL,4294967295UL}},{{0x548BD2AAL,4294967288UL,4294967295UL},{0xF9AF5E79L,0x69B278F0L,4294967292UL},{0xEA72F128L,4UL,4294967288UL},{4294967288UL,0x91D99280L,0UL},{4294967295UL,0x91D99280L,4294967295UL}},{{0x52152C67L,4UL,9UL},{0xCD6EF15DL,0x69B278F0L,4UL},{0xC3F7EE11L,4294967288UL,0x8EBD5520L},{4294967288UL,0UL,0xDF496B38L},{0xC3F7EE11L,4294967287UL,4294967295UL}}};
        int32_t l_496 = 0x944E3C0BL;
        int i, j, k;
        for (l_387 = 9; (l_387 != 2); --l_387)
        { 
            uint8_t l_493 = 8UL;
            l_496 |= (((((safe_rshift_func_uint8_t_u_s((++g_133[0]), (((safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(g_27, 8)) , ((safe_add_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((g_394[0][1][2] = g_272[0]), l_483[1][2][2])), ((safe_mul_func_int8_t_s_s(((((safe_unary_minus_func_uint64_t_u((g_280 |= (((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((((((g_272[0] < l_493) && l_483[4][3][2]) > l_464[0][1]) >= g_2) | 0x58D7D2F8L), g_245.f0)) | (-3L)), g_120[0][0])), l_483[1][2][0])) ^ 4L) , 1UL)))) < g_120[0][1]) >= l_493) < l_493), g_2)) && 0x6966L))) & l_483[1][2][2])), 9L)) ^ l_464[0][0]), l_494[1][0])) >= g_300) < g_495), 0x32L)) == g_27) ^ (-1L)))) | g_76[2][0][2]) | l_380) != 0x8426D6A8L) || g_259[0]);
            g_76[1][1][3] = g_27;
        }
        g_259[2] = ((safe_unary_minus_func_int8_t_s(((((((safe_div_func_int32_t_s_s((((safe_add_func_int16_t_s_s((l_453[0][1] && (l_483[1][2][2] , g_261)), (((--g_394[3][1][2]) , g_504) & g_133[0]))) < g_121) < 255UL), 0x2316630FL)) <= 0x7CBD62A388BEC4CCLL) && 18446744073709551615UL) | g_262[4]) | 0xA80588B1L) > l_494[1][0]))) != l_483[0][1][1]);
    }
    g_27 &= l_505;
    return l_380;
}



static const struct S0  func_3(uint32_t  p_4)
{ 
    int64_t l_177 = 0xF6F188D16BFC4B41LL;
    const uint64_t l_186 = 0xF48876613FCEAC48LL;
    int32_t l_188 = 0xDD564CCDL;
    int32_t l_229 = (-8L);
    int32_t l_232[1][4] = {{0x91BF3A08L,0x91BF3A08L,0x91BF3A08L,0x91BF3A08L}};
    uint32_t l_279[4][3][5] = {{{0xE2F0389DL,0xE2F0389DL,0xE2F0389DL,0UL,0x8E5D4F6FL},{1UL,0x8E5D4F6FL,0x5B1883FAL,0x5B1883FAL,0x8E5D4F6FL},{0x8E5D4F6FL,4294967295UL,1UL,0x8E5D4F6FL,0x5B1883FAL}},{{0UL,0x8E5D4F6FL,0xE2F0389DL,0x8E5D4F6FL,0UL},{1UL,4294967289UL,4294967295UL,0x5B1883FAL,4294967289UL},{0UL,4294967295UL,4294967295UL,0UL,0x5B1883FAL}},{{0x8E5D4F6FL,0UL,0xE2F0389DL,4294967289UL,4294967289UL},{1UL,0UL,1UL,0x5B1883FAL,0UL},{4294967289UL,4294967295UL,0x5B1883FAL,4294967289UL,0x5B1883FAL}},{{4294967289UL,4294967289UL,0xE2F0389DL,0UL,0x8E5D4F6FL},{1UL,0x8E5D4F6FL,0x5B1883FAL,0x5B1883FAL,0x8E5D4F6FL},{0x8E5D4F6FL,4294967295UL,1UL,0x8E5D4F6FL,0x5B1883FAL}}};
    union U1 l_305 = {0UL};
    uint16_t l_329[2];
    uint64_t l_360[5] = {18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL};
    const struct S0 l_362 = {255UL,-1L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_329[i] = 0xE33AL;
    for (g_124 = 20; (g_124 < 41); ++g_124)
    { 
        int32_t l_178[4][1][2] = {{{9L,0L}},{{0L,9L}},{{0L,0L}},{{9L,0L}}};
        int i, j, k;
        for (g_27 = 3; (g_27 >= 0); g_27 -= 1)
        { 
            int64_t l_187 = (-1L);
            if (((((p_4 != (p_4 & ((((safe_mod_func_uint8_t_u_u(p_4, (((safe_lshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s((1UL | 9L), 0xACL)) < 0xA558L) , g_133[0]), 5)) || l_177) || 2UL))) != p_4) || 0x7B63L) , 2UL))) == l_177) ^ l_177) <= l_178[1][0][1]))
            { 
                l_188 = (l_187 |= (+((((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(l_178[3][0][0], 12)), 3)) || (safe_mul_func_uint8_t_u_u(g_120[0][1], (((-1L) >= 0L) & l_186)))) , 0xC63F9E7CL) && 3UL)));
                g_76[1][1][3] ^= (18446744073709551615UL <= 0x039AB0C0B734962ELL);
            }
            else
            { 
                if (p_4)
                    break;
            }
        }
    }
    for (l_177 = 0; (l_177 <= 2); l_177 += 1)
    { 
        int32_t l_201 = 0xB853E7CFL;
        int32_t l_223 = 0x4D2B49C7L;
        int32_t l_227 = 3L;
        int32_t l_233 = (-6L);
        int32_t l_235[5][5][5] = {{{0xE1B3826BL,0x53FDA3CCL,0x9C671D18L,0xEA0349FBL,0x30AAAE0BL},{0xCD19120BL,(-1L),0x53FDA3CCL,1L,(-2L)},{0xA88FC1CAL,0x85BCADEBL,0xCD19120BL,0x53FDA3CCL,0x30AAAE0BL},{1L,1L,0xA10D22A3L,0x6411B735L,0x53FDA3CCL},{0x30AAAE0BL,0L,0L,1L,0x85BCADEBL}},{{0xA10D22A3L,0x035ACF56L,5L,0L,0x8FAAC2A5L},{0xA10D22A3L,4L,1L,0xCD19120BL,1L},{0x30AAAE0BL,0x30AAAE0BL,0x035ACF56L,(-2L),0xA10D22A3L},{1L,(-8L),0L,0x0BE34E6FL,(-10L)},{0xA88FC1CAL,0L,0x82BAD39FL,1L,0xEA0349FBL}},{{0xCD19120BL,(-8L),1L,0xE1B3826BL,0x65F52896L},{0xE1B3826BL,0x30AAAE0BL,0L,0L,1L},{0x53FDA3CCL,4L,0x0BE34E6FL,0x85BCADEBL,5L},{0L,0x035ACF56L,0x0BE34E6FL,5L,1L},{0L,0L,0L,0L,0L}},{{(-8L),1L,1L,1L,0xA88FC1CAL},{(-8L),0x85BCADEBL,0x82BAD39FL,0xC9369668L,0L},{0x0BE34E6FL,(-1L),0L,1L,0L},{0x65F52896L,0x53FDA3CCL,0x035ACF56L,0L,0xC9369668L},{1L,0xF90603C6L,1L,5L,0x9C671D18L}},{{(-1L),0x65F52896L,5L,0x85BCADEBL,0x9C671D18L},{6L,0xC9369668L,0L,0L,0xC9369668L},{(-10L),0L,0xA10D22A3L,0xE1B3826BL,0L},{0x85BCADEBL,8L,0xCD19120BL,1L,0xCD19120BL},{(-1L),0x8FAAC2A5L,0x0BE34E6FL,0xA10D22A3L,0xEA0349FBL}}};
        uint32_t l_281 = 1UL;
        int32_t l_326 = (-1L);
        int i, j, k;
        if (l_177)
        { 
            struct S0 l_200 = {0UL,0x3BL};
            int32_t l_202 = 2L;
            int32_t l_225 = 0xBE80DE5BL;
            int32_t l_228 = 1L;
            int32_t l_231[5] = {0x2001A86CL,0x2001A86CL,0x2001A86CL,0x2001A86CL,0x2001A86CL};
            uint16_t l_236 = 0x256FL;
            int i;
            if (g_124)
            { 
                uint16_t l_197[2];
                int32_t l_215 = (-1L);
                int i;
                for (i = 0; i < 2; i++)
                    l_197[i] = 0xEAA8L;
                l_202 = ((l_177 & (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(g_76[2][1][3], ((safe_mul_func_int8_t_s_s((l_197[0] = 1L), (((safe_mul_func_uint8_t_u_u((((l_200 , 0xCD7554994F792DA7LL) , 18446744073709551608UL) , l_201), g_27)) , p_4) != g_2))) , g_133[0]))), 0)) < 0L), p_4))) , p_4);
                l_215 = (l_188 = (l_201 , ((-1L) ^ (((safe_lshift_func_uint8_t_u_s(((((((safe_lshift_func_uint8_t_u_s(p_4, 3)) , (safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((1L <= (-1L)), l_200.f0)), g_76[1][1][3])), 2UL)) , 0xB9DF822DL) , g_27), 11))) || g_133[0]) != g_76[1][0][0]) | p_4) <= l_215), 5)) != (-1L)) != g_27))));
                l_188 = ((p_4 = 1UL) <= (safe_mod_func_uint64_t_u_u(0UL, (((safe_lshift_func_uint8_t_u_u((((safe_add_func_int64_t_s_s(((safe_unary_minus_func_int8_t_s(l_188)) != (5L | g_120[0][1])), l_197[0])) <= g_85[3].f0) & 65534UL), l_201)) & l_186) ^ g_120[0][1]))));
            }
            else
            { 
                int16_t l_224 = 0x2C62L;
                int32_t l_226 = (-5L);
                int32_t l_230 = 0L;
                int32_t l_234[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i;
                ++l_236;
                if (l_234[2])
                    continue;
                g_76[1][1][3] ^= ((safe_mul_func_int8_t_s_s(0x47L, (((l_234[2] && (safe_add_func_int32_t_s_s((safe_div_func_int64_t_s_s((g_245 , (safe_sub_func_int64_t_s_s(g_133[1], l_228))), g_27)), g_133[0]))) && g_85[3].f0) || 0x66EDB1092C0A3A69LL))) & p_4);
            }
            for (l_227 = 2; (l_227 >= 0); l_227 -= 1)
            { 
                uint32_t l_248 = 7UL;
                if (l_248)
                    break;
            }
            for (l_233 = 0; (l_233 <= 2); l_233 += 1)
            { 
                uint32_t l_249 = 0xA84E0C2DL;
                int32_t l_265[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_265[i] = 0xD8F51295L;
                ++l_249;
                l_235[2][2][3] |= (~g_120[0][0]);
                l_265[0] = (safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u(((g_2 > 18446744073709551612UL) != p_4), (g_262[4]--))) , (p_4 & p_4)), g_133[0])) != p_4) || 0UL), g_259[1]));
            }
        }
        else
        { 
            return g_245;
        }
        if (((safe_add_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u((g_280 = (safe_mul_func_uint8_t_u_u(((((g_121 > ((g_273++) > (+l_186))) && (g_133[l_177] = l_232[0][0])) > ((safe_div_func_int32_t_s_s((((((((l_279[2][0][4] &= (65535UL ^ g_259[1])) != l_186) && l_232[0][1]) , g_120[0][1]) & 0x9EL) , 1L) , g_121), g_272[0])) != 4294967289UL)) , 0x8AL), p_4))), 5)) < g_261), l_281)) != 18446744073709551612UL))
        { 
            int8_t l_295[1];
            int i;
            for (i = 0; i < 1; i++)
                l_295[i] = 0xADL;
            g_259[1] = (safe_div_func_uint32_t_u_u(1UL, p_4));
            g_76[2][0][0] = (l_223 &= ((((0x98L >= (safe_mod_func_int64_t_s_s(((g_262[0]++) , (safe_add_func_int8_t_s_s(0x58L, ((safe_lshift_func_int8_t_s_u(((~(safe_sub_func_int64_t_s_s((g_2 = ((l_295[0] && p_4) & 4294967295UL)), (-1L)))) ^ 0xD73EC10CL), g_262[2])) , g_245.f0)))), g_76[1][1][3]))) || l_295[0]) || g_120[0][1]) || l_188));
        }
        else
        { 
            int8_t l_303 = 0x3AL;
            uint32_t l_304 = 7UL;
            int16_t l_319[3];
            int i;
            for (i = 0; i < 3; i++)
                l_319[i] = 0x93ABL;
            l_188 = (l_304 = (safe_add_func_int64_t_s_s(l_279[0][1][3], ((safe_mul_func_int16_t_s_s(g_300, (((safe_rshift_func_int8_t_s_s(((p_4 ^ ((g_280 || 0xCEF9308573710BBALL) ^ l_232[0][3])) , l_303), l_303)) <= g_260) >= g_133[0]))) < 0x614374FFD2AC4DE5LL))));
            l_235[2][2][3] = l_303;
            if ((l_305 , (safe_add_func_uint8_t_u_u(255UL, (l_188 = (l_223 != (((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(65535UL, p_4)), g_76[1][1][3])) , p_4) || l_235[3][0][1])))))))
            { 
                const struct S0 l_312 = {0x9FL,0x99L};
                return l_312;
            }
            else
            { 
                l_223 &= ((safe_add_func_int64_t_s_s((4294967295UL ^ ((safe_mul_func_uint16_t_u_u(g_262[4], (g_85[3].f0 ^= (safe_rshift_func_uint8_t_u_s(((l_235[4][3][2] && (((l_279[1][0][3] || 4UL) | g_120[0][1]) | p_4)) ^ l_177), 6))))) != l_319[2])), 0x6D7E888E8E41D38ELL)) >= p_4);
            }
        }
        if ((safe_div_func_int64_t_s_s(g_261, (l_227 ^ (safe_mod_func_int64_t_s_s((g_2 = (safe_lshift_func_uint16_t_u_s(((l_326 >= ((safe_mod_func_int16_t_s_s((1L >= g_273), (-7L))) <= g_300)) > 0x7AL), 4))), l_279[2][0][4]))))))
        { 
            uint16_t l_332 = 65533UL;
            if (((l_329[0] , ((((g_76[1][1][3] = (((((p_4 < ((((safe_div_func_uint32_t_u_u((0xF2L ^ (0xD2D6L || 0xFFADL)), l_332)) <= p_4) , (-1L)) || g_272[0])) > p_4) <= p_4) , 0x3225L) , g_262[3])) | p_4) ^ 0xF70EDA4B804852DBLL) & g_259[0])) <= 0L))
            { 
                int32_t l_335[5];
                struct S0 l_346 = {0x53L,0L};
                int32_t l_355 = 0L;
                int i;
                for (i = 0; i < 5; i++)
                    l_335[i] = 0x3A090F8DL;
                l_335[4] = (safe_mul_func_int16_t_s_s(l_335[4], (p_4 > (!(((g_273 = (safe_mod_func_int16_t_s_s((!((g_2 = (safe_mul_func_uint8_t_u_u((g_133[0] = (safe_mul_func_uint8_t_u_u((l_346 , (((((safe_rshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_332 != 0x490FL), 0x7BL)), g_121)) != l_335[3]), 0x55B6L)), l_223)) > l_332) > 0x3BL) & p_4) , l_186)), 0x24L))), g_262[4]))) >= p_4)), g_300))) == l_355) | l_223)))));
            }
            else
            { 
                uint16_t l_361[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_361[i] = 0x69AAL;
                l_361[0] = (g_85[3].f0 == (safe_mod_func_uint32_t_u_u((((((l_332 > ((safe_div_func_int64_t_s_s(0x23DAB1411F4792D4LL, 0xFAAA504CCB4D2650LL)) && 2L)) != l_188) | 0x4BL) == 0x6B304CED09A8BBA5LL) == l_332), l_360[2])));
            }
            for (l_326 = 0; l_326 < 4; l_326 += 1)
            {
                for (g_245.f1 = 0; g_245.f1 < 3; g_245.f1 += 1)
                {
                    for (p_4 = 0; p_4 < 5; p_4 += 1)
                    {
                        l_279[l_326][g_245.f1][p_4] = 0x31F01E25L;
                    }
                }
            }
            return l_362;
        }
        else
        { 
            const struct S0 l_367 = {0xF6L,0L};
            int32_t l_370 = 0L;
            l_370 = (safe_mul_func_uint8_t_u_u(0x35L, (safe_rshift_func_int8_t_s_u(((l_367 , (g_259[2] >= (safe_lshift_func_int8_t_s_s((g_133[0] , l_367.f1), 0)))) && g_280), 0))));
            for (l_229 = 0; (l_229 == 22); l_229 = safe_add_func_int32_t_s_s(l_229, 2))
            { 
                uint64_t l_373 = 0x6C28FBAF897A3DE9LL;
                ++l_373;
                return g_245;
            }
            l_227 = ((safe_div_func_int64_t_s_s((l_223 = ((((g_76[1][1][3] = (safe_lshift_func_uint8_t_u_s(l_201, p_4))) < p_4) >= (l_367.f1 == l_279[1][2][0])) , (-1L))), 0xC84F80DE2B115307LL)) & l_370);
        }
    }
    return l_362;
}



static uint8_t  func_7(uint32_t  p_8, int16_t  p_9, int16_t  p_10)
{ 
    int16_t l_136 = 0x2A0AL;
    int32_t l_143 = (-4L);
    int32_t l_146 = 0x7B453828L;
    int32_t l_148 = (-1L);
    int32_t l_149 = 0x7D6D0C92L;
    int32_t l_150[5][2][3] = {{{0xA5772CECL,(-5L),(-5L)},{0x11890E32L,(-1L),1L}},{{(-1L),0x9E70C8CAL,(-1L)},{(-1L),(-1L),0xA5772CECL}},{{0x11890E32L,5L,0x11890E32L},{0xA5772CECL,(-1L),(-1L)}},{{(-1L),0x9E70C8CAL,(-1L)},{1L,(-1L),0x11890E32L}},{{(-5L),(-5L),0xA5772CECL},{1L,0xA5772CECL,(-1L)}}};
    int8_t l_151 = 0L;
    int i, j, k;
    for (p_10 = (-22); (p_10 <= 16); p_10++)
    { 
        int32_t l_137 = 0x4726A7E7L;
        int32_t l_141 = 0L;
        int32_t l_144[3][1][1];
        int16_t l_152 = 7L;
        uint32_t l_153 = 4294967295UL;
        uint8_t l_159 = 0x81L;
        int64_t l_162 = 0x92B95AF383A4A272LL;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_144[i][j][k] = 1L;
            }
        }
        g_76[1][1][0] ^= (l_136 >= l_137);
        for (g_121 = 0; (g_121 > 7); g_121 = safe_add_func_uint32_t_u_u(g_121, 2))
        { 
            int32_t l_140 = 1L;
            int32_t l_142 = 1L;
            int32_t l_145 = 0L;
            int32_t l_147[1];
            int i;
            for (i = 0; i < 1; i++)
                l_147[i] = 0x4110E0C7L;
            l_153++;
            for (l_142 = 4; (l_142 >= 0); l_142 -= 1)
            { 
                uint32_t l_156 = 0x6014FA95L;
                g_76[1][1][3] &= p_9;
                ++l_156;
            }
            l_159--;
        }
        l_144[2][0][0] = ((l_159 < ((((((l_150[4][0][2] ^= (l_162 && ((g_85[3].f0++) <= l_152))) , (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((p_10 , g_27) <= g_120[0][1]), 0xE54AD390L)), g_133[2]))) == l_149) <= 0x56L) != l_159) != 0xA3A2L)) < p_9);
    }
    return g_76[1][1][3];
}



static uint8_t  func_14(int8_t  p_15, const uint32_t  p_16, int8_t  p_17)
{ 
    int64_t l_18[5] = {0x662DB8E9646B8D96LL,0x662DB8E9646B8D96LL,0x662DB8E9646B8D96LL,0x662DB8E9646B8D96LL,0x662DB8E9646B8D96LL};
    int32_t l_32 = 1L;
    int32_t l_40 = (-10L);
    int64_t l_86 = 0x7FA13A89CE68EBBCLL;
    int i;
    for (p_17 = 4; (p_17 >= 0); p_17 -= 1)
    { 
        int32_t l_28 = 4L;
        int i;
        l_28 |= (safe_sub_func_int64_t_s_s((l_18[p_17] = ((safe_mod_func_int64_t_s_s(((g_27 &= (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_18[2], g_2)), 9))) , g_27), ((p_16 < l_18[4]) | p_15))) == g_2)), 1L));
        if (g_27)
        { 
            return p_17;
        }
        else
        { 
            uint32_t l_33 = 0x276CC72BL;
            union U1 l_50 = {1UL};
            int32_t l_51 = 7L;
            for (l_28 = (-15); (l_28 != (-2)); ++l_28)
            { 
                uint32_t l_31 = 18446744073709551610UL;
                l_32 = (l_31 | g_27);
                --l_33;
                l_40 &= ((g_27 ^= p_15) == (((4294967295UL & (safe_mul_func_uint8_t_u_u(l_31, ((l_32 = (((safe_rshift_func_int16_t_s_u((g_2 & 4294967294UL), p_16)) & g_2) <= g_2)) , l_18[2])))) != p_17) & p_17));
            }
            if ((l_40 = (g_27 = l_33)))
            { 
                uint8_t l_41[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_41[i] = 255UL;
                l_41[0]++;
                l_51 = (safe_add_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((((l_50 , 0x0BDE8AFF65CE17C9LL) , g_27) != l_32), g_2)), l_41[0])), g_2));
                l_51 = 0xB999C826L;
            }
            else
            { 
                l_40 = l_28;
                if (p_17)
                    continue;
            }
            l_28 = 0L;
        }
    }
    for (p_15 = 0; (p_15 >= 15); p_15 = safe_add_func_uint16_t_u_u(p_15, 1))
    { 
        struct S0 l_61 = {255UL,2L};
        g_27 = (+((p_16 <= (safe_rshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((((p_16 && (((((l_61 , l_32) == l_32) , l_61.f1) , 0x0BC5L) != 0x0EA3L)) , 1UL) ^ 0L), l_18[0])), g_2))) == l_61.f1));
        if (p_15)
            break;
        if (((1L != ((((safe_mul_func_int8_t_s_s((((((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s(g_2, 9)) | (safe_mod_func_int32_t_s_s((l_40 = ((p_17 == ((g_76[1][1][3] = (((l_40 >= l_61.f1) != l_32) | g_2)) == p_15)) , g_76[1][1][3])), l_61.f0))), 3)), g_2)), l_32)) > l_18[3]) <= 0xE0F7F7A374779CF8LL) , g_76[0][1][0]) || l_61.f0), p_15)) >= p_16) < g_27) == (-1L))) ^ 4294967295UL))
        { 
            uint64_t l_93 = 0x072EE8FFC0A99849LL;
            g_76[2][1][3] = (safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((((l_40 = ((((safe_sub_func_uint32_t_u_u(p_15, (safe_div_func_uint16_t_u_u((g_85[3] , (l_40 > (l_32 || 0x0108L))), l_32)))) == 9UL) != l_32) >= g_85[3].f0)) , l_86) > g_76[1][1][3]), p_16)), g_27));
            if (p_17)
                break;
            l_93 &= ((l_32 = ((3UL == (safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((-5L), ((0x99L ^ (p_17 = (safe_mul_func_int16_t_s_s(l_86, 0x2A74L)))) ^ p_15))), 6))) ^ g_76[1][1][3])) , 0x079B8BCBL);
        }
        else
        { 
            uint32_t l_101[5];
            int32_t l_122 = 0x5DA63383L;
            int32_t l_123 = (-10L);
            uint8_t l_127 = 0xD9L;
            int i;
            for (i = 0; i < 5; i++)
                l_101[i] = 0x14D5734CL;
            if (g_76[1][1][3])
            { 
                uint64_t l_94 = 0x8CC9215A14429F1CLL;
                int64_t l_100 = 0x9639DBCFCC2E186BLL;
                l_94++;
                l_40 |= (+(safe_rshift_func_int16_t_s_s((l_101[2] = l_100), 13)));
            }
            else
            { 
                uint32_t l_102 = 0x8117D142L;
                if (l_102)
                    break;
            }
            for (l_86 = 18; (l_86 == 14); l_86 = safe_sub_func_int32_t_s_s(l_86, 7))
            { 
                uint32_t l_107 = 0xE5BE992DL;
                l_107 &= (safe_rshift_func_uint8_t_u_s(0x08L, 7));
                l_122 = ((safe_unary_minus_func_uint64_t_u((l_101[3] | (~(((safe_mod_func_uint64_t_u_u((0x7DL == ((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u(l_61.f1, 5)) >= (safe_div_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u((++g_124), l_107)) ^ l_107), p_17))), p_17)) , 1UL)), 0xB271CF4EE93D3DD4LL)) <= 0x6EEDL) >= 0xC3C9L))))) <= 0L);
            }
            l_127 = (g_27 = ((p_15 > g_76[1][1][3]) ^ g_120[0][0]));
        }
    }
    l_40 = ((safe_mod_func_uint16_t_u_u(1UL, (((safe_rshift_func_uint8_t_u_u((l_32 || (((!(p_17 >= (((g_133[0] = g_27) <= 0x46250C50EEEE7CDALL) , g_85[3].f0))) , 0L) <= 0xCD61L)), g_124)) >= p_15) && p_15))) != g_2);
    return g_120[0][1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_76[i][j][k], "g_76[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_85[i].f0, "g_85[i].f0", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_120[i][j], "g_120[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_133[i], "g_133[i]", print_hash_value);

    }
    transparent_crc(g_245.f0, "g_245.f0", print_hash_value);
    transparent_crc(g_245.f1, "g_245.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_259[i], "g_259[i]", print_hash_value);

    }
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_262[i], "g_262[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_272[i], "g_272[i]", print_hash_value);

    }
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_394[i][j][k], "g_394[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_456[i][j][k], "g_456[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
