// SPDX-License-Identifier: MIT
// cctest_csmith_eb3aaca1.c --- cctest case csmith_eb3aaca1 (csmith seed 3946491041)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3991654b */

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

// Options:   -s 3946491041 -o /tmp/csmith_gen_2v25x3zo/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint64_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

struct S1 {
   int8_t  f0;
   const uint32_t  f1;
   uint16_t  f2;
   uint32_t  f3;
   uint64_t  f4;
};

struct S2 {
   int32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint16_t  f3;
   uint16_t  f4;
   const struct S1  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   const int64_t  f0;
   int64_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S5 {
   struct S3  f0;
   int16_t  f1;
};
#pragma pack(pop)

struct S6 {
   struct S0  f0;
   int8_t  f1;
   uint32_t  f2;
};

struct S7 {
   const struct S0  f0;
   const int32_t  f1;
};

union U8 {
   int32_t  f0;
   const struct S3  f1;
   struct S3  f2;
};

union U9 {
   uint32_t  f0;
   const struct S1  f1;
   uint64_t  f2;
   uint32_t  f3;
};


static struct S6 g_8 = {{2UL,-7L},-9L,0x33563700L};
static uint32_t g_24 = 0x2404E547L;
static struct S7 g_34 = {{18446744073709551608UL,0x1F8487B2L},0x4764FE60L};
static uint16_t g_59 = 0xCBDCL;
static struct S5 g_60 = {{-1L,-3L},0x0137L};
static struct S2 g_71[3] = {{0x0B978F22L,-9L,0x77089988L,65535UL,0xE8C0L,{0xD6L,0x9E5886D3L,8UL,5UL,0x8499A8E064356B17LL}},{0x0B978F22L,-9L,0x77089988L,65535UL,0xE8C0L,{0xD6L,0x9E5886D3L,8UL,5UL,0x8499A8E064356B17LL}},{0x0B978F22L,-9L,0x77089988L,65535UL,0xE8C0L,{0xD6L,0x9E5886D3L,8UL,5UL,0x8499A8E064356B17LL}}};
static int32_t g_72[4][5][4] = {{{9L,0x4FB637DDL,0x4FB637DDL,9L},{9L,1L,0x4F03A57AL,0xDF714E35L},{0xB11E678BL,9L,0L,(-9L)},{0x4E5A6583L,(-1L),0x4E5A6583L,(-9L)},{0L,9L,0xB11E678BL,0xDF714E35L}},{{0x4F03A57AL,1L,9L,9L},{0x4FB637DDL,0x4FB637DDL,9L,0x4E5A6583L},{0x4F03A57AL,0L,0xB11E678BL,1L},{0L,0xB11E678BL,0x4E5A6583L,0xB11E678BL},{0x4E5A6583L,0xB11E678BL,0L,1L}},{{0xB11E678BL,0L,0x4F03A57AL,1L},{0x4FB637DDL,(-9L),(-9L),0x4FB637DDL},{0x4FB637DDL,9L,0x4E5A6583L,0L},{(-1L),0x4FB637DDL,0x4F03A57AL,0xB11E678BL},{1L,0xDF714E35L,1L,0xB11E678BL}},{{0x4F03A57AL,0x4FB637DDL,(-1L),0L},{0x4E5A6583L,9L,0x4FB637DDL,0x4FB637DDL},{(-9L),(-9L),0x4FB637DDL,1L},{0x4E5A6583L,0L,(-1L),9L},{0x4F03A57AL,(-1L),1L,(-1L)}}};
static int8_t g_122 = 0x4BL;
static int32_t g_139[1] = {0x2435B83EL};



static struct S0  func_1(void);
static const int32_t  func_2(union U8  p_3, uint16_t  p_4, int16_t  p_5, int32_t  p_6, const int32_t  p_7);
static int32_t  func_31(struct S7  p_32, struct S5  p_33);
static struct S5  func_35(uint8_t  p_36, uint32_t  p_37);




static struct S0  func_1(void)
{ 
    union U8 l_9 = {0x72A67F8BL};
    int32_t l_145 = 0xDF9921E0L;
    int32_t l_146 = (-1L);
    int16_t l_149 = 0xC831L;
    int32_t l_150 = 1L;
    int32_t l_160[4] = {0x0A73D2B0L,0x0A73D2B0L,0x0A73D2B0L,0x0A73D2B0L};
    struct S6 l_170 = {{0x6B2B969A7E2A24FFLL,2L},0x9AL,0x16054A38L};
    int32_t l_174 = 0x6E2F0540L;
    int i;
    g_72[0][2][3] = func_2((g_8 , l_9), ((~(safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(g_8.f0.f0, g_8.f1)) ^ l_9.f0), g_8.f0.f1))) , g_8.f0.f0), g_8.f0.f1, l_9.f0, l_9.f0);
    if (g_71[2].f5.f4)
    { 
        int32_t l_148 = 0x187993A3L;
        int32_t l_151 = 9L;
        int32_t l_158[1][5] = {{0xBF6E064EL,0xBF6E064EL,0xBF6E064EL,0xBF6E064EL,0xBF6E064EL}};
        int64_t l_164 = 8L;
        uint32_t l_167 = 0x3FFEDB68L;
        uint32_t l_173[2][3][3] = {{{0x491631D6L,0UL,0x491631D6L},{0x491631D6L,0UL,0x491631D6L},{0x491631D6L,0UL,0x491631D6L}},{{0x491631D6L,0UL,0x491631D6L},{0x491631D6L,0UL,0x491631D6L},{0x491631D6L,0UL,0x491631D6L}}};
        uint16_t l_178 = 0x4D08L;
        uint32_t l_183 = 3UL;
        int i, j, k;
        for (l_9.f2.f1 = 0; (l_9.f2.f1 >= 0); l_9.f2.f1 -= 1)
        { 
            const union U9 l_144 = {0xE7E373B7L};
            int32_t l_152 = (-5L);
            int32_t l_153 = 0x5CDA24EFL;
            int32_t l_154 = (-5L);
            int32_t l_156 = 0xE0E4DEADL;
            int32_t l_159 = 0x2144345DL;
            int32_t l_162 = 0xAE09CB0AL;
            int32_t l_166[5][3] = {{9L,1L,9L},{9L,1L,9L},{9L,1L,9L},{9L,1L,9L},{9L,1L,9L}};
            int i, j;
            g_72[0][2][3] ^= (((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(0xF4L, g_34.f0.f0)), ((g_71[2].f2 = 4294967295UL) <= (l_144 , g_60.f0.f1)))) >= 0xC740L) < g_122);
            for (g_8.f1 = 0; (g_8.f1 <= 3); g_8.f1 += 1)
            { 
                int8_t l_147 = (-1L);
                int32_t l_155 = (-1L);
                int32_t l_157 = 0x3CA0E7FDL;
                int32_t l_161 = 0x02AD1577L;
                int32_t l_163 = 0x5AE14A2BL;
                int32_t l_165[5][2] = {{0xC4D074B3L,0xC4D074B3L},{0xC4D074B3L,0xC4D074B3L},{0xC4D074B3L,0xC4D074B3L},{0xC4D074B3L,0xC4D074B3L},{0xC4D074B3L,0xC4D074B3L}};
                int i, j;
                l_167++;
            }
            if ((l_170 , ((safe_rshift_func_uint8_t_u_s(l_145, 3)) , g_71[2].f0)))
            { 
                l_173[1][0][2] = g_71[2].f4;
                return g_8.f0;
            }
            else
            { 
                int16_t l_175[5];
                int32_t l_176[5] = {0xD0FCB306L,0xD0FCB306L,0xD0FCB306L,0xD0FCB306L,0xD0FCB306L};
                int32_t l_177 = (-3L);
                int i;
                for (i = 0; i < 5; i++)
                    l_175[i] = 0L;
                l_178--;
                l_183 = (safe_mod_func_int16_t_s_s((g_8.f0.f0 || (g_71[2].f2 ^= g_60.f1)), g_71[2].f4));
                return g_8.f0;
            }
        }
    }
    else
    { 
        int16_t l_188[5][4] = {{(-7L),0x73F2L,0x9FC6L,0x73F2L},{0x73F2L,0x8946L,0x9FC6L,0x9FC6L},{(-7L),(-7L),0x73F2L,0x9FC6L},{(-1L),0x8946L,(-1L),0x73F2L},{(-1L),0x73F2L,0x73F2L,(-1L)}};
        int i, j;
        g_72[0][2][1] |= (((safe_mod_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(l_188[3][3], (((l_188[3][3] , g_71[1]) , ((l_188[2][2] || 0x18L) <= (-8L))) , l_188[0][1]))), g_71[2].f1)) , l_160[1]) | 0x6D68688AL);
    }
    return l_170.f0;
}



static const int32_t  func_2(union U8  p_3, uint16_t  p_4, int16_t  p_5, int32_t  p_6, const int32_t  p_7)
{ 
    int64_t l_16[2][3] = {{0x23CEA2FF3E141B6BLL,0xD478254981C5860BLL,0xD478254981C5860BLL},{0x23CEA2FF3E141B6BLL,0xD478254981C5860BLL,0xD478254981C5860BLL}};
    int32_t l_17 = 8L;
    int32_t l_18[2][5] = {{(-1L),0L,(-1L),0L,(-1L)},{1L,1L,1L,1L,1L}};
    uint32_t l_19 = 0UL;
    int i, j;
    p_3.f0 = (safe_unary_minus_func_uint8_t_u((l_19--)));
    for (g_8.f1 = (-23); (g_8.f1 >= 8); ++g_8.f1)
    { 
        uint32_t l_46 = 0UL;
        --g_24;
        for (p_3.f0 = 0; (p_3.f0 < 29); ++p_3.f0)
        { 
            uint64_t l_47[1][5];
            int32_t l_121 = (-1L);
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_47[i][j] = 0x115E53F01E83513FLL;
            }
            for (p_5 = (-14); (p_5 != (-27)); p_5 = safe_sub_func_int64_t_s_s(p_5, 1))
            { 
                struct S2 l_41 = {0x70B7B202L,-1L,4294967291UL,65535UL,65533UL,{0x84L,18446744073709551615UL,0xD250L,4294967290UL,0xD79C1F62131AC691LL}};
                l_121 = func_31(g_34, func_35(((((safe_unary_minus_func_int32_t_s(p_4)) , (safe_sub_func_int32_t_s_s((l_41 , (safe_mul_func_uint8_t_u_u(((l_47[0][3] = ((safe_sub_func_uint16_t_u_u(p_4, l_46)) <= g_8.f1)) && 0x8DD93F870A655225LL), 0L))), 0L))) ^ g_34.f0.f1) > g_8.f0.f1), g_8.f2));
            }
            for (l_17 = 0; (l_17 <= 3); l_17 += 1)
            { 
                int i, j, k;
                g_122 ^= ((g_72[l_17][(l_17 + 1)][l_17] && ((0UL <= (g_72[l_17][(l_17 + 1)][l_17] = (g_72[l_17][(l_17 + 1)][l_17] >= (-1L)))) , 0x30816501L)) >= g_59);
                g_72[1][0][0] ^= (((safe_mul_func_uint16_t_u_u(((0xBA5EL & (((0x0BL & (safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(1L, (((safe_rshift_func_uint8_t_u_u(g_34.f0.f0, g_71[2].f5.f1)) > g_34.f0.f0) , 0xD6C9L))), l_121)), g_8.f1))) || p_4) & g_71[2].f5.f4)) < l_16[1][0]), l_46)) == (-7L)) , 0xA26C4C03L);
            }
        }
        g_139[0] &= (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_17, 13)), ((safe_add_func_int64_t_s_s(l_19, l_46)) == (((g_72[0][2][3] == 1L) ^ 0xBD9AF42DL) || p_3.f0))));
    }
    return p_5;
}



static int32_t  func_31(struct S7  p_32, struct S5  p_33)
{ 
    struct S1 l_68[5] = {{0x09L,0xDD522949L,0xF137L,4294967294UL,18446744073709551615UL},{0x09L,0xDD522949L,0xF137L,4294967294UL,18446744073709551615UL},{0x09L,0xDD522949L,0xF137L,4294967294UL,18446744073709551615UL},{0x09L,0xDD522949L,0xF137L,4294967294UL,18446744073709551615UL},{0x09L,0xDD522949L,0xF137L,4294967294UL,18446744073709551615UL}};
    int8_t l_73 = 0x25L;
    uint16_t l_87 = 0x4094L;
    int32_t l_94 = (-4L);
    int32_t l_98 = (-1L);
    int32_t l_101 = 0x347B7964L;
    struct S0 l_115[2] = {{18446744073709551615UL,4L},{18446744073709551615UL,4L}};
    uint16_t l_116 = 0x4F87L;
    int i;
    for (g_59 = 0; (g_59 > 60); g_59++)
    { 
        int32_t l_76 = (-5L);
        int32_t l_100[5][5] = {{0x11135B92L,0x11135B92L,0x62B35B44L,0x11135B92L,0x11135B92L},{1L,1L,1L,0xA3AA3B8CL,1L},{0x11135B92L,0L,0L,0x11135B92L,0L},{1L,1L,0x3C58A545L,1L,1L},{0L,0x11135B92L,0L,0L,0x11135B92L}};
        uint64_t l_103 = 1UL;
        int i, j;
        if (((safe_unary_minus_func_int32_t_s(((safe_rshift_func_uint16_t_u_u((g_8.f0.f0 && ((safe_div_func_uint64_t_u_u((l_68[2] , (((g_60.f0.f1 = ((p_33.f1 != (safe_rshift_func_int8_t_s_u((g_72[0][2][3] = (g_71[2] , 0xC9L)), l_73))) == l_73)) == p_33.f1) || p_32.f0.f1)), 18446744073709551606UL)) < 0x9D3A1594L)), 15)) && 5L))) ^ 0x7D4A0575L))
        { 
            uint32_t l_78 = 0x219E070DL;
            int32_t l_86 = 0xBF143A66L;
            g_72[0][3][2] = g_34.f1;
            for (g_8.f2 = (-26); (g_8.f2 >= 20); g_8.f2++)
            { 
                int8_t l_77 = 0x0DL;
                l_78++;
                l_86 = (((((safe_mul_func_uint8_t_u_u(g_71[2].f3, ((((safe_lshift_func_int8_t_s_u((g_71[2].f5.f1 , (((+l_68[2].f4) | 1L) , g_8.f0.f0)), p_33.f0.f1)) | p_33.f0.f1) < l_68[2].f1) , g_60.f0.f1))) < 0x6FL) , 0x81BD54BCL) & g_71[2].f5.f0) | l_78);
            }
        }
        else
        { 
            uint64_t l_97 = 18446744073709551608UL;
            int32_t l_99[4] = {0x25EDB48BL,0x25EDB48BL,0x25EDB48BL,0x25EDB48BL};
            int i;
            if (l_87)
            { 
                uint16_t l_88 = 0x7850L;
                int8_t l_93 = 0x78L;
                g_72[0][2][3] = 6L;
                l_98 = (l_88 >= (safe_sub_func_int8_t_s_s(0L, (safe_rshift_func_int8_t_s_s((l_94 ^= l_93), (l_97 |= (safe_mod_func_int64_t_s_s(l_93, g_60.f1))))))));
            }
            else
            { 
                int32_t l_102 = 0x99BF897CL;
                --l_103;
                return g_71[2].f2;
            }
        }
    }
    for (l_101 = (-4); (l_101 != (-9)); l_101--)
    { 
        uint32_t l_112 = 0UL;
        int32_t l_120 = 1L;
        for (g_60.f0.f1 = 2; (g_60.f0.f1 > (-1)); g_60.f0.f1--)
        { 
            uint32_t l_117 = 0x31D5B22EL;
            for (p_33.f0.f1 = 12; (p_33.f0.f1 < (-22)); p_33.f0.f1 = safe_sub_func_int16_t_s_s(p_33.f0.f1, 7))
            { 
                l_98 = p_32.f0.f1;
                --l_112;
                if (l_112)
                    continue;
            }
            if ((l_115[0] , l_94))
            { 
                if (l_116)
                    break;
                l_117 = (g_34.f0.f0 == 0x64L);
                if (l_115[0].f0)
                    break;
            }
            else
            { 
                l_120 &= ((1UL || (g_72[0][2][3] |= p_33.f0.f1)) > (((g_71[2].f4 , (safe_add_func_uint32_t_u_u(1UL, g_71[2].f3))) | g_34.f0.f1) <= l_117));
            }
        }
    }
    return g_60.f0.f0;
}



static struct S5  func_35(uint8_t  p_36, uint32_t  p_37)
{ 
    uint32_t l_48 = 0UL;
    int32_t l_57 = 7L;
    l_48 = (g_8.f2 , (-1L));
    for (g_8.f2 = 0; (g_8.f2 == 41); g_8.f2++)
    { 
        uint32_t l_58[3][3] = {{1UL,18446744073709551614UL,1UL},{1UL,18446744073709551614UL,1UL},{1UL,18446744073709551614UL,1UL}};
        int i, j;
        g_59 = (((g_24 > ((safe_mul_func_uint8_t_u_u((l_58[2][2] ^= (((l_57 = (((safe_rshift_func_int16_t_s_s(p_36, (l_48 | ((safe_div_func_uint16_t_u_u(g_34.f0.f1, g_24)) < 0x527FL)))) < p_37) && g_34.f0.f1)) >= 0xC58C9C96L) != 18446744073709551611UL)), g_34.f0.f1)) <= p_37)) , l_58[0][1]) && l_57);
    }
    return g_60;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0.f0, "g_8.f0.f0", print_hash_value);
    transparent_crc(g_8.f0.f1, "g_8.f0.f1", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_34.f0.f0, "g_34.f0.f0", print_hash_value);
    transparent_crc(g_34.f0.f1, "g_34.f0.f1", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_60.f0.f0, "g_60.f0.f0", print_hash_value);
    transparent_crc(g_60.f0.f1, "g_60.f0.f1", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_71[i].f0, "g_71[i].f0", print_hash_value);
        transparent_crc(g_71[i].f1, "g_71[i].f1", print_hash_value);
        transparent_crc(g_71[i].f2, "g_71[i].f2", print_hash_value);
        transparent_crc(g_71[i].f3, "g_71[i].f3", print_hash_value);
        transparent_crc(g_71[i].f4, "g_71[i].f4", print_hash_value);
        transparent_crc(g_71[i].f5.f0, "g_71[i].f5.f0", print_hash_value);
        transparent_crc(g_71[i].f5.f1, "g_71[i].f5.f1", print_hash_value);
        transparent_crc(g_71[i].f5.f2, "g_71[i].f5.f2", print_hash_value);
        transparent_crc(g_71[i].f5.f3, "g_71[i].f5.f3", print_hash_value);
        transparent_crc(g_71[i].f5.f4, "g_71[i].f5.f4", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_72[i][j][k], "g_72[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_139[i], "g_139[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
